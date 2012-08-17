<?php 
$base_path = '/'.drupal_get_path('theme', 'demopoly').'/';
?>

<div id="wrapper">
<!--  start Content-->
<div id="content">
<?php if ($messages):?>
<?php #print $messages;?>
<?php endif;?>
<?php print render($page['content']);?>
</div>
</div>