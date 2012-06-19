
<?php 
$base_path = '/'.drupal_get_path('theme', 'demopoly').'/';

?>
<?php if ($user->uid==1):?>
<?php print render($tabs);?>
<?php endif;?>

<div
	id="wrapper">

	<!-- Start Logo-->

	<div id="logo">
		<a class="logoLink" href="<?php print url('<front>')?>"
			title="demopoly"><img
			src="<?php print $base_path;?>img/logo-demopoly.png" alt="demopoly">
		</a>
	</div>

	<!-- Ende Logo-->


	<!-- Start Navigation-->

	<div id="navigation">

		<ul>
			<?php if ($user->uid==0):?>
			<li><a class="active login-button" href="#" target="_self"
				title="Login">Login</a></li>
			<?php else:?>
			<li><a class="active profile-button" href="<?php print url('user')?>"
				target="_self" title="Logout">profile-settings</a></li>
			<li><a class="active logout-button"
				href="<?php print url('user/logout')?>" target="_self"
				title="Logout">Logout</a></li>

			<?php endif;?>

		</ul>
		<?php echo render(  menu_tree('main-menu'));?>
	</div>

	<!-- Ende Navigation-->

	<!-- Start Information -->

	<div id="information">
		<ul>
			<li><a class="info" href="/information" target="_self"
				title="Information"></a></li>
			<?php if ($user->uid==0):?>
			<li><a class="take-part" href="<?php print url('user/register')?>"
				target="_self" title="Take Part"></a></li>
			<?php endif;?>
			<?php if ($user->uid!=0):?>
			<li><a class="leave" href="<?php print url('user/logout')?>"
				target="_self" title="Leave"></a></li>
			<?php endif;?>
		</ul>
	</div>
	<?php print render($page['login']);?>
	<!-- Ende Information -->

	<!-- Start Claim -->

	<div id="claim">
		<p>this is a democratic art project</p>
	</div>

	<!-- Ende Claim -->

	<!--  start Content-->
	<div id="content">
		<?php if ($messages):?>
		<div class="clearfix">
			<?php print $messages;?>
		</div>
		<?php endif;?>
		<?php if ($title):?>
		<h1>
			<?php print $title;?>
		</h1>
		<?php endif;?>
		<?php print render($page['content']);?>
	</div>


	<!-- Ende Content -->

</div>
<nav id="page-nav">
	<a href="index.php"></a>
</nav>
<script>


  </script>
</body>
