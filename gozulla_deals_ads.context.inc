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
    'views' => array(
      'values' => array(
        'gozulla_directory:deals' => 'gozulla_directory:deals',
        'gozulla_directory:page_1' => 'gozulla_directory:page_1',
        'gozulla_directory:page_2' => 'gozulla_directory:page_2',
        'gozulla_directory:page_3' => 'gozulla_directory:page_3',
        'gozulla_directory:page_4' => 'gozulla_directory:page_4',
        'gozulla_directory:page_5' => 'gozulla_directory:page_5',
        'gozulla_directory:page_6' => 'gozulla_directory:page_6',
        'gozulla_directory:page_7' => 'gozulla_directory:page_7',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-sport-links' => array(
          'module' => 'menu',
          'delta' => 'menu-sport-links',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'two_50_first',
          'weight' => '-10',
        ),
        'gozulla_directory-skate' => array(
          'module' => 'gozulla_directory',
          'delta' => 'skate',
          'region' => 'two_50_first',
          'weight' => '-9',
        ),
        'gozulla_directory-surf' => array(
          'module' => 'gozulla_directory',
          'delta' => 'surf',
          'region' => 'two_50_first',
          'weight' => '-8',
        ),
        'gozulla_directory-bike' => array(
          'module' => 'gozulla_directory',
          'delta' => 'bike',
          'region' => 'two_50_first',
          'weight' => '-7',
        ),
        'gozulla_directory-snow' => array(
          'module' => 'gozulla_directory',
          'delta' => 'snow',
          'region' => 'two_50_first',
          'weight' => '-6',
        ),
        'gozulla_directory-golf' => array(
          'module' => 'gozulla_directory',
          'delta' => 'golf',
          'region' => 'two_50_first',
          'weight' => '-5',
        ),
        'gozulla_directory-climb' => array(
          'module' => 'gozulla_directory',
          'delta' => 'climb',
          'region' => 'two_50_first',
          'weight' => '-4',
        ),
        'gozulla_directory-boat' => array(
          'module' => 'gozulla_directory',
          'delta' => 'boat',
          'region' => 'two_50_first',
          'weight' => '-3',
        ),
        'views-active_deals-block_1' => array(
          'module' => 'views',
          'delta' => 'active_deals-block_1',
          'region' => 'two_50_second',
          'weight' => '10',
        ),
      ),
    ),
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
        'views-feed_display-block_1' => array(
          'module' => 'views',
          'delta' => 'feed_display-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-active_deals-global_deal_block' => array(
          'module' => 'views',
          'delta' => 'active_deals-global_deal_block',
          'region' => 'two_50_first',
          'weight' => '30',
        ),
        'views-gozulla_directory-featured_shop' => array(
          'module' => 'views',
          'delta' => 'gozulla_directory-featured_shop',
          'region' => 'two_50_second',
          'weight' => '30',
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
