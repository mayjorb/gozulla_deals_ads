<?php
/**
 * @file
 * gozulla_deals_ads.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gozulla_deals_ads_taxonomy_default_vocabularies() {
  return array(
    'ad_groups' => array(
      'name' => 'Ad Groups',
      'machine_name' => 'ad_groups',
      'description' => 'Ad Groups',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
