<?php 
	$base_path = '/'.drupal_get_path('theme', 'demopoly').'/';
	if($user->uid==1){print render($tabs);}
?>
<div class="wrapper">
	<!-- Start Header -->
	<div class="header">
		<!-- Start Logo-->
		<div class="logo">
			<a class="logoLink" href="<?php print url('<front>')?>" title="demopoly">
				<img src="<?php print $base_path;?>img/logo-demopoly.png" alt="demopoly">
			</a>
		</div>
		<!-- Ende Logo-->
				
		<!-- Start Navigation-->
		<div class="navigation">
			<ul>
				<?php if ($user->uid==0){?>
				<li><a class="active login-button" href="#" target="_self" title="Login">Login</a></li>
				<?php } else {?>
				<li><a class="active profile-button" href="<?php print url('user')?>" target="_self" title="Logout">profile-settings</a></li>
				<li><a class="active logout-button" href="<?php print url('user/logout')?>" target="_self" title="Logout">Logout</a></li>
				<?php }?>
			</ul>
			<?php echo render(menu_tree('main-menu'));?>
		</div>
		<!-- Ende Navigation-->
		
		<!-- Start Information -->
		<div class="subnavigation">
			<ul>
				<li><a class="button large info" href="/information" target="_self" title="Information"></a></li>
				<?php if($user->uid==0){?>
				<li><a class="button large take-part" href="<?php print url('user/register')?>" target="_self" title="Take Part"></a></li>
				<?php } ?>
				<?php if($user->uid!=0){?>
				<li><a class="button large leave" href="<?php print url('user/logout')?>" target="_self" title="Leave"></a></li>
				<?php }?>
			</ul>
		</div>
		<?php print render($page['login']);?>
		<!-- Ende Information -->
		
		<!-- Start Claim -->
		<div class="claim">
			<p>this is a democratic art project</p>
		</div>
		<!-- Ende Claim -->
	</div>
	<!-- Ende Header -->
	<br class="clearfix" />
	<!--  Start Content-->
	<div class="demopoly-content">
		<?php if ($messages){?>
		<div class="clearfix">
			<?php print $messages;?>
		</div>
		<?php } ?>
		<?php if($title){?>
		<h1 class="demopoly-heading">
			<?php print $title;?>
		</h1>
		<?php } ?>
		<?php print render($page['content']);?>
	</div>
	<!-- Ende Content -->
</div>
<!-- Ende Wrapper -->
</body>
