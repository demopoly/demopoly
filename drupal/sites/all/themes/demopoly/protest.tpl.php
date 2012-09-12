<?php

/**
 * @file
 * Default theme implementation for entities.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php if ($view_mode=='full') :?>

 
<script>
(function($){
	Drupal.behaviors.demopoly_protest = {
			attach:function(context){
				
			}
	}
})(jQuery)
</script>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <?php if ($url): ?>
        <a href="<?php print $url; ?>"><?php print $title; ?></a>
      <?php else: ?>
        <?php print $title; ?>
      <?php endif; ?>
    </h2>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      print render($content);
    ?>
  </div>
</div>

<?php else:?>
<?php
	$file = file_load($content['field_protest_image']['#object']->field_protest_image['und'][0]['fid']);
	$filepath = file_create_url($file->uri);
	
	$style = 'qtip_preview';
	$filepath = image_style_url($style, $file->uri);
	
?>
<div class="teaser-wrapper" img="<?php echo $filepath; ?>">
	<?php echo render($content['field_protest_image']);?>
	<div class="info">
		<span style="font-style: italic; font-size: 8pt; text-transform: uppercase; text-align: center; display: block;"><?php echo render($content['field_firstname']['#items'][0]['value']);?> - <?php echo render($content['field_city']['#items'][0]['value']);?></span>
	</div>
</div>
<?php endif;?>