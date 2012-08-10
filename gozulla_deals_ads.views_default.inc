<?php
/**
 * @file
 * gozulla_deals_ads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gozulla_deals_ads_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'active_deals';
  $view->description = 'Dispalys a deal on location page and randomly on the homepage';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'active deals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'one hot deal';
  $handler->display->display_options['css_class'] = 'float-right';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Deal photo */
  $handler->display->display_options['fields']['field_deal_photo']['id'] = 'field_deal_photo';
  $handler->display->display_options['fields']['field_deal_photo']['table'] = 'field_data_field_deal_photo';
  $handler->display->display_options['fields']['field_deal_photo']['field'] = 'field_deal_photo';
  $handler->display->display_options['fields']['field_deal_photo']['label'] = '';
  $handler->display->display_options['fields']['field_deal_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deal_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_deal_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_deal_photo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_deal_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_deal_photo']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_deal_photo']['settings'] = array(
    'colorbox_node_style' => 'detail_thumbnail',
    'colorbox_image_style' => 'colorbox_image',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_deal_photo']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Deal Details */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Deal Details';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = '[ edit ]';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_deals' => 'gozulla_deals',
  );
  /* Filter criterion: Content: Deal active  (field_deal_active_) */
  $handler->display->display_options['filters']['field_deal_active__value']['id'] = 'field_deal_active__value';
  $handler->display->display_options['filters']['field_deal_active__value']['table'] = 'field_data_field_deal_active_';
  $handler->display->display_options['filters']['field_deal_active__value']['field'] = 'field_deal_active__value';
  $handler->display->display_options['filters']['field_deal_active__value']['value'] = array(
    1 => '1',
  );

  /* Display: location display */
  $handler = $view->new_display('block', 'location display', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'deals';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: global deal */
  $handler = $view->new_display('block', 'global deal', 'global_deal_block');
  $handler->display->display_options['display_description'] = 'Displays random deal on homepage';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: directory display */
  $handler = $view->new_display('block', 'directory display', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'deals';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays along with shops on directory pages';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $translatables['active_deals'] = array(
    t('Master'),
    t('one hot deal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[ edit ]'),
    t('location display'),
    t('deals'),
    t('global deal'),
    t('Displays random deal on homepage'),
    t('directory display'),
    t('Displays along with shops on directory pages'),
  );
  $export['active_deals'] = $view;

  $view = new view;
  $view->name = 'gozulla_ads';
  $view->description = 'for displaying ads in sidebar';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'gozulla ads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: deal link */
  $handler->display->display_options['fields']['field_deal_link']['id'] = 'field_deal_link';
  $handler->display->display_options['fields']['field_deal_link']['table'] = 'field_data_field_deal_link';
  $handler->display->display_options['fields']['field_deal_link']['field'] = 'field_deal_link';
  $handler->display->display_options['fields']['field_deal_link']['label'] = '';
  $handler->display->display_options['fields']['field_deal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_deal_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deal_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deal_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deal_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_deal_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_deal_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_deal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_deal_link']['field_api_classes'] = 0;
  /* Field: Content: deal image */
  $handler->display->display_options['fields']['field_deal_image']['id'] = 'field_deal_image';
  $handler->display->display_options['fields']['field_deal_image']['table'] = 'field_data_field_deal_image';
  $handler->display->display_options['fields']['field_deal_image']['field'] = 'field_deal_image';
  $handler->display->display_options['fields']['field_deal_image']['label'] = '';
  $handler->display->display_options['fields']['field_deal_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_deal_image']['alter']['path'] = '[field_deal_link]';
  $handler->display->display_options['fields']['field_deal_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_deal_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_deal_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deal_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_deal_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_deal_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_deal_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_deal_image']['settings'] = array(
    'image_style' => 'gozulla_ad',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_deal_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_ad' => 'gozulla_ad',
  );

  /* Display: help-boat */
  $handler = $view->new_display('block', 'help-boat', 'block');
  $handler->display->display_options['display_description'] = 'displays boat help ad';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_ad' => 'gozulla_ad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';

  /* Display: help-bike */
  $handler = $view->new_display('block', 'help-bike', 'block_1');
  $handler->display->display_options['display_description'] = 'displays bike help ad';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_ad' => 'gozulla_ad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';

  /* Display: help-climb */
  $handler = $view->new_display('block', 'help-climb', 'block_2');
  $handler->display->display_options['display_description'] = 'displays climb help ad';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_ad' => 'gozulla_ad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';

  /* Display: help-golf */
  $handler = $view->new_display('block', 'help-golf', 'block_3');
  $handler->display->display_options['display_description'] = 'displays golf help ad';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_ad' => 'gozulla_ad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    20 => '20',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';

  /* Display: help-skate */
  $handler = $view->new_display('block', 'help-skate', 'block_4');
  $handler->display->display_options['display_description'] = 'displays skate help ad';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_ad' => 'gozulla_ad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    18 => '18',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';

  /* Display: help-snow */
  $handler = $view->new_display('block', 'help-snow', 'block_5');
  $handler->display->display_options['display_description'] = 'displays snow help ad';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_ad' => 'gozulla_ad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';

  /* Display: help-surf */
  $handler = $view->new_display('block', 'help-surf', 'block_6');
  $handler->display->display_options['display_description'] = 'displays surf help ad';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gozulla_ad' => 'gozulla_ad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';
  $translatables['gozulla_ads'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_deal_link]'),
    t('help-boat'),
    t('displays boat help ad'),
    t('help-bike'),
    t('displays bike help ad'),
    t('help-climb'),
    t('displays climb help ad'),
    t('help-golf'),
    t('displays golf help ad'),
    t('help-skate'),
    t('displays skate help ad'),
    t('help-snow'),
    t('displays snow help ad'),
    t('help-surf'),
    t('displays surf help ad'),
  );
  $export['gozulla_ads'] = $view;

  return $export;
}
