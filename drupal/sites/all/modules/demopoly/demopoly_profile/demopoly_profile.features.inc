<?php
/**
 * @file
 * demopoly_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function demopoly_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function demopoly_profile_views_api() {
  return array("version" => "3.0");
}
