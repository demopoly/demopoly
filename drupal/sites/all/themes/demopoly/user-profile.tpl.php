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
?>

<!-- start profile -->    

<div class="profile"<?php //print $attributes; ?>>

	<h2>Welcome <?php print render($user_profile['firstname'])?>,<br>
	and thank you for participating.
	</h2>
	
	<h4>Please note:</h4>
	<ul>
	<li>In your profile settings you can change or delete your settings.</li>
	<li>Please logout before closing the page.</li>
	<li>Use your Emailadress and your password to login again. You have to be logged in to reach your profile settings.</li>
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
		<a class="button" href="<?php url('user/delete')?>">DELETE</a>
		<p>
			Please note that all pictures and all information will be deleted.
			For more information see <a href="/privacy" class="terms-link">PRIVACY</a>.
		</p>
	
	</fieldset>
	
	<div style="clear: both"></div>
	
	<!--<?php print render($user_profile); ?>-->
	
	<div class="floatLeft">
		<fieldset>
			<legend><span class="fieldset-legend">private profile</span></legend>
			<div class="floatLeft"><h5>First Name:</h5><span class="value"><?php print $user_firstname?></span></div>
			<div class="floatRight"><h5>E-Mail:</h5><span class="value"><?php print $user_mail?></span></div>
			<hr class="dashed" />
			<div class="floatLeft fullwidth"><h5>Country/Autonomous Region/Stateless:</h5>
				<span class="value"><?php print $user_country?></span></div>
			<hr class="dashed" />
			<div class="floatLeft"><h5>City:</h5><span class="value"><?php print $user_city?></span></div>
			<div class="floatRight"><h5>Password:</h5><span class="value"><?php print $user_pass?></span></div>
			<hr class="dashed" />
		</fieldset>
	</div>
	<div class="floatRight">
		<fieldset>
			<legend><span class="fieldset-legend">expressum</span></legend>
		</fieldset>
	</div>
	
	<div style="clear: both"></div>
	<!-- my images -->  
	
	<?php print views_embed_view('my_images','default',array($user->uid))?>
	
	<!-- re- und upload images -->  
	
	<a href="<?php print url('user/my_images/reload');?>" class="use-ajax demopoly-my-images-reload">Reload images</a>
	<a href="<?php print url('protest/add',array('query'=>array('width'=>900,'height'=>500,'iframe'=>'true')));?>" id="demopoly-add-image" class="colorbox-load">Neues Bild hinzufügen</a>
	
	<!-- end profile -->  
</div>
