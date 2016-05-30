<?php
/**
 * @file
 * libre_scholar_display.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function libre_scholar_display_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-organization_people-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'organization_people-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'scholarly_lite' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'scholarly_lite',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-organization_publications-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'organization_publications-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'scholarly_lite' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'scholarly_lite',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
