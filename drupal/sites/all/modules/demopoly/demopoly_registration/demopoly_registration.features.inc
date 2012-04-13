<?php
/**
 * @file
 * demopoly_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function demopoly_registration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

