<?php
/**
 * @file
 * gozulla_deals_ads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gozulla_deals_ads_ctools_plugin_api() {
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
function gozulla_deals_ads_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gozulla_deals_ads_node_info() {
  $items = array(
    'gozulla_deals' => array(
      'name' => t('gozulla deals'),
      'base' => 'node_content',
      'description' => t('Use for adding "deals" for a shop'),
      'has_title' => '1',
      'title_label' => t('Name of deal'),
      'help' => '',
    ),
  );
  return $items;
}
