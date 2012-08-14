<?php
	function demopoly_preprocess_user_profile (&$vars){
		$full_user = user_load($vars['user']->uid);
		kpr($full_user);
		$vars['user_firstname']	= field_get_items('user', $full_user, 'field_firstname');
		$vars['user_country']	= 'GERMANY';
		$vars['user_city']		= field_get_items('user', $full_user, 'field_city');
		
		$vars['user_firstname']	= $vars['user_firstname'][0]['value'];
		$vars['user_mail']		= $full_user->mail;
		$vars['user_country']	= $vars['user_country'];
		$vars['user_city']		= $vars['user_city'][0]['value'];
		
		$vars['user_pass']		= str_repeat('*', 10);
	}
?>
