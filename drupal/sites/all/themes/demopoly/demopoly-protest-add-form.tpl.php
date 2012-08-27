<script type="text/javascript" src="http://select-box.googlecode.com/svn/tags/0.2/jquery.selectbox-0.2.min.js"></script>
<h1>Upload a picture</h1>
<h2>Please add some information which is related to your picture.</h2>
<div id="name-city">
	<fieldset>
		<legend><span class="fieldset-legend">Name(s)/City - shown on the picture</span></legend>
			<?php print render($form['field_firstname']);?>		
			<?php print render($form['field_city']);?>
			<br class="clear" />
			<div class="description">
			(you can change the name or the city and add more names. If there's more than 1 name: people from left to right)
			</div>
	</fieldset>
</div>

<div id="date">
	<?php print render($form['field_date']);?>
</div>

<div id="context">
	<fieldset>
		<legend><span class="fieldset-legend">Picture Content Box</span></legend>
		<?php print render($form['field_protest_context']);?>
	</fieldset>
</div>

<div id="download">
	<fieldset>
		<legend><span class="fieldset-legend">Download</span></legend>
		<?php print render($form['field_download']);?>
	</fieldset>
</div>

<div id="licence">
	<fieldset>
		<legend><span class="fieldset-legend">Licence - Creative Commons</span></legend>
		<?php print render($form['field_licence']);?>
	</fieldset>
</div>

<div id="terms">
	<fieldset>
		<legend><span class="fieldset-legend">General Terms and Conditions</span></legend>
		<?php print render($form['field_terms']);?>
	</fieldset>
</div>

<div id="image">
	<fieldset>
		<legend><span class="fieldset-legend">&nbsp;</span></legend>
		<?php print render($form['field_protest_image']);?>
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
