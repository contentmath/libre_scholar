<?php
/**
 * @file
 * libre_scholar_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function libre_scholar_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header';
  $fe_block_boxes->body = '<div style="float:right;"><a href="/user">Account</a></div>
';

  $export['header'] = $fe_block_boxes;

  return $export;
}
