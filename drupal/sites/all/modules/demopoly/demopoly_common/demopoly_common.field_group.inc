<?php
/**
 * @file
 * demopoly_common.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function demopoly_common_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|user|user|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'private profile',
    'weight' => '0',
    'children' => array(
      0 => 'field_firstname',
      1 => 'account',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'private profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<a href="#info" name="show_info" id="show_info">Info</a>',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_main|user|user|form'] = $field_group;

  return $export;
}
