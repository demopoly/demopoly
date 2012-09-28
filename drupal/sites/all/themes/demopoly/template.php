<?php

function demopoly_preprocess_user_profile (&$vars){
	$full_user = user_load($vars['user']->uid);

	$vars['user_firstname']	= field_get_items('user', $full_user, 'field_firstname');
	$vars['user_country']	= 'united states of zombieland';
	$vars['user_city']		= field_get_items('user', $full_user, 'field_city');
	$vars['user_exp']		= field_get_items('user', $full_user, 'field_expressum');
	$vars['user_news']		= field_get_items('user', $full_user, 'field_newsletter');


	$vars['user_firstname']	= $vars['user_firstname'][0]['value'];
	$vars['user_exp']		= $vars['user_exp'][0]['value'];
	$vars['user_news']		= $vars['user_news'][0]['value'];
	$vars['short_user_mail']= substr($full_user->mail,0,17).'...';
	$vars['full_user_mail']	= $full_user->mail;
	$vars['user_country']	= $vars['user_country'];
	$vars['user_city']		= $vars['user_city'][0]['value'];

	$vars['user_pass']		= str_repeat('&bull;', 15);

	$button['is-set'] = '<span class="button radio is-set"></span>';
	$button['not-set'] = '<span class="button radio not-set"></span>';
	
	if(isset($vars['user_exp'])){
		$vars['user_exp'] = $button['is-set'];
	} else {
		$vars['user_exp'] = $button['not-set'];
	}
	$vars['user_exp'] .= '<span class="setting">I want my name and city to appear in the Expressum.</span>';
	
	if(isset($vars['user_news'])){
		$vars['user_news'] = $button['is-set'];
	} else {
		$vars['user_news'] = $button['not-set'];
	}
	$vars['user_news'] .= '<span class="setting">If there is a newsletter, I want to get it.</span>';

	drupal_set_title('Welcome '.$vars['user_firstname'].' and thank you for participating.');
}
?>
