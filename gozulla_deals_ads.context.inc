<?php
/**
 * @file
 * gozulla_deals_ads.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gozulla_deals_ads_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'directory_pages';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gozulla_location' => 'gozulla_location',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-active_deals-block' => array(
          'module' => 'views',
          'delta' => 'active_deals-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => '<front>',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['directory_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-active_deals-global_deal_block' => array(
          'module' => 'views',
          'delta' => 'active_deals-global_deal_block',
          'region' => 'content_aside',
          'weight' => '-10',
        ),
        'views-gozulla_directory-block_1' => array(
          'module' => 'views',
          'delta' => 'gozulla_directory-block_1',
          'region' => 'content_aside',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['homepage'] = $context;

  return $export;
}
