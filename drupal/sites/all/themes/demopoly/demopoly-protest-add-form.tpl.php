<h1>Upload a picture</h1>
<h2>Please add some information which is related to your picture.</h2>
<div class="location_hide">
	<?php
		print render($form['field_address_geo']);
		print render($form['field_address_postal']);
	?>
</div>
<div id="name-city">
	<fieldset>
		<legend><span class="fieldset-legend">Name(s)/City - shown on the picture</span></legend>
		<div class="fieldset-content">
			<?php print render($form['field_firstname']);?>	
			<div id="edit-field-city">
			<div class="form-item form-type-textfield form-item-field-firstname-und-0-value">
				<label for="edit-field-city-und-0-value">City <span class="form-required">*</span></label>
				<input class="text-full form-text" type="text" id="edit-field-city-und-0-value" name="field_city[und][0][value]" value="" size="60" maxlength="20">
			</div>
			</div>
			<div class="clearfix"></div>
			<div class="description">
			(you can change the name or the city and add more names. If there's more than 1 name: people from left to right)
			</div>
		</div>
	</fieldset>
</div>

<div id="date">
	<?php print render($form['field_date']);?>
</div>

<div id="context">
	<fieldset>
		<legend><span class="fieldset-legend">Picture Content Box</span></legend>
		<div class="fieldset-content">
			<?php print render($form['field_protest_context']);?>
		</div>
	</fieldset>
</div>

<div id="download">
	<fieldset>
		<legend><span class="fieldset-legend">Download</span></legend>
		<div class="fieldset-content">
			<?php print render($form['field_download']);?>
		</div>
	</fieldset>
</div>

<div id="licence">
	<fieldset>
		<legend><span class="fieldset-legend">Licence - Creative Commons</span></legend>
		<div class="fieldset-content">
			<?php print render($form['field_licence']);?>
		</div>
	</fieldset>
</div>

<div id="terms">
	<fieldset>
		<legend><span class="fieldset-legend">General Terms and Conditions</span></legend>
		<div class="fieldset-content">
			<?php print render($form['field_terms']);?>
		</div>
	</fieldset>
</div>

<div id="image">
	<fieldset>
		<legend><span class="fieldset-legend">&nbsp;</span></legend>
		<div class="fieldset-content">
			<?php print render($form['field_protest_image']);?>
		</div>
	</fieldset>
</div>

<?php print render($form['form_build_id']);?>
<?php print render($form['form_token']);?>
<?php print render($form['form_id']);?>
<?php print render($form['pid']);?>
<div id="submit">
	<fieldset>
		<legend><span class="fieldset-legend">&nbsp;</span></legend>
		<?php print render($form['submit']);?>
	</fieldset>
</div>
<script type="text/javascript">
(function ($) {
	Drupal.behaviors.demopoly_protest_detail = {
			attach: function(context){
				$(document).bind('iframe-loaded', function () {
					$(document).ready(function(){
						var method = 'resize_cbox("body")';
						window.setTimeout(method, 100);
					});
				});
				
				resize_cbox = function(obj){
					var opac = $(obj).css('opacity');
					if( opac > 0){
						var y = $(obj).height();
						top.jQuery.colorbox.resize({
							'innerHeight':y+20
						});
					}
				}
				$("#edit-submit").addClass('button medium upload');
				$(document).trigger('iframe-loaded');
			}
	}
}) (jQuery);
</script>