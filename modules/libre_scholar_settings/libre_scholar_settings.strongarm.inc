<?php
/**
 * @file
 * libre_scholar_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function libre_scholar_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_doi_openurl_pid';
  $strongarm->value = 'doi@contentmath.com';
  $export['islandora_doi_openurl_pid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_populator_enabled_cmodels';
  $strongarm->value = array(
    'ir:citationCModel' => 'ir:citationCModel',
    'ir:thesisCModel' => 'ir:thesisCModel',
    'islandora:bookCModel' => 0,
    'islandora:collectionCModel' => 0,
    'islandora:compoundCModel' => 0,
    'islandora:entityCModel' => 0,
    'islandora:eventCModel' => 0,
    'islandora:newspaperCModel' => 0,
    'islandora:newspaperIssueCModel' => 0,
    'islandora:newspaperPageCModel' => 0,
    'islandora:organizationCModel' => 0,
    'islandora:pageCModel' => 0,
    'islandora:personCModel' => 0,
    'islandora:placeCModel' => 0,
    'islandora:sp-audioCModel' => 0,
    'islandora:sp_basic_image' => 0,
    'islandora:sp_disk_image' => 0,
    'islandora:sp_large_image_cmodel' => 0,
    'islandora:sp_pdf' => 0,
    'islandora:sp_videoCModel' => 0,
    'islandora:sp_web_archive' => 0,
  );
  $export['islandora_populator_enabled_cmodels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_populator_enable_cmodel_limiting';
  $strongarm->value = 1;
  $export['islandora_populator_enable_cmodel_limiting'] = $strongarm;

  return $export;
}
