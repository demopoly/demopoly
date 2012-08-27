<?php

function demopoly_preprocess_user_profile (&$vars){
	$full_user = user_load($vars['user']->uid);

	$vars['user_firstname']	= field_get_items('user', $full_user, 'field_firstname');
	$vars['user_country']	= 'germany';
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

	$vars['user_pass']		= str_repeat('*', 15);

	if(isset($vars['user_exp'])){
		$vars['user_exp'] = '<span class="expressum-is-set"><span></span>';
	} else {
		$vars['user_exp'] = '<span class="expressum-is-not-set"><span></span>';
	}
	$vars['user_exp'] .= 'I want my name and city to appear in the Expressum. ';
	if(isset($vars['user_news'])){
		$vars['user_news'] = '<span class="newsletter-is-set"><span></span>';
	} else {
		$vars['user_news'] = '<span class="newsletter-is-not-set"><span></span>';
	}
	$vars['user_news'] .= 'If there is a newsletter, I want to get it.';

	drupal_set_title('Welcome '.$vars['user_firstname'].'<br /> and thank you for participating.');
}
?>
