<?php

/*!
 * Dynamic display block module template: vsd-default - content template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 (03-JUL-2011)
 * Licenced under GPL license 
 * http://www.gnu.org/licenses/gpl.html 
 */

/**
 * @file
 * Views Slideshow Dynamic display block module template: vsd-default - content template
 *
 * Available variables:
 * - $settings['delta']: Block number of the block.
 *
 * - $settings['template']: template name
 * - $settings['output_type']: type of content
 *
 * - $views_slideshow_ddblock_slider_items: array with slidecontent
 * - $settings['slide_text_position']: of the text in the slider (top | right | bottom | left)
 * - $settings['slide_direction']: direction of the text in the slider (horizontal | vertical )
 * -
 * - $settings['pager_content']: Themed pager content
 * - $settings['pager_position']: position of the pager (top | bottom)
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
$settings = $views_slideshow_ddblock_slider_settings;
// add Cascading style sheet
drupal_add_css(drupal_get_path('module', 'views_slideshow_ddblock') . '/css/views-slideshow-ddblock-cycle-vsddefault.css', 'module', 'all', FALSE);
?>

<?php
/**
 * @file
 * Views Slideshow Dynamic display block module template: vsd-default - content template
 *
 * Available variables:
 * - $settings['delta']: Block number of the block.
 *
 * - $settings['template']: template name
 * - $settings['output_type']: type of content
 *
 * - $views_slideshow_ddblock_slider_items: array with slidecontent
 * - $settings['slide_text_position']: of the text in the slider (top | right | bottom | left)
 * - $settings['slide_direction']: direction of the text in the slider (horizontal | vertical )
 * -
 * - $settings['pager_content']: Themed pager content
 * - $settings['pager_position']: position of the pager (top | bottom)
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
$settings = $views_slideshow_ddblock_slider_settings;
// add Cascading style sheet
drupal_add_css(drupal_get_path('module', 'views_slideshow_ddblock') . '/css/views-slideshow-ddblock-cycle-vsddefault.css', 'module', 'all', FALSE);
drupal_add_css(drupal_get_path('theme', 'demopoly').'/css/page-protest-detail.css', 'theme', 'all', FALSE);

	$thumbnails = array();
	foreach($views_slideshow_ddblock_slider_items as $slider_item){	
		unset($thumb);
		$img_href = array();
		$pattern = '/src\=\"(.*)\" w/i';
		preg_match($pattern, $slider_item['slide_image_thumb'], $img_href);
		$thumb = '<div class="image-wrapper" image="'.$img_href[1].'" style="background-image:url('.$img_href[1].');">&nbsp;</div>';
		$thumbnails[] = $thumb;
	}
	$thumbs = null;
	foreach($thumbnails as $thumbnagl){
		$thumbs .= $thumbnagl.PHP_EOL;
	}
?>
<div id="views-slideshow-ddblock-<?php print $settings['delta'] ?>" class="views-slideshow-ddblock-cycle-vsd-default clear-block">
<?php
	foreach ($views_slideshow_ddblock_slider_items as $slider_item){
?>
	<div class="container-wrapper">
		<div class="container-image">
			<?php print $slider_item['slide_image']; ?>
		</div>
		<div class="container-thumbs">
			<?php print $thumbs; ?>
		</div>
		<div class="container-text container-text-<?php print $settings['slide_direction'] ?>">
			<p class="para-name-city"><strong><?php print $slider_item['slide_name'] ?></strong>, <?php print $slider_item['slide_city'] ?></p>
			<p class="para-date"><?php print date("F d Y", $slider_item['slide_date']) ?></p>
			<p class="para-context">
				<?php print $slider_item['slide_context'] ?>
			</p>
		</div>
	</div>
	<br class="clear" />
	<?php 
		}
	?>
	<div class="container-slider">
		<div class="container-slide-prev">
			<a class="prev" href="#">Prev</a>
		</div>
		<div class="container-slide-next">
			<a class="next" href="#">Next</a>
		</div>
	</div>
</div>
