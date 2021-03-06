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

	$content = array();
	$field_firstname	= $fields['field_firstname']->content;
	$field_country		= $fields['field_address_postal']->content;
	$field_date			  = date('Y',$fields['field_date']->content);
	
	
	foreach($fields['field_address_postal']->handler->view->result as $view_result){
		if($view_result->pid == $fields['field_address_postal']->raw){
			$countryCode = $view_result->field_field_address_postal[0]['raw']['country'];
			$field_city  = $view_result->field_field_address_postal[0]['raw']['locality'];
		}
	}
	
	//<div><div class="addressfield-container-inline locality-block country-DE">  <span class="locality">München</span></div><span class="country">Germany</span></div>
	
	if(strlen($field_country) > 0){
		$pattern = '/country">(.*)<\/span/i';
		preg_match_all($pattern, $field_country, $matches);
		$field_country_name = (string)$matches[1][0];
	}

	$field_country_icon = theme('countryicons_icon', array('code' =>  $countryCode, 'iconset' =>  'shiny'));
	
	if(strlen($field_city) < 1){$field_city = 'No City Given';}
	if(strlen($field_country_name) < 1){$field_country_name = 'No Country Given';}
	
	$field_image['background']['fid']  = file_load($fields['field_protest_image_1']->content);
	$field_image['background']['path'] = file_create_url($field_image['background']['fid']->uri);
	$field_image['background']['styled']  = image_style_url('img_style_land_2', $field_image['background']['fid']->uri);
	
	$field_image['preview']['fid'] 		 = file_load($fields['field_protest_image']->content);
	$field_image['preview']['path'] 	 = file_create_url($field_image['preview']['fid']->uri);
	$field_image['preview']['styled']  = image_style_url('img_style_land_2', $field_image['preview']['fid']->uri);
	
	$field_pid			= strip_tags($fields['pid']->content);
	$field_protest_is_frontpage = strip_tags($fields['field_protest_is_frontpage']->content);
	$field_protest_context = strip_tags($fields['field_protest_context']->content);
	
	$content['header'] = '<span class="firstname">'.$field_firstname.'</span>,'
											.' <span class="country">'.$field_country_icon.'</span>'
											.' <span class="city" title="City: '.$field_city.' in '.$field_country_name.'">'.$field_city.'</span>'
											.' (<span class="date">'.$field_date.'</span>)';
	$content['left'] = '<div class="image-wrapper" image="'.$field_image['preview']['styled'].'" style="background-image:url('.$field_image['background']['styled'].');">&nbsp;</div>';
	$content['right'] = '';
	$length = 40;
	$ending = strlen($field_protest_context) > $length?' [...]':'';
	$content['footer'] = substr($field_protest_context, 0, $length).$ending;
	$content['footer'] = $field_protest_context;
	
	if($field_protest_is_frontpage == false){
		$field_protest_is_frontpage_content = '<a class="use-ajax button medium is-not-frontpage" href="/protest/'.$field_pid.'/activate">Frontpage Picture</a>';
	} else {
		$field_protest_is_frontpage_content = '<span class="button medium is-frontpage">Frontpage Picture</span>';
	}
	
	
	
	$delete_image_url = url('protest/'.$field_pid.'/delete',array('query'=>array('width'=>'450', 'height' => '150', 'iframe'=>'true')));
	$edit_image_url = url('protest/'.$field_pid.'/edit',array('query'=>array('width'=>'900', 'iframe'=>'true')));
	
?>
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
			$('a.button-frontpage').click(function(){
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
			<a class="colorbox-inline button medium protest-delete" href="<?php print $delete_image_url; ?>">Delete</a>
		</span>
		<!-- EDIT --><span class="field-content">
			<a class="colorbox-inline button medium protest-edit" href="<?php print $edit_image_url; ?>">Edit</a>
		</span>
		<!-- FRONTPAGE --><span class="field-content">
			<?php print $field_protest_is_frontpage_content; ?>
		</span>
		<?php print $content['right']; ?>
	</div>
	<div class="views-view-fields--my-images-footer">
		<?php print $content['footer']; ?>
	</div>
</div>