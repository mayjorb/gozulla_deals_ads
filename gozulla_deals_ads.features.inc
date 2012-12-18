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
    'deal' => array(
      'name' => t('Focus deal'),
      'base' => 'node_content',
      'description' => t('Use for adding shop "deals"'),
      'has_title' => '1',
      'title_label' => t('Name of deal'),
      'help' => '',
    ),
    'focusad' => array(
      'name' => t('Focus ad'),
      'base' => 'node_content',
      'description' => t('Use for adding ads'),
      'has_title' => '1',
      'title_label' => t('Ad title'),
      'help' => '',
    ),
    'simpleads' => array(
      'name' => t('Simple Ad'),
      'base' => 'node_content',
      'description' => t('Advertisement'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simpleads_campaign' => array(
      'name' => t('Simple Ad Campaign'),
      'base' => 'node_content',
      'description' => t('Advertisement Campaign'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
