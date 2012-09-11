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
$thumbnails = array();
foreach($views_slideshow_ddblock_slider_items as $slider_item){
	unset($thumb);
	$img_href = array();
	$pattern = '/src\=\"(.*)\" w/i';
	preg_match($pattern, $slider_item['slide_image_thumb'], $img_href);
	$thumb = $img_href[1];
	$thumbnails[] = array($thumb, $slider_item['uniqid']);
}
$thumbs = null;
$size = (count($thumbnails)*78)+5;

drupal_add_css(drupal_get_path('module', 'views_slideshow_ddblock') . '/css/views-slideshow-ddblock-cycle-vsddefault.css', 'module', 'all', FALSE);
// drupal_add_css(drupal_get_path('theme', 'demopoly').'/css/page-protest-detail.css', 'theme', 'all', FALSE);
// drupal_add_js(drupal_get_path('theme', 'demopoly').'/js/jquery.qtip-1.0.0-rc3.js', 'theme', 'all', FALSE);
// drupal_add_css(drupal_get_path('module', 'jscrollpane') . '/css/jquery.jscrollpane.css', 'module', 'all', FALSE);	
// ?>
<div id="views-slideshow-ddblock-<?php print $settings['delta'] ?>" class="views-slideshow-ddblock-cycle-vsd-default clear-block wrap-it-all">
	<div class="container-slide-prev">
		<a class="prev" href="#">Prev</a>
	</div>
<?php
	foreach ($views_slideshow_ddblock_slider_items as $slider_item){
?>
	<div class="container-wrapper">
		<div class="container-image">
			<?php print $slider_item['slide_image']; ?>
		</div>
		<div class="container-div">
			<div class="container-right">
				<div class="container-thumbs">
					<div class="container-thumbs-i$thumbnailsnline" style="width: <?php print $size;?>px">
						<?php
							foreach($thumbnails as $thumbnagl){
								unset($active);
								$active = null;
								if($thumbnagl[1] == $slider_item['uniqid']){
									$active = ' active';
								}
								print '<div title="'.$thumbnagl[1].'--'.$slider_item['uniqid'].'" class="image-wrapper'.$active.'" image="'.$thumbnagl[0].'" style="background-image:url('.$thumbnagl[0].');">&nbsp;</div>'.PHP_EOL;		
							}
						?>
					</div>
				</div>
				<div class="container-control">
					<p class="para-download-image"><a href="#DOWNLOAD" class="button medium download-image">Download</a></p>
					<p class="horizontal-rule">&nbsp;</p>
					<p class="para-report-image"><a href="#REPORT" class="button medium report-image">Report Image</a></p>
				</div>
			</div>
			<div class="container-text">
				<p class="para-name-city"><strong><?php print $slider_item['slide_name'] ?></strong>, <?php print $slider_item['slide_city'] ?></p>
				<p class="para-date"><?php print date("F d Y", $slider_item['slide_date']) ?></p>
				<div class="para-context">
					<div class="para-context-inline">
						<div class="context-wrapper"><?php print $slider_item['slide_context']; ?></div>
					</div>
				</div>
			</div>
		</div>
	</div>
	<br class="clear" />
<?php 
	}
?>
	<div class="container-slide-next">
		<a class="next" href="#">Next</a>
	</div>
<script type="text/javascript">
(function ($) {
	Drupal.behaviors.demopoly_main = {
			attach: function(context){
				$(document).bind('iframe-loaded cycle_complete', function () {
					$(document).ready(function(){
						$('.container-wrapper').each(function(){
							resize_cbox(this);
						})
					});
				});
				
				var resize_cbox = function(obj){
					var opac = $(obj).css('opacity');
					if( opac > 0){
						var y = $(obj).innerHeight();
						console.log(y);
						top.jQuery.colorbox.resize({
							'innerHeight':y+5
						});
					}
				}
				
				$(document).trigger('iframe-loaded');
			}
	}
}) (jQuery);
</script>
</div>