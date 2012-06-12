<?php
/**
 * @file
 * demopoly_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function demopoly_profile_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'my_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'demopoly_protest';
  $view->human_name = 'my_images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_city']['field_api_classes'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_firstname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_firstname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_firstname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_firstname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_firstname']['field_api_classes'] = 0;
  /* Field: Protest: Datum */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Protest: Image */
  $handler->display->display_options['fields']['field_protest_image']['id'] = 'field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['table'] = 'field_data_field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['field'] = 'field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['label'] = '';
  $handler->display->display_options['fields']['field_protest_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_protest_image']['settings'] = array(
    'image_style' => 'img_style_land_2',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_protest_image']['field_api_classes'] = 0;
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid_1']['id'] = 'pid_1';
  $handler->display->display_options['fields']['pid_1']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid_1']['field'] = 'pid';
  $handler->display->display_options['fields']['pid_1']['label'] = '';
  $handler->display->display_options['fields']['pid_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['pid_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['path'] = 'protest/[pid]/edit?iframe=true&width=900&height=500';
  $handler->display->display_options['fields']['pid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['link_class'] = 'colorbox-inline';
  $handler->display->display_options['fields']['pid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['pid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid_1']['format_plural'] = 0;
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid_2']['id'] = 'pid_2';
  $handler->display->display_options['fields']['pid_2']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid_2']['field'] = 'pid';
  $handler->display->display_options['fields']['pid_2']['label'] = '';
  $handler->display->display_options['fields']['pid_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['pid_2']['alter']['text'] = 'delete';
  $handler->display->display_options['fields']['pid_2']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['pid_2']['alter']['path'] = 'protest/[pid]/delete?iframe=true&width=900&height=500';
  $handler->display->display_options['fields']['pid_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['link_class'] = 'colorbox-inline';
  $handler->display->display_options['fields']['pid_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['pid_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid_2']['format_plural'] = 0;
  /* Sort criterion: Protest: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'demopoly_protest';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Protest: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'demopoly_protest';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $translatables['my_images'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Protest ID'),
    t('.'),
    t(','),
    t('City'),
    t('First name'),
    t('Datum'),
    t('Edit'),
    t('protest/[pid]/edit?iframe=true&width=900&height=500'),
    t('delete'),
    t('protest/[pid]/delete?iframe=true&width=900&height=500'),
    t('All'),
  );
  $export['my_images'] = $view;

  return $export;
}
