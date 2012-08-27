<?php
// $Id$ 

/*
 * Dynamic display block module template (Drupal 7): upright60p - pager template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 ( 21-JAN-2011 )
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */
/**
 * @file
 * Dynamic display block module template  (Drupal 7): upright60p - pager template
 * - Scrollable pager with images
 *
 * Available variables:
 * - $ddblock_pager_settings['delta']: Block number of the block.
 * - $ddblock_pager_settings['pager']: Type of pager to add
 * - $ddblock_pager_settings['pager2']: Add prev/next pager
 * - $ddblock_pager_settings['pager_position']: position of the slider (top | bottom) 
 * - $ddblock_pager_items: array with pager_items
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
 
// jquery_plugin_add('scrollable');
 drupal_add_js(drupal_get_path('module', 'ddblock') . '/js/tools.scrollable-1.0.5.min.js');
$settings = $ddblock_cycle_pager_settings;
?>

<?php if ($settings['pager_position'] == 'bottom'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>

<!-- navigator --> 
<div class="navi"></div> 

<!-- custom "prev" link --> 
<div class="prev prev-<?php print $settings['pager_scrollable_loop'] ?>"></div> 

<!-- scrollable pager -->
<div id="ddblock-scrollable-pager-<?php print $settings['delta'] ?>" class="<?php print $settings['pager'] ?> clearfix">
 <div class="items <?php print $settings['pager'] ?>-inner clearfix">
  <?php if ($content): ?>
   <?php $item_counter=0; ?>
    <?php foreach ($content as $pager_item): ?>
     <?php if (isset($pager_item['pager_image'])) :?>
      <div class="<?php print $settings['pager'] ?>-item <?php print $settings['pager'] ?>-item-<?php print $item_counter ?>">
       <a href="#" title="navigate to topics" class="pager-link"><?php print $pager_item['pager_image'];?></a>
      </div> <!-- /custom-pager-item -->
     <?php endif; ?>               
     <?php $item_counter++; ?>
    <?php endforeach; ?>
  <?php endif; ?>
 </div> <!-- /pager-inner-->
</div>  <!-- /scrollable pager-->

<!-- custom "next" link --> 
<div class="next next-<?php print $settings['pager_scrollable_loop'] ?>"></div>
<?php if ($settings['pager_position'] == 'top'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
