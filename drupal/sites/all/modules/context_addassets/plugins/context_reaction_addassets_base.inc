<?php

/**
 * @file
 * The Context reaction plugin to add asset files
 *
 * Contextually add asset files to any page on your site.
 */

/**
 * Expose themes as context reactions.
 */
class context_reaction_addassets_base extends context_reaction {

  var $search_scope;
  function __construct($plugin, $info) {
    parent::__construct($plugin, $info);

    // defaults are for js - but should never be picked up.
    $this->title = t('JS from Themes');
    $this->search_type = 'js';
  }

  /**
   * Editor form.
   */
  function editor_form($context) {
    $form = $this->options_form($context);
    return $form;
  }

  /**
   * Submit handler for editor form.
   */
  function editor_form_submit($context, $values) {
    return $values;
  }

  /**
   * Prepare formatted form array showing grouped assets
   *  grouped by location and show as checkboxes
   */
  function options_form($context) {
    $values = $this->fetch_from_context($context);

    $options = $this->_context_addassets_search();
    $options = !$options ? array() : $options;
    $options_array = array();

    foreach ($options as $key => $value) {
      $path = $key;
      $key = explode(' -- ', $value);
      $value = $key[1];
      $key = trim($key[0]);
      $options_array[$key][$path] = $value;
    }

    $form['#tree'] = TRUE;

    foreach ($options_array as $key => $items) {

      $form[$key] = array(
        '#type' => 'item',
        '#title' => $key,
      );

      foreach ($items as $path => $file_name) {
        $form[$key][$path] = array(
          '#title' => $file_name,
          '#type' => 'checkbox',
          '#return_value' => $path,
          '#default_value' => isset($values[$key][$path]) ? $values[$key][$path] : array(),
        );
      }
    }

    if (count($form) < 2) {
      $link_options['query'] = drupal_get_destination();

      $form['help'] = array(
        '#type' => 'item',
        '#title' => t('No Assets Found'),
        '#description' => l('May you need to expand your search?', _context_addassets_admin_path(), $link_options)
      );
    }
    return $form;
  }

  /**
   * Implementation of the built-in context plugin class execution
   */
  function execute() {
    $contexts = context_active_contexts();
    $classes = array();
    //dpm($contexts);
    foreach ($contexts as $key => $value) {
      if (!empty($value->reactions[$this->plugin])) {
        foreach ($value->reactions[$this->plugin] as $path_array) {
          if (is_array($path_array)) {
            foreach ($path_array as $path) {
              if ($path) {
                $ext = explode('.', $path);
                $ext = drupal_strtolower($ext[count($ext)-1]);
           
                switch ($ext) {
                  case 'js':
                    drupal_add_js($path, array('group' => JS_DEFAULT));
                    break;
                  case 'css':
                    drupal_add_css($path, array('group' => CSS_THEME));
                    break;
                }
              }
            }
          }
        }
      }
    }
  }

  /**
	 *  Scan active themes for js files.
	 *
	 *	@return Array
	 *		An array indexed by file paths containing strings describing each path "Theme Key - File Name"
	 */
  function _context_addassets_search() {
    $found_files = _context_addassets_scandir($this->search_type, $this->search_scope);
    return $found_files;
  }
}