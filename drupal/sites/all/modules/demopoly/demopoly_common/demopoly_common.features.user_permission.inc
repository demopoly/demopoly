<?php
/**
 * @file
 * demopoly_common.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function demopoly_common_user_default_permissions() {
  $permissions = array();

  // Exported permission: add protests.
  $permissions['add protests'] = array(
    'name' => 'add protests',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'demopoly_protest',
  );

  // Exported permission: administer protests.
  $permissions['administer protests'] = array(
    'name' => 'administer protests',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'demopoly_protest',
  );

  // Exported permission: delete protests.
  $permissions['delete protests'] = array(
    'name' => 'delete protests',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'demopoly_protest',
  );

  // Exported permission: edit protests.
  $permissions['edit protests'] = array(
    'name' => 'edit protests',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'demopoly_protest',
  );

  // Exported permission: view protests.
  $permissions['view protests'] = array(
    'name' => 'view protests',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'demopoly_protest',
  );

  return $permissions;
}
