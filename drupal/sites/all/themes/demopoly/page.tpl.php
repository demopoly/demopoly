<?php 
$base_path = '/'.drupal_get_path('theme', 'demopoly').'/';

?>
<?php if ($user->uid==1):?>
<?php print render($tabs);?>
<?php endif;?>

<div id="wrapper">

<!-- Start Logo-->    

<div id="logo">
<a class="logoLink" href="<?php print url('<front>')?>"  title="demopoly"><img src="<?php print $base_path;?>img/logo-demopoly.png" alt="demopoly"></a>
</div>

<!-- Ende Logo-->    


<!-- Start Navigation-->    

<div id="navigation">
<?php echo render(  menu_tree('main-menu'));?>
    <ul>
    <?php if ($user->uid==0):?>
    	<li><a class="active login-button" href="#" target="_self" title="Login">Login</a></li>
    <?php endif;?>
    
    </ul>
</div>

<!-- Ende Navigation-->    

<!-- Start Information -->    

<div id="information">
    <ul>
    	<li><a class="active" href="./demopoly_files/demopoly.html" target="_self" title="Information"><img src="<?php print $base_path?>img/informationen.jpg" alt="demopoly"></a></li>
    	<?php if ($user->uid==0):?>
    	<li><a href="<?php print url('user/register')?>" target="_self" title="Take Part"><img src="<?php print $base_path?>img/take-part.jpg" alt="demopoly"></a></li>
    	<?php endif;?>
    	<?php if ($user->uid!=0):?>
    	<li><a href="<?php print url('user/logout')?>" target="_self" title="Leave"><img src="<?php print $base_path?>img/leave.jpg" alt="demopoly"></a></li>
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
<?php print render($page['content']);?>
</div>    


<!--

 
<img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly"><img src="./demopoly_files/01.jpg" alt="demopoly"><img src="./demopoly_files/02.jpg" alt="demopoly"><img src="./demopoly_files/03.jpg" alt="demopoly"><img src="./demopoly_files/04.jpg" alt="demopoly"><img src="./demopoly_files/05.jpg" alt="demopoly"><img src="./demopoly_files/06.jpg" alt="demopoly"><img src="./demopoly_files/07.jpg" alt="demopoly">
 
</div>
-->

<!-- Ende Content -->           

</div>
<script>
$(function(){
  $('#image-container').masonry({
    // options
    itemSelector : '.views-row',
    columnWidth : 240
  });
});


</script>

</body>