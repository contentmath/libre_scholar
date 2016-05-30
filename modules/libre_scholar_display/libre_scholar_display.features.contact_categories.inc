<?php
/**
 * @file
 * libre_scholar_display.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function libre_scholar_display_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'admin@example.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
