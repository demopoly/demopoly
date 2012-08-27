<?php
// $Id$ 

/*
 * Dynamic display block module template (Drupal 7): upright30p - pager template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 ( 21-JAN-2011 )
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */
/**
 * @file
 * Dynamic display block module template: upright30p - pager template
 * - Custom pager with text
 *
 * Available variables:
 * - $delta: Block number of the block.
 * - $pager: Type of pager to add
 * - $pager_items: pager item array
 * - $pager_position: position of the slider (top | bottom) 
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
$number_of_items = 6;        // total number of items to show 
$number_of_items_per_row=3;  // number of items to show in a row
$settings = $ddblock_cycle_pager_settings;
?>
<!-- custom pager with text. -->
<?php if ($settings['pager_position'] == 'bottom'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
<div id="ddblock-custom-pager-<?php print $settings['delta'] ?>" class="<?php print $settings['pager'] ?> clear-block border">
 <div  class="<?php print $settings['pager'] ?>-inner clear-block border">
  <?php if ($content): ?>
   <?php $item_counter=0; ?>
   <?php foreach ($content as $pager_item): ?>
    <?php if (isset($pager_item['pager_text'])) :?>
     <div class="<?php print $settings['pager'] ?>-item <?php print $settings['pager'] ?>-item-<?php print $item_counter ?>">
      <div class="<?php print $settings['pager'] ?>-item-inner"> 
       <a href="#" title="navigate to topic" class="pager-link"><?php print $pager_item['pager_text']; ?> </a>
      </div>
     </div> <!-- /custom-pager-item -->
    <?php endif; ?>  
    <?php $item_counter++; if ($item_counter % $number_of_items_per_row == 0):?>
     <?php if ($item_counter <> $number_of_items): ?>
       <div class="spacer-horizontal"><b></b></div>
     <?php endif; ?>  
    <?php else: ?>
     <div class="spacer-vertical"></div>
    <?php endif; ?>
   <?php endforeach; ?>
  <?php endif; ?>
 </div> <!-- /pager-inner-->
</div>  <!-- /pager-->
<?php if ($settings['pager_position'] == 'top'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
