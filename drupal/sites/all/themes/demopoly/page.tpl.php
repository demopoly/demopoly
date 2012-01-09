  <?php
  //$nodeA = node_load('12');
  //kpr($nodeA); ?>
<?php
$template_path= '/'.drupal_get_path('theme', 'demopoly');
?>
<!-- <div id="branding" class="clearfix">
    <?php print $breadcrumb; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h1 class="page-title"><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php print render($primary_local_tasks); ?>
  </div>
 -->
<div id="page">









<?php if ($messages): ?>
	<div id="console" class="clearfix">
	<?php print $messages; ?></div>
	  	<?php endif; ?>
<div id="container">
    	<ul id="meta-navigation">
        <li><a href="<?php echo url('user')?>" title="test">login</a></li>
        <li><a href="#" title="test">|</a></li>
        <li><a href="#" title="test">contact</a></li>
        <li><a href="#" title="test">|</a></li>
        <li><a href="#" title="test">legal notices</a></li>
        </ul>
        
    	<div id="header"> <a href="index.html"><img class="logo" src="<?php print $template_path?>/images/common/logo.png" width="271" height="60" alt="Bratwurst Logo" /></a>
		<div id="message">
        <h1>this is a democratic art project <br />
		<span class="blue">upload &bull; download &bull; multiply!</span></h1><br />
 		</div>
      	</div>
        
        <div id="content">
        <a href="#" id="open-info">information <img src="<?php print $template_path?>/images/common/icon-info_22x22.png" alt="Information Icon" width="22" height="22" align="absmiddle" /></a>
        <?php if (user_is_logged_in()):?>
        <a href="<?php echo url('protest/add');?>" id="open-participate">participate <img src="<?php print $template_path?>/images/common/icon-participate_22x22.png" alt="participate Icon" width="22" height="22" align="absmiddle" /></a>
        
        <a href="<?php echo url('user/logout')?>" id="open-leave">leave <img src="<?php print $template_path?>/images/common/icon-leave_22x22.png" alt="Leave Icon" width="22" height="22" align="absmiddle" /></a>
        <?php endif;?>
   	    
        
        <br clear="all" /><br /><br />
        <?php print render($tabs)?>
        <?php print render($page['content']);?>
        
	</div>  
    
<div id="participate-container">
<a href="#" id="close-participate">Close X</a>
<div id="participate-inner-container">
<!-- Inhalt wird per Jquery geladen -->
</div> 
</div> 

<div id="info-container">
<a href="#" id="close-info">Close X</a>
<div id="info-inner-container">
<!-- Inhalt wird per Jquery geladen -->
</div> 
</div> 

<div id="leave-container">
<a href="#" id="close-leave">Close X</a>
<div id="leave-inner-container">
<!-- Inhalt wird per Jquery geladen -->
</div> 
</div> 

<!-- FOOTER -->
<div id="footer">
<a href="#" id="open-filter">
<img src="<?php print $template_path?>/images/common/icon-filter_22x22.png" alt="Filter Icon" width="22" height="22" align="absmiddle" /> show photo filter</a>
<a href="#" id="close-filter">
<img src="<?php print $template_path?>/images/common/icon-filter_22x22.png" alt="Filter Icon" width="22" height="22" align="absmiddle" /> close photo filter</a>

<a id="back-top" href="#top">Back to top <img src="<?php print $template_path?>/images/common/icon-back_to_top_22x22.png" alt="Back to top" width="22" height="22" align="absmiddle" /></a>
<div id="filter">        
<span style="color:#000000">hier kommt die Filter Navigation rein </span>    
</div>
</div>

	  	
</div>
