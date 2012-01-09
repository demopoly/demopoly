<?php
/**
 * @file
 * demopoly_dev.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function demopoly_dev_user_default_permissions() {
  $permissions = array();

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'devel',
  );

  return $permissions;
}
