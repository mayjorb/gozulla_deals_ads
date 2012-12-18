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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: location nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_gozullalocation_nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'location nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Deal Details */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Deal Details';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[ edit ]';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: gozulla location (field_gozulla_location) */
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['id'] = 'field_gozulla_location_nid';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['table'] = 'field_data_field_gozulla_location';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['field'] = 'field_gozulla_location_nid';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['validate_options']['types'] = array(
    'gozullalocation' => 'gozullalocation',
  );
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
    'deal' => 'deal',
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="business-deals"><a id="deals">Business Deals</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: gozulla location (field_gozulla_location) */
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['id'] = 'field_gozulla_location_nid';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['table'] = 'field_data_field_gozulla_location';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['field'] = 'field_gozulla_location_nid';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_gozulla_location_nid']['validate_options']['types'] = array(
    'gozullalocation' => 'gozullalocation',
  );

  /* Display: global deal */
  $handler = $view->new_display('block', 'global deal', 'global_deal_block');
  $handler->display->display_options['display_description'] = 'Displays random deal on homepage';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: gozulla location (field_gozulla_location) */
  $handler->display->display_options['relationships']['field_gozulla_location_nid']['id'] = 'field_gozulla_location_nid';
  $handler->display->display_options['relationships']['field_gozulla_location_nid']['table'] = 'field_data_field_gozulla_location';
  $handler->display->display_options['relationships']['field_gozulla_location_nid']['field'] = 'field_gozulla_location_nid';
  $handler->display->display_options['relationships']['field_gozulla_location_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: location nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_gozulla_location_nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'location nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Business logo */
  $handler->display->display_options['fields']['field_location_logo']['id'] = 'field_location_logo';
  $handler->display->display_options['fields']['field_location_logo']['table'] = 'field_data_field_location_logo';
  $handler->display->display_options['fields']['field_location_logo']['field'] = 'field_location_logo';
  $handler->display->display_options['fields']['field_location_logo']['relationship'] = 'field_gozulla_location_nid';
  $handler->display->display_options['fields']['field_location_logo']['label'] = '';
  $handler->display->display_options['fields']['field_location_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location_logo']['alter']['path'] = 'node/[nid]#deals';
  $handler->display->display_options['fields']['field_location_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_location_logo']['settings'] = array(
    'image_style' => 'gozulla_client_logo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]#deals';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Deal Details */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Deal Details';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[ edit ]';
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Print Deal */
  $handler = $view->new_display('page', 'Print Deal', 'print_deal');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: gozulla location (field_gozulla_location) - reverse */
  $handler->display->display_options['relationships']['reverse_field_gozulla_location_node']['id'] = 'reverse_field_gozulla_location_node';
  $handler->display->display_options['relationships']['reverse_field_gozulla_location_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_gozulla_location_node']['field'] = 'reverse_field_gozulla_location_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Deal Details */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['ui_name'] = 'Deal Details';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Valid from */
  $handler->display->display_options['fields']['field_deal_expiration_date']['id'] = 'field_deal_expiration_date';
  $handler->display->display_options['fields']['field_deal_expiration_date']['table'] = 'field_data_field_deal_expiration_date';
  $handler->display->display_options['fields']['field_deal_expiration_date']['field'] = 'field_deal_expiration_date';
  $handler->display->display_options['fields']['field_deal_expiration_date']['label'] = 'Expires';
  $handler->display->display_options['fields']['field_deal_expiration_date']['settings'] = array(
    'format_type' => 'm_d_y',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_gozullalocation_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Business logo */
  $handler->display->display_options['fields']['field_location_logo']['id'] = 'field_location_logo';
  $handler->display->display_options['fields']['field_location_logo']['table'] = 'field_data_field_location_logo';
  $handler->display->display_options['fields']['field_location_logo']['field'] = 'field_location_logo';
  $handler->display->display_options['fields']['field_location_logo']['relationship'] = 'field_gozullalocation_nid';
  $handler->display->display_options['fields']['field_location_logo']['label'] = '';
  $handler->display->display_options['fields']['field_location_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_location_logo']['settings'] = array(
    'image_style' => 'gozulla_client_logo',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#" onClick="window.print()">Send to printer</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['path'] = 'deals/%/print';
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
    t('All'),
    t('location display'),
    t('<h3 class="business-deals"><a id="deals">Business Deals</a></h3>'),
    t('global deal'),
    t('Displays random deal on homepage'),
    t('field_gozulla_location'),
    t('directory display'),
    t('deals'),
    t('Displays along with shops on directory pages'),
    t('Print Deal'),
    t('Expires'),
    t('<a href="#" onClick="window.print()">Send to printer</a>'),
  );
  $export['active_deals'] = $view;

  $view = new view();
  $view->name = 'deal_location_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'deal location data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'deal location data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'shop-name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: formatted address */
  $handler->display->display_options['fields']['field_address_1']['id'] = 'field_address_1';
  $handler->display->display_options['fields']['field_address_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_1']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address_1']['ui_name'] = 'formatted address';
  $handler->display->display_options['fields']['field_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_1']['alter']['text'] = '[field_address_1-thoroughfare] <br />
[field_address_1-locality], [field_address_1-administrative_area]  [field_address_1-postal_code]
';
  $handler->display->display_options['fields']['field_address_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_address_1']['element_class'] = 'shop-address';
  $handler->display->display_options['fields']['field_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Business Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_phone']['element_class'] = 'shop-phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Business website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_website']['element_class'] = 'shop-url';
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_url';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'gozullalocation' => 'gozullalocation',
  );

  /* Display: business information */
  $handler = $view->new_display('entity_view', 'business information', 'eva_location_deal');
  $handler->display->display_options['display_description'] = 'display business information on gozulla deals';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'deal',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $translatables['deal_location_data'] = array(
    t('Master'),
    t('deal location data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_address_1-thoroughfare] <br />
[field_address_1-locality], [field_address_1-administrative_area]  [field_address_1-postal_code]
'),
    t('All'),
    t('business information'),
    t('display business information on gozulla deals'),
  );
  $export['deal_location_data'] = $view;

  $view = new view();
  $view->name = 'gozulla_ads';
  $view->description = 'for displaying ads in sidebar';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Focus ads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'community sponsors';
  $handler->display->display_options['css_class'] = 'gozulla-ad';
  $handler->display->display_options['use_more_always'] = FALSE;
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
  $handler->display->display_options['fields']['field_deal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_deal_link']['type'] = 'link_url';
  /* Field: Content: Focus ad image */
  $handler->display->display_options['fields']['field_focusad_image']['id'] = 'field_focusad_image';
  $handler->display->display_options['fields']['field_focusad_image']['table'] = 'field_data_field_focusad_image';
  $handler->display->display_options['fields']['field_focusad_image']['field'] = 'field_focusad_image';
  $handler->display->display_options['fields']['field_focusad_image']['label'] = '';
  $handler->display->display_options['fields']['field_focusad_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_focusad_image']['alter']['path'] = '[field_deal_link]';
  $handler->display->display_options['fields']['field_focusad_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focusad_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_focusad_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    14 => '14',
    15 => '15',
    13 => '13',
    20 => '20',
    18 => '18',
    19 => '19',
    12 => '12',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'focus_sport';
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    1 => '1',
  );

  /* Display: help-boat */
  $handler = $view->new_display('block', 'help-boat', 'help_boat');
  $handler->display->display_options['display_description'] = 'displays boat help ad';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'focus_sport';
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    1 => '1',
  );

  /* Display: help-bike */
  $handler = $view->new_display('block', 'help-bike', 'help_bike');
  $handler->display->display_options['display_description'] = 'displays bike help ad';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'focus_sport';
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    1 => '1',
  );

  /* Display: help-climb */
  $handler = $view->new_display('block', 'help-climb', 'help_climb');
  $handler->display->display_options['display_description'] = 'displays climb help ad';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'focus_sport';
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    1 => '1',
  );

  /* Display: help-golf */
  $handler = $view->new_display('block', 'help-golf', 'help_golf');
  $handler->display->display_options['display_description'] = 'displays golf help ad';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    20 => '20',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'focus_sport';
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    1 => '1',
  );

  /* Display: help-skate */
  $handler = $view->new_display('block', 'help-skate', 'help_skate');
  $handler->display->display_options['display_description'] = 'displays skate help ad';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    18 => '18',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'focus_sport';
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    1 => '1',
  );

  /* Display: help-snow */
  $handler = $view->new_display('block', 'help-snow', 'help_snow');
  $handler->display->display_options['display_description'] = 'displays snow help ad';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'focus_sport';
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    1 => '1',
  );

  /* Display: help-surf */
  $handler = $view->new_display('block', 'help-surf', 'help_surf');
  $handler->display->display_options['display_description'] = 'displays surf help ad';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'focus_sport';
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    1 => '1',
  );

  /* Display: help-deals */
  $handler = $view->new_display('block', 'help-deals', 'all_gozulla_ads');
  $handler->display->display_options['display_description'] = 'shows ads on all deals page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: client ads */
  $handler = $view->new_display('block', 'client ads', 'client_ad');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'client-ad';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'focusad' => 'focusad',
  );
  /* Filter criterion: Content: Focus help ad? (field_gozulla_help_ad) */
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['id'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['table'] = 'field_data_field_gozulla_help_ad';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['field'] = 'field_gozulla_help_ad_value';
  $handler->display->display_options['filters']['field_gozulla_help_ad_value']['value'] = array(
    0 => '0',
  );
  $translatables['gozulla_ads'] = array(
    t('Master'),
    t('community sponsors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
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
    t('help-deals'),
    t('shows ads on all deals page'),
    t('client ads'),
  );
  $export['gozulla_ads'] = $view;

  return $export;
}
