<?php
// $Id$ 

/*
 * Dynamic display block module template (Drupal 7): upright20p - pager template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 ( 21-JAN-2011 )
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */
/**
 * @file
 * Dynamic display block module template: upright20p - pager template
 * - prev/next pager
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
<!-- prev next pager. -->
<div id="ddblock-<?php print $settings['pager'] ."-". $settings['delta'] ?>" class="<?php print $settings['pager'] ?> ddblock-pager clear-block">
 <a class="prev" href="#"><< Prev</a>
 <a class="count"></a>
 <a class="next" href="#">Next >></a>
</div>
<?php if ($settings['pager_position'] == 'top'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
