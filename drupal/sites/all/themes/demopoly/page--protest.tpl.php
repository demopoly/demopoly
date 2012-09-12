<?php 
$base_path = '/'.drupal_get_path('theme', 'demopoly').'/';
?>
<?php #print render($page['content']);?>
<?php 
$page['content']['system_main']['main']['#markup'];
?>