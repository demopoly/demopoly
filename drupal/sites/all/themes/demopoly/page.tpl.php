
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
    	<li><a class="info" href="./demopoly_files/demopoly.html" target="_self" title="Information"></a></li>
    	<?php if ($user->uid==0):?>
    	<li><a class="take-part" href="<?php print url('user/register')?>" target="_self" title="Take Part"></a></li>
    	<?php endif;?>
    	<?php if ($user->uid!=0):?>
    	<li><a class="leave" href="<?php print url('user/logout')?>" target="_self" title="Leave"></a></li>
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


<!-- Ende Content -->           

</div>
<nav id="page-nav">
  <a href="index.php"></a>
</nav>
<script>


$(function(){
    
	  var $container = $('#image-container');
$container.imagesLoaded(function(){
  $container.masonry({
    itemSelector : '.field-item',
    columnWidth : 1,
	animationOptions : { queue: true, duration: 500 },
	isAnimated : true,
	
  });
});
    
    $container.infinitescroll({
      navSelector  : '#page-nav',    // selector for the paged navigation 
      nextSelector : '#page-nav a',  // selector for the NEXT link (to page 2)
      itemSelector : '.field-item',     // selector for all items you'll retrieve
      loading: {
          finishedMsg: 'No more pages to load.',
          img: 'http://i.imgur.com/6RMhx.gif'
        }
      },
      // trigger Masonry as a callback
      function( newElements ) {
        // hide new items while they are loading
        var $newElems = $( newElements ).css({ opacity: 0 });
        // ensure that images load before adding to masonry layout
        $newElems.imagesLoaded(function(){
          // show elems now they're ready
          $newElems.animate({ opacity: 1 });
          $container.masonry( 'appended', $newElems, true ); 
        });
      }
    );
    
  });
  </script>
</body>