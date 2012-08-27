<?php

/**
 * @file
 * The Context reaction plugin to add Module CSS files
 *
 * Contextually add Module CSS files to any page on your site.
 */

/**
 * Expose modules css as context reactions.
 */
class context_reaction_addcss_module extends context_reaction_addcss {

  function __construct($plugin, $info) {
    parent::__construct($plugin, $info);
    $this->search_scope = 'modules';
    $this->title = t('CSS from Modules');
  }

}