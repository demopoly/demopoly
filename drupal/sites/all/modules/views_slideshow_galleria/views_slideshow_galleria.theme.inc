<?php

/**
 *  @file
 *  The theme system that controls the display of Views Slideshow: Galleria.
 */

/**
 *  Process variables for views-galleria-main-frame.tpl.php.
 */
function template_preprocess_views_slideshow_galleria_main_frame(&$vars) {
  if ($vars['settings']['advanced']['strip_images']) {
    // Initialize our $images array.
    $vars['images'] = array();

    $vars['original_rows'] = $vars['rows'];

    // Strip all images from the $rows created by the original view query.
    foreach($vars['rows'] as $id => $item) {
      preg_match('@(<\s*img\s+[^>]*>)@i', $item, $matches);
      if (@$image = $matches[1]) {
        // If our image is in an anchor tag, use its URL.
        preg_match('@<\s*a\s+href\s*=\s*"\s*([^"]+)\s*"[^>]*>[^<]*'. preg_quote($image) .'[^<]*<\s*/a\s*>@i', $item, $urls);
        if (isset($urls[1])) {
          $url = $urls[1];
        }
        else {
          // Otherwise link to the original image or the front page instead.
          preg_match('@src\s*=\s*"([^"]+)"@i', $image, $urls);
          $url = isset($urls[1]) ? $urls[1] : url('<front>');
        }

        // Ensure the link for the original image is preserved.
        // $url has already been url'ized.
        $vars['rows'][$id] = '<a href="'. $url .'">'. $image .'</a>';

        // Add the image to our image array to display.
        $vars['images'][$id] = $image;
      }
    }
  }

  _views_slideshow_galleria_add_js($vars['settings'], 'views-slideshow-galleria-images-'. $vars['id']);

  $vars['classes_array'][] = 'views-slideshow-galleria-images';
  $vars['classes_array'][] = 'galleria';
  if ($vars['settings']['advanced']['avoid_flash_of_content']) {
    $vars['classes_array'][] = 'views-slideshow-galleria-hidden';
  }

  drupal_add_css(drupal_get_path('module', 'views_slideshow_galleria') .'/views_slideshow_galleria.css');
}

/*
 * Helper function to build and pass Galleria settings to Drupal. 
 */
function _views_slideshow_galleria_add_js($options, $id) {
  static $loaded_themes;

  // Keep track of which Galleria plugin JS themes have already been loaded.
  if (!isset($loaded_themes)) {
    $loaded_themes = array();
  }

  // Import variables.
  extract($options);
  extract($advanced);
  extract($custom_theme_options);

  $library_path = libraries_get_path('galleria');
  $galleria_path = _views_slideshow_galleria_library_path();

  // Load Galleria.
  drupal_add_js($galleria_path, array('group' => JS_LIBRARY));
  // Load our galleria js.
  drupal_add_js(drupal_get_path('module', 'views_slideshow_galleria') . '/views_slideshow_galleria.js');

  if ($history) {
    drupal_add_js($library_path .'/plugins/galleria.history.js');
  }

  // Process Galleria settings.
  $settings = array(
    'autoplay' => ($autoplay) ? (($autoplay_ms) ? (int)$autoplay_ms : TRUE) : FALSE,
    'carousel' => (bool)$carousel,
    'carouselFollow' => (bool)$carousel_follow,
    'carouselSpeed' => (int)check_plain($carousel_speed),
    'carouselSteps' => ($carousel_steps == 'auto') ? $carousel_steps : (int)$carousel_steps,
    'clicknext' => (bool)$clicknext,
    'debug' => (bool)$debug,
    'dummy' => check_plain($dummy),
    'easing' => check_plain($easing),
    'fullscreenCrop' => (bool)$fullscreen_crop,
    'fullscreenDoubleTap' => (bool)$fullscreen_double_tap,
    'fullscreenTransition' => (bool)$fullscreen_double_tap,
    'height' => (float)check_plain($height),
    'idleMode' => (bool)$idle_mode,
    'idleTime' => (int)check_plain($idle_time),
    'imageCrop' => ($image_crop == 'width' || $image_crop == 'height') ? $image_crop : (bool)$image_crop,
    'imageMargin' => (int)check_plain($image_margin),
    'imagePan' => (bool)$image_pan,
    'imagePanSmoothness' => (int)$image_pan_smoothness,
    'imagePosition' => check_plain($image_position),
    'keepSource' => (bool)$keep_source,
    'layerFollow' => (bool)$layer_follow,
    'lightbox' => (bool)$lightbox,
    'lightboxFadeSpeed' => (int)check_plain($lightbox_fade_speed),
    'lightboxTransitionSpeed' => (int)check_plain($lightbox_transition_speed),
    'maxScaleRatio' => (int)$max_scale_ratio,
    'minScaleRatio' => (int)$min_scale_ratio,
    'overlayOpacity' => (float)$overlay_opacity,
    'overlayBackground' => check_plain($overlay_background),
    'pauseOnInteraction' => (bool)$pause_on_interaction,
    'popupLlinks' => (bool)$popup_links,
    'preload' => ($preload == 'all') ? 'all' : (int)$preload,
    'queue' => (bool)$queue,
    'responsive' => (bool)$responsive,
    'show' => (int)$show,
    'showInfo' => (bool)$show_info,
    'showCounter' => (bool)$show_counter,
    'showImagenav' => (bool)$show_imagenav,
    'swipe' => (bool)$swipe,
    'thumbCrop' => ($thumb_crop == 'width' || $thumb_crop == 'height') ? $thumb_crop : (bool)$thumb_crop,
    'thumbFit' => (bool)$thumb_fit,
    'thumbMargin' => (int)check_plain($thumb_margin),
    'thumbQuality' => ($thumb_quality == 'auto') ? 'auto' : (bool)$thumb_quality,
    'thumbnails' => ($thumbnails == 'empty' || $thumbnails == 'numbers') ? $thumbnails : (bool)$thumbnails,
    'touchTransition' => check_plain($touch_transition),
    'transition' => check_plain($transition),
    'transitionSpeed' => (int)$transition_speed,
    'width' => ($width == 'auto') ? $width : (int)check_plain($width),
  );

  if ($theme == 'custom' && !empty($custom_theme) && !empty($custom_theme_path)) {
    $theme = check_plain($custom_theme);
    $theme_path = base_path() . $custom_theme_path;
  }
  else {
    $theme_path = base_path() . libraries_get_path('galleria') ."/themes/{$theme}/galleria.{$theme}.js";
  }

  // Load the Galleria theme.
  if (!isset($loaded_themes[$theme_path])) {
    $settings['themePath'] = $theme_path;
    $loaded_themes[$theme_path] = TRUE;
  }

  // Process advanced settings.
  if (isset($extend) && !empty($extend)) {
    $settings['extend'] = $extend;
  }
  if (isset($data_config) && !empty($data_config)) {
    $settings['dataConfig'] = $data_config;
  }
  if (isset($data_source) && !empty($data_source)) {
    $settings['dataSource'] = $data_source;
  }

  // Load Galleria settings.
  drupal_add_js(array('viewsSlideshowGalleria' => array($id => $settings)), 'setting');
}
