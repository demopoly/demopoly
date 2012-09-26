<?php
/**
 * @file
 * demopoly_protest.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function demopoly_protest_views_default_views() {
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['pid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  $handler->display->display_options['fields']['pid']['format_plural'] = 0;
  /* Field: Protest: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_city']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_city']['field_api_classes'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_firstname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_firstname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_firstname']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_firstname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_firstname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_firstname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_firstname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_firstname']['field_api_classes'] = 0;
  /* Field: Protest: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Protest: Image */
  $handler->display->display_options['fields']['field_protest_image']['id'] = 'field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['table'] = 'field_data_field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['field'] = 'field_protest_image';
  $handler->display->display_options['fields']['field_protest_image']['label'] = '';
  $handler->display->display_options['fields']['field_protest_image']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['text'] = '[field_protest_image-fid]';
  $handler->display->display_options['fields']['field_protest_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_protest_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_image']['element_default_classes'] = 0;
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
  $handler->display->display_options['fields']['pid_1']['alter']['link_class'] = 'colorbox-inline button-edit';
  $handler->display->display_options['fields']['pid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['pid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid_1']['separator'] = '';
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
  $handler->display->display_options['fields']['pid_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['pid_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid_2']['separator'] = '';
  $handler->display->display_options['fields']['pid_2']['format_plural'] = 0;
  /* Field: Protest: Frontpage Picture */
  $handler->display->display_options['fields']['field_protest_is_frontpage']['id'] = 'field_protest_is_frontpage';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['table'] = 'field_data_field_protest_is_frontpage';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['field'] = 'field_protest_is_frontpage';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['label'] = '';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['text'] = '<div class="protest-is-activated-1">Frontpage Picture</div>';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['path'] = 'protest/[pid]/activate';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['link_class'] = 'protest-is-activated-[field_protest_is_frontpage-value]';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['empty'] = '0';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_protest_is_frontpage']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_protest_is_frontpage']['field_api_classes'] = 0;
  /* Field: Protest: Picture Content Box */
  $handler->display->display_options['fields']['field_protest_context']['id'] = 'field_protest_context';
  $handler->display->display_options['fields']['field_protest_context']['table'] = 'field_data_field_protest_context';
  $handler->display->display_options['fields']['field_protest_context']['field'] = 'field_protest_context';
  $handler->display->display_options['fields']['field_protest_context']['label'] = '';
  $handler->display->display_options['fields']['field_protest_context']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['field_protest_context']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_context']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['empty'] = 'No description given';
  $handler->display->display_options['fields']['field_protest_context']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_protest_context']['field_api_classes'] = 0;
  /* Field: Protest: Image */
  $handler->display->display_options['fields']['field_protest_image_1']['id'] = 'field_protest_image_1';
  $handler->display->display_options['fields']['field_protest_image_1']['table'] = 'field_data_field_protest_image';
  $handler->display->display_options['fields']['field_protest_image_1']['field'] = 'field_protest_image';
  $handler->display->display_options['fields']['field_protest_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['text'] = '[field_protest_image_1-fid]';
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_protest_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_image_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_protest_image_1']['settings'] = array(
    'image_style' => 'pager-user-settings-my_protest-background',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_protest_image_1']['field_api_classes'] = 0;
  /* Field: Field: address-postal */
  $handler->display->display_options['fields']['field_address_postal']['id'] = 'field_address_postal';
  $handler->display->display_options['fields']['field_address_postal']['table'] = 'field_data_field_address_postal';
  $handler->display->display_options['fields']['field_address_postal']['field'] = 'field_address_postal';
  $handler->display->display_options['fields']['field_address_postal']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_address_postal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address_postal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address_postal']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_postal']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address_postal']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_postal']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(),
  );
  $handler->display->display_options['fields']['field_address_postal']['field_api_classes'] = 0;
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
    t('.'),
    t('[field_protest_image-fid]'),
    t('Edit'),
    t('protest/[pid]/edit?iframe=true&width=900&height=500'),
    t('delete'),
    t('protest/[pid]/delete?iframe=true&width=900&height=500'),
    t('<div class="protest-is-activated-1">Frontpage Picture</div>'),
    t('protest/[pid]/activate'),
    t('No description given'),
    t('[field_protest_image_1-fid]'),
    t('All'),
  );
  $export['my_images'] = $view;

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
  /* Field: Protest: City */
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
  $view->name = 'protest_detail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'demopoly_protest';
  $view->human_name = 'protest-detail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'protest-detail';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_ddblock';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default (This option is for views slideshow cycle, it is not used for views_slideshow ddblock)',
    'module' => 'views_slideshow_ddblock',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_firstname' => 0,
    'field_protest_image' => 0,
    'field_protest_context' => 0,
    'pid' => 0,
    'uid' => 0,
    'field_protest_image_1' => 0,
    'field_city' => 0,
    'field_date' => 0,
    'pid_1' => 0,
    'field_download' => 0,
    'field_address_geo' => 0,
    'field_address_postal' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_firstname' => 0,
    'field_protest_image' => 0,
    'field_protest_context' => 0,
    'pid' => 0,
    'uid' => 0,
    'field_protest_image_1' => 0,
    'field_city' => 0,
    'field_date' => 0,
    'pid_1' => 0,
    'field_download' => 0,
    'field_address_geo' => 0,
    'field_address_postal' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => 'uid',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => 'field_protest_image',
        ),
        2 => array(
          'target' => 'slide_name',
          'source' => 'field_firstname',
        ),
        3 => array(
          'target' => 'slide_context',
          'source' => 'field_protest_context',
        ),
        4 => array(
          'target' => 'slide_date',
          'source' => 'field_date',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => '',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => 'slide_image_thumb',
          'source' => 'field_protest_image_1',
        ),
        8 => array(
          'target' => 'slide_city',
          'source' => 'field_city',
        ),
        9 => array(
          'target' => 'uniqid',
          'source' => 'pid_1',
        ),
        10 => array(
          'target' => 'download',
          'source' => 'field_download',
        ),
        11 => array(
          'target' => 'add_postal',
          'source' => 'field_address_postal',
        ),
        12 => array(
          'target' => 'add_geo',
          'source' => 'field_address_geo',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'default',
    'template_size_wrapper' => array(
      'template_size' => 'default',
    ),
    'content_container' => array(
      'container' => 'div.container-wrapper',
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '1500',
      'timeout' => '0',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'left',
        'pager_event' => 'click',
        'pager_disable_click' => 1,
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 1,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 0,
          'pager' => 0,
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 0,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'fadeOut',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'fadeIn',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
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
  $handler->display->display_options['fields']['field_firstname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_firstname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_firstname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_firstname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_firstname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_firstname']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_protest_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_protest_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_protest_image']['settings'] = array(
    'image_style' => 'page-protest-detail_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_protest_image']['field_api_classes'] = 0;
  /* Field: Protest: Picture Content Box */
  $handler->display->display_options['fields']['field_protest_context']['id'] = 'field_protest_context';
  $handler->display->display_options['fields']['field_protest_context']['table'] = 'field_data_field_protest_context';
  $handler->display->display_options['fields']['field_protest_context']['field'] = 'field_protest_context';
  $handler->display->display_options['fields']['field_protest_context']['label'] = '';
  $handler->display->display_options['fields']['field_protest_context']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['element_type'] = '0';
  $handler->display->display_options['fields']['field_protest_context']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_context']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_context']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_context']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_protest_context']['field_api_classes'] = 0;
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid']['element_type'] = '0';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['pid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid']['format_plural'] = 0;
  /* Field: Protest: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_type'] = '0';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['format_plural'] = 0;
  /* Field: Protest: Image */
  $handler->display->display_options['fields']['field_protest_image_1']['id'] = 'field_protest_image_1';
  $handler->display->display_options['fields']['field_protest_image_1']['table'] = 'field_data_field_protest_image';
  $handler->display->display_options['fields']['field_protest_image_1']['field'] = 'field_protest_image';
  $handler->display->display_options['fields']['field_protest_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_image_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_protest_image_1']['settings'] = array(
    'image_style' => 'page-protest-detail_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_protest_image_1']['field_api_classes'] = 0;
  /* Field: Protest: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_city']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_city']['field_api_classes'] = 0;
  /* Field: Protest: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid_1']['id'] = 'pid_1';
  $handler->display->display_options['fields']['pid_1']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid_1']['field'] = 'pid';
  $handler->display->display_options['fields']['pid_1']['label'] = '';
  $handler->display->display_options['fields']['pid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['pid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid_1']['separator'] = '';
  $handler->display->display_options['fields']['pid_1']['format_plural'] = 0;
  /* Field: Protest: Download */
  $handler->display->display_options['fields']['field_download']['id'] = 'field_download';
  $handler->display->display_options['fields']['field_download']['table'] = 'field_data_field_download';
  $handler->display->display_options['fields']['field_download']['field'] = 'field_download';
  $handler->display->display_options['fields']['field_download']['label'] = '';
  $handler->display->display_options['fields']['field_download']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_download']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_download']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_download']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_download']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_download']['element_type'] = '0';
  $handler->display->display_options['fields']['field_download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_download']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_download']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_download']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_download']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_download']['field_api_classes'] = 0;
  /* Field: Field: address-geo */
  $handler->display->display_options['fields']['field_address_geo']['id'] = 'field_address_geo';
  $handler->display->display_options['fields']['field_address_geo']['table'] = 'field_data_field_address_geo';
  $handler->display->display_options['fields']['field_address_geo']['field'] = 'field_address_geo';
  $handler->display->display_options['fields']['field_address_geo']['label'] = '';
  $handler->display->display_options['fields']['field_address_geo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address_geo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address_geo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_geo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address_geo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address_geo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_address_geo']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_address_geo']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 0,
  );
  $handler->display->display_options['fields']['field_address_geo']['field_api_classes'] = 0;
  /* Field: Field: address-postal */
  $handler->display->display_options['fields']['field_address_postal']['id'] = 'field_address_postal';
  $handler->display->display_options['fields']['field_address_postal']['table'] = 'field_data_field_address_postal';
  $handler->display->display_options['fields']['field_address_postal']['field'] = 'field_address_postal';
  $handler->display->display_options['fields']['field_address_postal']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address_postal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address_postal']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_postal']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address_postal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address_postal']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address_postal']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_postal']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address_postal']['field_api_classes'] = 0;
  /* Sort criterion: Protest: Frontpage Picture (field_protest_is_frontpage) */
  $handler->display->display_options['sorts']['field_protest_is_frontpage_value']['id'] = 'field_protest_is_frontpage_value';
  $handler->display->display_options['sorts']['field_protest_is_frontpage_value']['table'] = 'field_data_field_protest_is_frontpage';
  $handler->display->display_options['sorts']['field_protest_is_frontpage_value']['field'] = 'field_protest_is_frontpage_value';
  $handler->display->display_options['sorts']['field_protest_is_frontpage_value']['order'] = 'DESC';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'protest-detail/%';
  $translatables['protest_detail'] = array(
    t('Master'),
    t('protest-detail'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('First name'),
    t('.'),
    t(','),
    t('All'),
    t('Page'),
  );
  $export['protest_detail'] = $view;

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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '11';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
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
  /* Filter criterion: Protest: Frontpage Picture (field_protest_is_frontpage) */
  $handler->display->display_options['filters']['field_protest_is_frontpage_value']['id'] = 'field_protest_is_frontpage_value';
  $handler->display->display_options['filters']['field_protest_is_frontpage_value']['table'] = 'field_data_field_protest_is_frontpage';
  $handler->display->display_options['filters']['field_protest_is_frontpage_value']['field'] = 'field_protest_is_frontpage_value';
  $handler->display->display_options['filters']['field_protest_is_frontpage_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
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
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Protest ID'),
    t('.'),
    t(','),
    t('Image'),
    t('Page'),
  );
  $export['protest_frontpage'] = $view;

  $view = new view;
  $view->name = 'protest_frontpage_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'demopoly_protest';
  $view->human_name = 'protest-frontpage-';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '88';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
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
  $handler->display->display_options['fields']['field_protest_image']['label'] = '';
  $handler->display->display_options['fields']['field_protest_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_protest_image']['settings'] = array(
    'image_style' => 'page-protest-detail_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_protest_image']['field_api_classes'] = 0;
  /* Field: Protest: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_city']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_city']['field_api_classes'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_firstname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_firstname']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_firstname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_firstname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_firstname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_firstname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_firstname']['field_api_classes'] = 0;
  /* Filter criterion: Protest: Frontpage Picture (field_protest_is_frontpage) */
  $handler->display->display_options['filters']['field_protest_is_frontpage_value']['id'] = 'field_protest_is_frontpage_value';
  $handler->display->display_options['filters']['field_protest_is_frontpage_value']['table'] = 'field_data_field_protest_is_frontpage';
  $handler->display->display_options['filters']['field_protest_is_frontpage_value']['field'] = 'field_protest_is_frontpage_value';
  $handler->display->display_options['filters']['field_protest_is_frontpage_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'frontpage';
  $translatables['protest_frontpage_'] = array(
    t('Master'),
    t('Frontpage'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Protest ID'),
    t('.'),
    t(','),
    t('Page'),
  );
  $export['protest_frontpage_'] = $view;

  $view = new view;
  $view->name = 'qtip_preview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'demopoly_protest';
  $view->human_name = 'qTip Preview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'qTip Preview';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Protest: Protest ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'demopoly_protest';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Field: Protest: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['text'] = '[field_city-value]';
  $handler->display->display_options['fields']['field_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_city']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_city']['field_api_classes'] = 0;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_firstname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_firstname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_firstname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_firstname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_firstname']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_firstname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_firstname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_firstname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_firstname']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_firstname']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_protest_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protest_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protest_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protest_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_protest_image']['settings'] = array(
    'image_style' => 'page-protest-detail_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_protest_image']['field_api_classes'] = 0;
  /* Contextual filter: Protest: Protest ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'demopoly_protest';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['pid']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'qtip-preview/%';
  $translatables['qtip_preview'] = array(
    t('Master'),
    t('qTip Preview'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Protest ID'),
    t('.'),
    t(','),
    t('[field_city-value]'),
    t('All'),
    t('Page'),
  );
  $export['qtip_preview'] = $view;

  return $export;
}
