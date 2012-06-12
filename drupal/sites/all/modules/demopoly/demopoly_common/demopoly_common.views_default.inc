<?php
/**
 * @file
 * demopoly_common.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function demopoly_common_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'protest_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'demopoly_protest';
  $view->human_name = 'protest content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Protest';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer protests';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'field_protest_image' => 'field_protest_image',
    'field_city' => 'field_city',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_protest_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Protest: Image */
  $handler->display->display_options['fields']['field_protest_image']['id'] = 'field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['table'] = 'field_data_field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['field'] = 'field_protest_image';
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
  $handler->display->display_options['fields']['field_protest_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_protest_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_protest_image']['field_api_classes'] = 0;
  /* Field: Field: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = 'Stadt';
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
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = 'Action';
  $handler->display->display_options['fields']['pid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['pid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['path'] = 'protest/[pid]/edit';
  $handler->display->display_options['fields']['pid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['pid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid']['format_plural'] = 0;
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid_1']['id'] = 'pid_1';
  $handler->display->display_options['fields']['pid_1']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid_1']['field'] = 'pid';
  $handler->display->display_options['fields']['pid_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['pid_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['pid_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['path'] = 'protest/[pid_1]/delete';
  $handler->display->display_options['fields']['pid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['pid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['pid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid_1']['format_plural'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/protest';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'protest';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['protest_content'] = array(
    t('Master'),
    t('Protest'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Image'),
    t('Stadt'),
    t('Action'),
    t('Edit'),
    t('protest/[pid]/edit'),
    t('.'),
    t(','),
    t('Delete'),
    t('protest/[pid_1]/delete'),
    t('Page'),
  );
  $export['protest_content'] = $view;

  $view = new view;
  $view->name = 'protest_frontpage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'demopoly_protest';
  $view->human_name = 'protest frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'frontpage';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Field: Protest: Image */
  $handler->display->display_options['fields']['field_protest_image']['id'] = 'field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['table'] = 'field_data_field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['field'] = 'field_protest_image';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'frontpage';
  $translatables['protest_frontpage'] = array(
    t('Master'),
    t('frontpage'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Protest ID'),
    t('.'),
    t(','),
    t('Image'),
    t('Page'),
  );
  $export['protest_frontpage'] = $view;

  return $export;
}
