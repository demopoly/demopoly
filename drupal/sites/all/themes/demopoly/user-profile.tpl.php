<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 */
?>
<?php 
drupal_add_library('system', 'drupal.ajax');
drupal_add_js(drupal_get_path('theme', 'demopoly').'/js/profile.js');

$delete_profile_url = url('user/delete',array('query'=>array('width'=>'480', 'height' => '150', 'iframe'=>'true')));
$add_image_url = url('protest/add',array('query'=>array('width'=>'900', 'iframe'=>'true')));
$reload_image_url = url('user/my_images/reload');
?>
<!-- start profile -->    

<div class="profile"<?php //print $attributes; ?>>
	
	<h2>Welcome <?php print $user_firstname; ?>,<br /> and thank you for participating</h2>
	
	<h4>Please note:</h4>
	<ul>
		<li><span>In your profile settings you can change or delete your settings.</span></li>
		<li><span>Please logout before closing the page.</span></li>
		<li><span>Use your Emailaddress and your password to login again. You have to be logged in to reach your profile settings.</span></li>
	</ul>
	
	<h2 style="margin-top:40px">Profile Settings</h2>
	
	<fieldset class="floatLeft">
		<p>
			In your private profile settings you can change your profile and your picture information or add a new picture.
			You can also delete a single picture or your whole account.
		</p>
	</fieldset>
	
	<fieldset class="floatRight delete">
		<h5>If you want to delete your account and leave Demopoly:</h5>
		<a class="colorbox-inline button medium delete-profile" href="<?php print $delete_profile_url; ?>">DELETE</a>
		<p>
			Please note that all pictures and all information will be deleted.
			For more information see <a href="/privacy" class="terms-link">PRIVACY</a>.
		</p>
	
	</fieldset>
	
	<div style="clear: both"><br /><br /></div>
	
	<div class="floatLeft main">
		<fieldset>
			<legend><span class="fieldset-legend">Private Profile</span></legend>
			<div class="floatLeft"><span class="user-profile-label">First Name:</span><span class="value"><?php print $user_firstname?></span></div>
			<div class="floatRight user_mail"><span class="user-profile-label">E-Mail:</span>
				<span class="value noshow"><?php print $short_user_mail?></span>
				<span class="value show"><?php print $full_user_mail?></span>
			</div>
			<hr class="dashed" />
			<div class="floatLeft fullwidth"><span class="user-profile-label">Country/Autonomous Region/Stateless:</span>
				<span class="value"><?php print $user_country?></span></div>
			<hr class="dashed" />
			<div class="floatLeft"><span class="user-profile-label">City:</span><span class="value"><?php print $user_city?></span></div>
			<div class="floatRight"><span class="user-profile-label">Password:</span><span class="value"><?php print $user_pass?></span></div>
			<hr class="dashed" />
		</fieldset>
	</div>
	
	<div class="floatRight main">
		<fieldset>
			<legend><span class="fieldset-legend">Expressum</span></legend>
			<div id="expressum">
				<?php print $user_exp?>
			</div>
		</fieldset>
	</div>
	<div class="floatRight main">
		<fieldset>
			<legend><span class="fieldset-legend">Newsletter</span></legend>
			<div id="newsletter">
				<?php print $user_news?>
			</div>
		</fieldset>
	</div>
	
	<div class="floatRight main">
		<a class="button medium change-settings" href="<?php echo url('user/'.$user->uid.'/edit')?>">Change Settings</a>
	</div>
	<div class="clearfix"></div>
	
	<!-- re- und upload images -->  
	
	<!-- my images -->
	<fieldset>
		<legend>
			<span class="fieldset-legend">Public Picture</span>
			<span style="float: right">
				<span class="ajax-progress ajax-progress-throbber hidden"><span class="throbber"></span></span>
				<a href="<?php print $reload_image_url;?>" class="use-ajax demopoly-my-images-reload" style="display: none">[Reload]</a>
				<a href="<?php print $add_image_url; ?>" id="demopoly-add-image" class="colorbox-load">[add image]</a>
			</span>
		</legend>
		<?php print views_embed_view('my_images','default',$user->uid)?>
	</fieldset>
	<!-- end profile -->
	<br class="clearfix" />  
</div>
