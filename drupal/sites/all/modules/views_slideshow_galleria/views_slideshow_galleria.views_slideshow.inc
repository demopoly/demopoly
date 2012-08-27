<?php

/**
 *  @file
 *  The default options available with Views Slideshow: Galleria.
 */

 /**
 * Define the type of the slideshow (eg.: cycle, imageflow, ddblock).
 *
 * @return
 *   Associative array of slideshow type and its information.
 */
function views_slideshow_galleria_views_slideshow_slideshow_info() {
  $options = array(
    'views_slideshow_galleria' => array(
      'name' => t('Galleria'),
      'accepts' => array(
        'goToSlide',
        'nextSlide',
        'previousSlide',
      ),
      'calls' => array(
        'goToSlide',
        'nextSlide',
        'previousSlide',
      ),
    ),
  );
  return $options;
}


/**
 *  Implements hook_views_slideshow_options_form().
 */
function views_slideshow_galleria_views_slideshow_slideshow_type_form(&$form, &$form_state, &$view) {
  if (!$galleria_path = _views_slideshow_galleria_library_path()) {
    drupal_set_message(t('You need to install the Galleria plugin. You can find the plugin at !url.', array('!url' => l('http://galleria.io', 'http://galleria.io', array('attributes' => array('target' => '_blank'))))), 'error');
  }

  $transition_options = array(
    'fade' => t('Fade'),
    'flash' => t('Flash'),
    'pulse' => t('Pulse'),
    'slide' => t('Slide'),
    'fadeslide' => t('Fade/Slide'),
  );

   $crop_options = array(
    'width' => t('Width'),
    'height' => t('Height'),
    0 => t('False'),
    1 => t('True'),
  );

  // Create the form elements for our Galleria view options.
  $form['views_slideshow_galleria'] = array(
    '#type' => 'fieldset',
    '#title' => t('Galleria options'),
    '#description' => t("These options affect the slideshow when it's in the !galleria mode. Please see the !documentation for more information.", array('!galleria' => l(t('Galleria'), 'http://galleria.io', array('attributes' => array('target' => 'blank'))), '!documentation' => l(t('documentation'), 'http://galleria.io/docs/1.2', array('attributes' => array('target' => '_blank'))))),
    '#collapsible' => TRUE,
    '#collapsed' => !($view->options['mode'] == 'views_slideshow_galleria'),
  );

  $form['views_slideshow_galleria']['theme'] = array(
    '#type' => 'radios',
    '#title' => t('Theme'),
    '#description' => t('Galleria theme to load on display. If you choose the %custom option, you must specify the path to your custom JavaScript theme below.', array('%custom' => t('<Custom>'))),
    '#default_value' => $view->options['views_slideshow_galleria']['theme'],
    '#options' => array(
      'custom' => t('Custom (specify options below)'),
      'miniml' => t('Miniml'),
      'twelve' => t('Twelve'),
      'fullscreen' => t('Fullscreen'),
      'classic' => t('Classic'),
      'folio' => t('Folio'),
    ),
  );
  $form['views_slideshow_galleria']['custom_theme_options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Custom theme options'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['views_slideshow_galleria']['custom_theme_options']['custom_theme'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom theme'),
    '#description' => t('Leave this blank unless you wish to override the theme used by the plugin. You should specify the name of the custom theme here, and enter its path below. See the !theme_api for how to create your own Galleria JavaScript themes.', array('!theme_api' => l(t('Galleria JavaScript theme API'), 'http://github.com/aino/galleria/blob/master/docs/theme_api.rst', array('attributes' => array('target' => '_blank'))), '%custom' => t('<Custom>'))),
    '#default_value' => $view->options['views_slideshow_galleria']['custom_theme_options']['custom_theme'],
  );
  $form['views_slideshow_galleria']['custom_theme_options']['custom_theme_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom theme path'),
    '#description' => t("Leave this blank unless you're overriding the theme. See the !theme_api for how to create your own Galleria JavaScript themes.", array('!theme_api' => l(t('Galleria JavaScript theme API'), 'http://github.com/aino/galleria/blob/master/docs/theme_api.rst', array('attributes' => array('target' => '_blank'))))),
    '#default_value' => $view->options['views_slideshow_galleria']['custom_theme_options']['custom_theme_path'],
  );
  $form['views_slideshow_galleria']['autoplay'] = array(
    '#type' => 'checkbox',
    '#title' => t('Autoplay'),
    '#description' => t('If checked, then the slide show will begin rotating after the specified time below.'),
    '#default_value' => $view->options['views_slideshow_galleria']['autoplay'],
  );
  $form['views_slideshow_galleria']['autoplay_ms'] = array(
    '#type' => 'textfield',
    '#title' => t('Autoplay time'),
    '#description' => t('If the slide show is set to autoplay above, then begin after this many miliseconds.'),
    '#default_value' => $view->options['views_slideshow_galleria']['autoplay_ms'],
  );
  $form['views_slideshow_galleria']['carousel'] = array(
    '#type' => 'checkbox',
    '#title' => t('Carousel'),
    '#description' => t('If checked, this will activate the carousel when needed. Otherwise it will not appear at all.'),
    '#default_value' => $view->options['views_slideshow_galleria']['carousel'],
  );
  $form['views_slideshow_galleria']['carousel_follow'] = array(
    '#type' => 'checkbox',
    '#title' => t('Carousel follow'),
    '#description' => t('If checked, the carousel will follow the active image.'),
    '#default_value' => $view->options['views_slideshow_galleria']['carousel_follow'],
  );
  $form['views_slideshow_galleria']['carousel_speed'] = array(
    '#type' => 'textfield',
    '#title' => t('Carousel speed'),
    '#description' => t('The slide speed of the carousel in milliseconds.'),
    '#default_value' => $view->options['views_slideshow_galleria']['carousel_speed'],
  );
  $form['views_slideshow_galleria']['carousel_steps'] = array(
    '#type' => 'textfield',
    '#title' => t('Carousel steps'),
    '#description' => t('The number of "steps" the carousel will slide when navigating between available thumbnails. Specifying %auto will move the carousel as many steps as there are visible thumbnails.', array('%auto' => 'auto')),
    '#default_value' => $view->options['views_slideshow_galleria']['carousel_steps'],
  );
  $form['views_slideshow_galleria']['clicknext'] = array(
    '#type' => 'checkbox',
    '#title' => t('Click next'),
    '#description' => t('This options adds a click event over the stage that navigates to the next image in the gallery. Useful for mobile browsers and other simpler applications.'),
    '#default_value' => $view->options['views_slideshow_galleria']['clicknext'],
  );
  $form['views_slideshow_galleria']['dummy'] = array(
    '#type' => 'textfield',
    '#title' => t('Dummy'),
    '#description' => t('This option allows you to define an image that should be shown if Galleria can’t find the original image.'),
    '#default_value' => $view->options['views_slideshow_galleria']['dummy'],
  );
  $form['views_slideshow_galleria']['easing'] = array(
    '#type' => 'select',
    '#title' => t('Easing'),
    '#description' => t('You can use this option to control the animation easing on a global level in Galleria.'),
    '#default_value' => $view->options['views_slideshow_galleria']['easing'],
    '#options' => array(
      'galleria' => 'galleria',
      'galleriain' => 'galleriaIn',
      'galleriaout' => 'galleriaOut',
    ),
  );
  $form['views_slideshow_galleria']['fullscreen_crop'] = array(
    '#type' => 'checkbox',
    '#title' => t('Fullscreen crop'),
    '#description' => t('Sets how Galleria should crop when in fullscreen mode. See imageCrop for cropping options.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['fullscreen_crop'],
    '#options' => $crop_options,
  );
  $form['views_slideshow_galleria']['fullscreen_double_tap'] = array(
    '#type' => 'checkbox',
    '#title' => t('Fullscreen double tap'),
    '#description' => t('This options listens for the double-tap event on touch devices and toggle fullscreen mode if it happens.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['fullscreen_double_tap'],
  );
  $form['views_slideshow_galleria']['fullscreen_transition'] = array(
    '#type' => 'select',
    '#title' => t('Fullscreen transition'),
    '#description' => t('Defines a different transition for fullscreen mode. Some transitions are less smooth in fullscreen mode, this option allows you to set a different transition when in fullscreen mode. '),
    '#default_value' => $view->options['views_slideshow_galleria']['fullscreen_transition'],
    '#options' => $transition_options,
  );
  $form['views_slideshow_galleria']['height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height'),
    '#description' => t('This will set a height to the gallery. If you set this to %auto and no CSS height is found, Galleria will automatically add a 16/9 ratio as a fallback.', array('%auto' => 'auto')),
    '#default_value' => $view->options['views_slideshow_galleria']['height'],
    '#required' => TRUE,
  );
  $form['views_slideshow_galleria']['idle_mode'] = array(
    '#type' => 'checkbox',
    '#title' => t('Idle mode'),
    '#description' => t('Global option for turning on/off idle mode. Eache gallery enters idle mode after certain amount of time and themes behave differently when this happens, f.ex clears the stage from distractions.'),
    '#default_value' => $view->options['views_slideshow_galleria']['idle_mode'],
  );
  $form['views_slideshow_galleria']['idle_time'] = array(
    '#type' => 'textfield',
    '#title' => t('Idle time'),
    '#description' => t('If you are adding elements into idle mode using the .addIdleState() method, you can control the delay before Galleria falls into Idle mode using this option.'),
    '#default_value' => $view->options['views_slideshow_galleria']['idle_time'],
  );
  $form['views_slideshow_galleria']['idle_speed'] = array(
    '#type' => 'textfield',
    '#title' => t('Idle speed'),
    '#description' => t('If you are adding elements into idle mode using the addIdleState() method, you can control the animation speed of the idle elements.'),
    '#default_value' => $view->options['views_slideshow_galleria']['idle_speed'],
  );
  $form['views_slideshow_galleria']['image_crop'] = array(
    '#type' => 'select',
    '#title' => t('Image crop'),
    '#description' => t('Defines how the main image will be cropped inside it’s container.'),
    '#default_value' => $view->options['views_slideshow_galleria']['image_crop'],
    '#options' => $crop_options,
  );
  $form['views_slideshow_galleria']['image_margin'] = array(
    '#type' => 'textfield',
    '#title' => t('Image margin'),
    '#description' => t('Sets a margin between the image and stage. Specify the number of pixels.'),
    '#default_value' => $view->options['views_slideshow_galleria']['image_margin'],
  );
  $form['views_slideshow_galleria']['image_pan'] = array(
    '#type' => 'checkbox',
    '#title' => t('Image pan'),
    '#description' => t('Galleria comes with a built-in panning effect. The effect is sometimes useful if you have cropped images and want to let the users pan across the stage to see the entire image.'),
    '#default_value' => $view->options['views_slideshow_galleria']['image_pan'],
  );
  $form['views_slideshow_galleria']['image_pan_smoothness'] = array(
    '#type' => 'textfield',
    '#title' => t('Image pan smoothness'),
    '#description' => t('This value sets how “smooth” the image pan movement should be when setting image_pan to true. The higher value, the smoother effect but also CPU consuming.'),
    '#default_value' => $view->options['views_slideshow_galleria']['image_pan_smoothness'],
  );
  $form['views_slideshow_galleria']['image_position'] = array(
    '#type' => 'textfield',
    '#title' => t('Image position'),
    '#description' => t("Positions the main image. Works like the CSS background-position property; i.e., 'top right' or '20% 100%'. You can use keywords, percents or pixels. The first value is the horizontal position and the second is the vertical. Read more at !read_more.", array('!read_more' => l('http://www.w3.org/TR/REC-CSS1/#background-position', 'http://www.w3.org/TR/REC-CSS1/#background-position', array('attributes' => array('target' => '_blank'))))),
    '#default_value' => $view->options['views_slideshow_galleria']['image_position'],
  );
  $form['views_slideshow_galleria']['initial_transition'] = array(
    '#type' => 'select',
    '#title' => t('Initial transition'),
    '#description' => t('Defines a different transition to show on the first image.'),
    '#default_value' => $view->options['views_slideshow_galleria']['initial_transition'],
    '#options' => $transition_options,
  );
  $form['views_slideshow_galleria']['layer_follow'] = array(
    '#type' => 'checkbox',
    '#title' => t('Layer follow'),
    '#description' => t('If checked, the source HTML will be left intact, which will also create clickable images of each image inside the source. Useful for building custom thumbnails and still have galleria control the gallery.'),
    '#default_value' => $view->options['views_slideshow_galleria']['layer_follow'],
  );
  $form['views_slideshow_galleria']['lightbox'] = array(
    '#type' => 'checkbox',
    '#title' => t('Lightbox'),
    '#description' => t('This option acts as a helper for attaching a lightbox when the user clicks on an image. If you have a link defined for the image, the link will take precedence.'),
    '#default_value' => $view->options['views_slideshow_galleria']['lightbox'],
  );
  $form['views_slideshow_galleria']['lightbox_fade_speed'] = array(
    '#type' => 'textfield',
    '#title' => t('Lightbox fade speed'),
    '#description' => t('When calling .showLightbox() the lightbox will animate and fade the images and captions. This value controls how fast they should fade in milliseconds.'),
    '#default_value' => $view->options['views_slideshow_galleria']['lightboxFadeSpeed'],
  );
  $form['views_slideshow_galleria']['lightbox_transition_speed'] = array(
    '#type' => 'textfield',
    '#title' => t('Lightbox transition speed'),
    '#description' => t('When calling .showLightbox() the lightbox will animate the white square before displaying the image. This value controls how fast it should animate in milliseconds.'),
    '#default_value' => $view->options['views_slideshow_galleria']['lightboxTransitionSpeed'],
  );
  $form['views_slideshow_galleria']['max_scale_ratio'] = array(
    '#type' => 'textfield',
    '#title' => t('Max scale ratio'),
    '#description' => t("Sets the maximum scale ratio for images. If you don't want Galleria to upscale any images, set this to 1. Leaving it blank will allow any scaling of the images."),
    '#default_value' => $view->options['views_slideshow_galleria']['max_scale_ratio'],
  );
  $form['views_slideshow_galleria']['min_scale_ratio'] = array(
    '#type' => 'textfield',
    '#title' => t('Min scale ratio'),
    '#description' => t("Sets the minimum scale ratio for images. F.ex, if you don’t want Galleria to downscale any images, set this to 1."),
    '#default_value' => $view->options['views_slideshow_galleria']['min_scale_ratio'],
  );
  $form['views_slideshow_galleria']['overlay_opacity'] = array(
    '#type' => 'textfield',
    '#title' => t('Overlay opacity'),
    '#description' => t('This sets how much opacity the overlay should have when calling showLightbox().'),
    '#default_value' => $view->options['views_slideshow_galleria']['overlay_opacity'],
  );
  $form['views_slideshow_galleria']['overlay_background'] = array(
    '#type' => 'textfield',
    '#title' => t('Overlay background'),
    '#description' => t('This defines the overlay background color when calling showLightbox().'),
    '#default_value' => $view->options['views_slideshow_galleria']['overlay_background'],
  );
  $form['views_slideshow_galleria']['pause_on_interaction'] = array(
    '#type' => 'checkbox',
    '#title' => t('Pause on interaction'),
    '#description' => t('During playback, Galleria will stop the playback if the user presses thumbnails or any other navigational links.'),
    '#default_value' => $view->options['views_slideshow_galleria']['pause_on_interaction'],
  );
  $form['views_slideshow_galleria']['popup_links'] = array(
    '#type' => 'checkbox',
    '#title' => t('Popup links'),
    '#description' => t('Checking this box will open any image links in a new window.'),
    '#default_value' => $view->options['views_slideshow_galleria']['popup_links'],
  );
  $form['views_slideshow_galleria']['preload'] = array(
    '#type' => 'textfield',
    '#title' => t('Preload'),
    '#description' => t("Defines how many images Galleria should preload in advance. Please note that this only applies when you are using separate thumbnail files. Galleria always cache all preloaded images. <ul><li>%2 preloads the next 2 images in line.</li><li>%all forces Galleria to start preloading all images. This may slow down client.</li><li>%0 will not preload any images</li></ul>", array('%2' => '2', '%all' => 'all', '%0' => '0')),
    '#default_value' => $view->options['views_slideshow_galleria']['preload'],
  );
  $form['views_slideshow_galleria']['queue'] = array(
    '#type' => 'checkbox',
    '#title' => t('Queue'),
    '#description' => t("Galleria queues all activation clicks (next/prev & thumbnails). You can see this effect when, for example, clicking %next many times. If you don't want Galleria to queue, then uncheck the box.", array('%next' => t('next'))),
    '#default_value' => $view->options['views_slideshow_galleria']['queue'],
  );
  $form['views_slideshow_galleria']['responsive'] = array(
    '#type' => 'checkbox',
    '#title' => t('Responsive'),
    '#description' => t("Sets Galleria in responsive mode."),
    '#default_value' => $view->options['views_slideshow_galleria']['responsive'],
  );
  $form['views_slideshow_galleria']['show'] = array(
    '#type' => 'textfield',
    '#title' => t('Show'),
    '#description' => t("This defines what image index to show at first. If you have left the %history box checked, then a permalink will override this number.", array('%history' => t('History permalinks'))),
    '#default_value' => $view->options['views_slideshow_galleria']['show'],
  );
  $form['views_slideshow_galleria']['show_iInfo'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show info'),
    '#description' => t('Set this to false if you do not wish to display the caption.'),
    '#default_value' => $view->options['views_slideshow_galleria']['show_info'],
  );
  $form['views_slideshow_galleria']['show_counter'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show counter'),
    '#description' => t('Set this to false if you do not wish to display the counter.'),
    '#default_value' => $view->options['views_slideshow_galleria']['show_counter'],
  );
  $form['views_slideshow_galleria']['show_imagenav'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show image navigation'),
    '#description' => t('Set this to false if you do not wish to display the image navigation (next/prev arrows).'),
    '#default_value' => $view->options['views_slideshow_galleria']['show_imagenav'],
  );
  $form['views_slideshow_galleria']['swipe'] = array(
    '#type' => 'checkbox',
    '#title' => t('Swipe'),
    '#description' => t('Enables a swipe movement for flicking through images on touch devices.'),
    '#default_value' => $view->options['views_slideshow_galleria']['swipe'],
  );
  $form['views_slideshow_galleria']['thumb_crop'] = array(
    '#type' => 'select',
    '#title' => t('Thumb crop'),
    '#description' => t('Same as imageCrop, but for thumbnails.'),
    '#default_value' => $view->options['views_slideshow_galleria']['thumb_crop'],
    '#options' => $crop_options,
  );
  $form['views_slideshow_galleria']['thumb_fit'] = array(
    '#type' => 'checkbox',
    '#title' => t('Thumb fit'),
    '#description' => t("If this is set to ‘true’, all thumbnail containers will be shrinked to fit the actual thumbnail size. This is useful if you have thumbnails of various sizes and will then float nicely side-by-side. This is only relevant if thumbCrop is set to anything else but ‘true’. If you want all thumbnails to fit inside a container with predefined width & height, set this to ‘false’."),
    '#default_value' => $view->options['views_slideshow_galleria']['thumb_fit'],
  );
  $form['views_slideshow_galleria']['thumb_margin'] = array(
    '#type' => 'textfield',
    '#title' => t('Thumb margin'),
    '#description' => t('Same as %imagemargin, but for thumbnails.', array('%imagemargin' => t('Image margin'))),
    '#default_value' => $view->options['views_slideshow_galleria']['thumb_margin'],
  );
  $form['views_slideshow_galleria']['thumb_quality'] = array(
    '#type' => 'select',
    '#title' => t('Thumb quality'),
    '#description' => t("Defines if and how IE should use bicubic image rendering for thumbnails.<ul><li>%auto uses high quality if image scaling is moderate.</li><li>%false will not use high quality (better performance).</li><li>%true will force high quality renedring (can slow down performance)</li></ul>", array('%auto' => t('Auto'), '%false' => t('False'), '%true' => t('True'))),
    '#default_value' => $view->options['views_slideshow_galleria']['thumb_quality'],
    '#options' => array(
      'auto' => t('Auto'),
      0 => t('False'),
      1 => t('True'),
    ),
  );
  $form['views_slideshow_galleria']['thumbnails'] = array(
    '#type' => 'select',
    '#title' => t('Thumbnails'),
    '#description' => t("Sets the creation of thumbnails. If set to %false, then Galleria will not create thumbnails. If you set this to %empty, Galleria will create empty spans with the className %img instead of thumbnails.", array('%empty' => t('Empty'), '%image' => t('img'), '%false' => t('False'))),
    '#default_value' => $view->options['views_slideshow_galleria']['thumbnails'],
    '#options' => array(
      'empty' => t('Empty'),
      'numbers' => t('Numbers'),
      0 => t('False'),
      1 => t('True'),
    ),
  );
  $form['views_slideshow_galleria']['touch_transition'] = array(
    '#type' => 'select',
    '#title' => t('Touch transition'),
    '#description' => t('Defines a different transition when a touch device is detected.'),
    '#default_value' => $view->options['views_slideshow_galleria']['touch_transition'],
    '#options' => $transition_options,
  );
  $form['views_slideshow_galleria']['transition'] = array(
    '#type' => 'select',
    '#title' => t('Transition'),
    '#description' => t("The transition that is used when displaying the images.<ul><li>%fade will fade between images.</li><li>%flash will fade into the background color between images.</li><li>%slide will slide the images using the Galleria easing depending on image position.</li><li>%fadeslide will fade between images and slide slightly at the same time.</li></ul>", array('%fade' => t('Fade'), '%flash' => t('Flash'), '%slide' => t('Slide'), '%fadeslide' => t('Fade/Slide'))),
    '#default_value' => $view->options['views_slideshow_galleria']['transition'],
    '#options' => $transition_options,
  );
  $form['views_slideshow_galleria']['transition_speed'] = array(
    '#type' => 'textfield',
    '#title' => t('Transition speed'),
    '#description' => t("The milliseconds used when applying the transition."),
    '#default_value' => $view->options['views_slideshow_galleria']['transition_speed'],
  );
  $form['views_slideshow_galleria']['width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#description' => t('This will set a width to the gallery.'),
    '#default_value' => $view->options['views_slideshow_galleria']['width'],
    '#required' => TRUE,
  );
  $form['views_slideshow_galleria']['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced settings'),
    '#description' => t('WARNING: Some of these settings will pass raw JavaScript to the browser, so should be used with care. See the !docs for more information on their usage.', array('!docs' => l(t('documentation'), 'http://github.com/aino/galleria/blob/master/docs/options.rst', array('attributes' => array('target' => '_blank'))))),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['views_slideshow_galleria']['advanced']['history'] = array(
    '#type' => 'checkbox',
    '#title' => t('History permalinks'),
    '#description' => t('Add permalinks to all images in the gallery.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['history'],
  );
  $form['views_slideshow_galleria']['advanced']['data_config'] = array(
    '#type' => 'textarea',
    '#title' => t('Data config'),
    '#description' => t('This javascript function configures how the data should be extracted from the source. It should return an object that will blend in with the default extractions. WARNING: Raw JavaScript will be passed here.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['data_config'],
  );
  $form['views_slideshow_galleria']['advanced']['data_selector'] = array(
    '#type' => 'textfield',
    '#title' => t('Data image selector'),
    '#description' => t('The selector Galleria should look for in the HTML source. Defaults to %img and there is rarely any reason to change this.', array('%img' => 'img')),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['data_selector'],
  );
  $form['views_slideshow_galleria']['advanced']['data_source'] = array(
    '#type' => 'textfield',
    '#title' => t('Data source'),
    '#description' => t('This is where Galleria finds the data depending on data_type. It defaults to the target selector, which is the same element that was used in the jQuery plugin.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['data_source'],
  );
  $form['views_slideshow_galleria']['advanced']['debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('Debug'),
    '#description' => t('If checked, the slide show will throw errors when something is not right.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['debug'],
  );
  $form['views_slideshow_galleria']['advanced']['extend'] = array(
    '#type' => 'textarea',
    '#title' => t('Extend'),
    '#description' => t("This function is used to extend the init function of the theme. Use this to quickly add minor customizations to the theme. The first argument is the options object, and the scope is always the Galleria gallery, just like the theme's init() function. WARNING: Raw JavaScript will be passed here."),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['extend'],
  );
  $form['views_slideshow_galleria']['advanced']['keep_source'] = array(
    '#type' => 'checkbox',
    '#title' => t('Keep source'),
    '#description' => t('If checked, the source HTML will be left intact, which will also create clickable images of each image inside the source. Useful for building custom thumbnails and still have galleria control the gallery.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['keep_source'],
  );
  $form['views_slideshow_galleria']['advanced']['avoid_flash_of_content'] = array(
    '#type' => 'checkbox',
    '#title' => t('Avoid flash of content'),
    '#description' => t('If checked, then the images of the Galleria slide show will be hidden by JavaScript in the page header, so that there is no flash of content on the page load.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['avoid_flash_of_content'],
  );
  $form['views_slideshow_galleria']['advanced']['strip_images'] = array(
    '#type' => 'checkbox',
    '#title' => t('Strip images'),
    '#description' => t('If checked, then the images will be stripped from the original view query. Disabling it can be useful to add rich HTML captions.'),
    '#default_value' => $view->options['views_slideshow_galleria']['advanced']['strip_images'],
  );
}

/**
 *  Implements hook_views_slideshow_option_definition().
 */
function views_slideshow_galleria_views_slideshow_option_definition() {
  // Set our default options.
  $options['views_slideshow_galleria'] = array(
    'contains' => array(
      'autoplay' => array('default' => FALSE),
      'autoplay_ms' => array('default' => 3000),
      'carousel' => array('default' => TRUE),
      'carousel_follow' => array('default' => TRUE),
      'carousel_speed' => array('default' => 200),
      'carousel_steps' => array('default' => 'auto'),
      'clicknext' => array('default' => FALSE),
      'dummy' => array('default' => ''),
      'custom_theme_options' => array(
        'contains' => array(
          'custom_theme' => array('default' => ''),
          'custom_theme_path' => array('default' => ''),
        )
      ),
      'easing' => array('default' => 'galleria'),
      'fullscreen_crop' => array('default' => ''),
      'fullscreen_double_tap' => array('default' => TRUE),
      'fullscreen_transition' => array('default' => ''),
      'height' => array('default' => 0),
      'idle_mode' => array('default' => TRUE),
      'idle_time' => array('default' => 3000),
      'idle_speed' => array('default' => 200),
      'image_crop' => array('default' => FALSE),
      'image_margin' => 0,
      'image_pan' => array('default' => FALSE),
      'image_pan_smoothness' => array('default' => 12),
      'image_position' => array('default' => 'center'),
      'initial_transition' => array('default' => ''),
      'layer_follow' => array('default' => TRUE),
      'lightbox' => array('default' => FALSE),
      'lightbox_fade_speed' => array('default' => 200),
      'lightbox_transition_speed' => array('default' => 300),
      'max_scale_ratio' => array('default' => ''),
      'min_scale_ratio' => array('default' => ''),
      'overlay_opacity' => array('default' => 0.85),
      'overlay_background' => array('default' => '#0b0b0b'),
      'pause_on_interaction' => array('default' => TRUE),
      'popup_links' =>array('default' => FALSE),
      'preload' => array('default' => 2),
      'queue' => array('default' => TRUE),
      'responsive' => array('default' => FALSE),
      'show' => array('default' => 0),
      'show_info' => array('default' => TRUE),
      'show_counter' => array('default' => TRUE),
      'show_imagenav' => array('default' => TRUE),
      'swipe' => array('default' => TRUE),
      'theme' => array('default' => 'classic'),
      'thumb_crop' => array('default' => FALSE),
      'thumb_fit' => array('default' => TRUE),
      'thumb_margin' => array('default' => 0),
      'thumb_quality' => array('default' => TRUE),
      'thumbnails' => array('default' => TRUE),
      'touch_transition' => array('default' => ''),
      'transition' => array('default' => 'fade'),
      'transition_speed' => array('default' => 400),
      'width' => array('default' => 'auto'),
      'advanced' => array(
        'contains' => array(
          'avoid_flash_of_content' => array('default' => TRUE),
          'data_config' => array('default' => ''),
          'data_selector' => array('default' => 'img'),
          'data_source' => array('default' => ''),
          'debug' => array('default' => TRUE),
          'extend' => array('default' => ''),
          'history' => array('default' => 0),
          'keep_source' => array('default' => FALSE),
          'strip_images' => array('default' => TRUE),
        )
      ),
    ),
  );
  return $options;
}
