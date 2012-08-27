<?php
// $Id$ 

/*!
 * Dynamic display block module template: upright30 - pager template
 * Copyright (c) 2008 - 2009 P. Blaauw All rights reserved.
 * Version 1.1 (11-FEB-2009)
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */

/**
 * @file
 * Dynamic display block module template: upright30 - pager template
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
?>
<!-- custom pager with text. -->
<?php if ($pager_position == 'bottom'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
<div id="ddblock-custom-pager-<?php print $delta ?>" class="<?php print $pager ?> clear-block border">
 <div  class="<?php print $pager ?>-inner clear-block border">
  <?php if ($pager_items): ?>
   <?php $item_counter=0; ?>
   <?php foreach ($pager_items as $pager_item): ?>
    <div class="<?php print $pager ?>-item <?php print $pager ?>-item-<?php print $item_counter ?>">
     <div class="<?php print $pager ?>-item-inner"> 
      <a href="#" title="navigate to topic" class="pager-link"><?php print $pager_item['text']; ?> </a>
     </div>
    </div> <!-- /custom-pager-item -->
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
<?php if ($pager_position == 'top'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
