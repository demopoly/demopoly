<?php
// $Id$ 

/*
 * Dynamic display block module template (Drupal 7): upright10p - pager template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 ( 21-JAN-2011 )
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */
/**
 * @file
 * Dynamic display block module template: upright10p - pager template
 * - Number pager
 *
 * Available variables:
 * - $delta: Block number of the block.
 * - $pager: Type of pager to add
 * - $pager_position: position of the slider (top | bottom) 
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
 $settings = $ddblock_cycle_pager_settings;
?>
<?php if ($settings['pager_position'] == 'bottom'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
<!-- number pager -->
<div id="ddblock-<?php print $settings['pager'] ."-". $settings['delta'] ?>" class="<?php print $settings['pager'] ?> ddblock-pager clear-block">
 <?php $item_counter=1; ?>
 <ul>
  <?php foreach ($content as $item): ?>
   <li class="number-pager-item">
    <a href="#" class="pager-link" title="click to navigate to topic">
     <?php print $item_counter; ?>
    </a>
   </li>
   <?php $item_counter++;?>
  <?php endforeach; ?>
 </ul>
</div> 
<div class="number-pager-pre-<?php print $settings['pager_position']; ?> "></div>
<?php if ($settings['pager_position'] == 'top'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
