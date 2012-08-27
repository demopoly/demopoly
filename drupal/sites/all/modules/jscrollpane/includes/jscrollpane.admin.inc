<?php

/**
 * @file
 * Administration functions for the jScrollPane module.
 */
 
/**
 * Form constructor for the admin settings form.
 *
 * @see jscrollpane_menu()
 */
function jscrollpane_settings_form() {
  $form = array();
  
  $form['jscrollpane_class'] = array(
    '#title' => t('Class'),
    '#description' => t('The HTML class that is to be used to apply jScollPane.'),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => variable_get('jscrollpane_class', 'scroll-pane'),
  );
  
  return system_settings_form($form);
}