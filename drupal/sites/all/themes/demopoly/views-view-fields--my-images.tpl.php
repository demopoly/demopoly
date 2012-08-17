<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php

	$content = array();

	$field_firstname	= $fields['field_firstname']->content;
	$field_city			= $fields['field_city']->content;
	$field_date			= date('Y',$fields['field_date']->content);
	$field_image		= $fields['field_protest_image']->content;
	$field_pid			= strip_tags($fields['pid']->content);
	$field_protest_is_frontpage = strip_tags($fields['field_protest_is_frontpage']->content);
	$field_protest_context = strip_tags($fields['field_protest_context']->content);
	
	$img_href = array();
	$pattern = '/src\=\"(.*)\" w/i';
	preg_match($pattern, $field_image, $img_href);
	
	$content['header'] = '<span class="firstname">'.$field_firstname.'</span>, <span class="city">'.$field_city.'</span> (<span class="date">'.$field_date.'</span>)';
	$content['left'] = '<div class="image-wrapper" image="'.$img_href[1].'" style="background-image:url('.$img_href[1].');">&nbsp;</div>';
	$content['right'] = '';
	$length = 40;
	$ending = strlen($field_protest_context) > $length?' [...]':'';
	$content['footer'] = substr($field_protest_context, 0, $length).$ending;
	
	if($field_protest_is_frontpage == false){
		$field_protest_is_frontpage_content = '<a class="button-frontpage use-ajax button-is-not-frontpage protest-is-activated-0" href="/protest/'.$field_pid.'/activate">Frontpage Picture</a>';
	} else {
		$field_protest_is_frontpage_content = '<span class="button-frontpage protest-is-activated-1 button-is-frontpage">Frontpage Picture</span>';
	}
	
?>
<script type="text/javascript" src="<?php print drupal_get_path('theme', 'demopoly')?>/js/jquery.qtip-1.0.0-rc3.js"></script>
<script type="text/javascript">
(function($) {
	Drupal.behaviors.user_profile = {
		attach : function(context) {
			$('div.image-wrapper[image]').each(function(){
				$(this).qtip({	
					content:  '<img src="'+$(this).attr('image')+'" />',
					position: {
						target: 'mouse',
						corner: {
							target: 'topRight',
							tooltip: 'bottomLeft'
						}
					},
					style: {
						width: 280
					}
				});
			});
			$('.button-frontpage').click(function(){
				$('.ajax-progress-throbber.hidden').css('display', 'inline-block');
			});
			$('.demopoly-my-images-reload').click(function(){
				$('.ajax-progress-throbber.hidden').css('display', 'none');
			});
		}
	}
})(jQuery)
</script>
<div class="views-view-fields--my-images-wrapper">
	<div class="views-view-fields--my-images-header">
		<?php print $content['header']; ?>
	</div>
	<hr class="views-view-fields--my-images-hr" />
	<div class="views-view-fields--my-images-floatLeft">
		<?php print $content['left']; ?>
	</div>
	<div class="views-view-fields--my-images-floatRight">
		<!-- DELETE --><span class="field-content">
			<a class="colorbox-inline button-delete cboxElement" href="/protest/<?php print $field_pid?>/delete?iframe=true&width=900&height=500">Delete</a>
		</span>
		<!-- EDIT --><span class="field-content">
			<a class="colorbox-inline button-edit cboxElement" href="/protest/<?php print $field_pid?>/edit?iframe=true&width=900&height=500">Edit</a>
		</span>
		<!-- FRONTPAGE --><span class="field-content">
			<?php print $field_protest_is_frontpage_content; ?>
		</span>
		<?php print $content['right']; ?>
	</div>
	<div class="views-view-fields--my-images-footer">
		<?php print $content['footer']; ?>
	</div>
	<hr class="views-view-fields--my-images-hr" />
</div>