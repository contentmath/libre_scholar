<?php
/**
 * @file
 * libre_scholar_display.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function libre_scholar_display_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-browse.
  $menus['menu-browse'] = array(
    'menu_name' => 'menu-browse',
    'title' => 'Browse',
    'description' => 'Islandora Solr search links for browsing the repository.',
  );
  // Exported menu: menu-footer-1.
  $menus['menu-footer-1'] = array(
    'menu_name' => 'menu-footer-1',
    'title' => 'Footer 1',
    'description' => 'Footer menu',
  );
  // Exported menu: menu-libre-scholar-admin-links.
  $menus['menu-libre-scholar-admin-links'] = array(
    'menu_name' => 'menu-libre-scholar-admin-links',
    'title' => 'Libre Scholar Admin Links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse');
  t('Footer 1');
  t('Footer menu');
  t('Islandora Solr search links for browsing the repository.');
  t('Libre Scholar Admin Links');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
