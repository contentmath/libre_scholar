<?php
/**
 * @file
 * libre_scholar_display.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function libre_scholar_display_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_browse-all:islandora/search/.
  $menu_links['main-menu_browse-all:islandora/search/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora/search/',
    'router_path' => 'islandora/search',
    'link_title' => 'Browse All',
    'options' => array(
      'query' => array(
        'type' => 'dismax',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_browse-all:islandora/search/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_articles--publications:islandora/search.
  $menu_links['menu-browse_articles--publications:islandora/search'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'islandora/search',
    'router_path' => 'islandora/search',
    'link_title' => 'Articles & Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'type' => 'dismax',
        'islandora_solr_search_navigation' => 0,
        'f[0]' => 'RELS_EXT_isMemberOfCollection_uri_ms:"info\\:fedora\\/librescholar\\:citations"',
      ),
      'identifier' => 'menu-browse_articles--publications:islandora/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_organizations:islandora/search.
  $menu_links['menu-browse_organizations:islandora/search'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'islandora/search',
    'router_path' => 'islandora/search',
    'link_title' => 'Organizations',
    'options' => array(
      'query' => array(
        'type' => 'dismax',
        'islandora_solr_search_navigation' => 0,
        'f[0]' => 'RELS_EXT_isMemberOfCollection_uri_ms:"info\\:fedora\\/librescholar\\:organizations"',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_organizations:islandora/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_people:islandora/search.
  $menu_links['menu-browse_people:islandora/search'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'islandora/search',
    'router_path' => 'islandora/search',
    'link_title' => 'People',
    'options' => array(
      'query' => array(
        'type' => 'dismax',
        'islandora_solr_search_navigation' => 0,
        'f[0]' => 'RELS_EXT_isMemberOfCollection_uri_ms:"info\\:fedora\\/librescholar\\:people"',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_people:islandora/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-browse_theses:islandora/search.
  $menu_links['menu-browse_theses:islandora/search'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'islandora/search',
    'router_path' => 'islandora/search',
    'link_title' => 'Theses',
    'options' => array(
      'query' => array(
        'type' => 'dismax',
        'islandora_solr_search_navigation' => '',
        'f[0]' => 'RELS_EXT_isMemberOfCollection_uri_ms:"info\\:fedora\\/librescholar\\:theses"',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse_theses:islandora/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-1_built-with-islandora--libre-scholar:http://www.contentmath.com/libre-scholar.
  $menu_links['menu-footer-1_built-with-islandora--libre-scholar:http://www.contentmath.com/libre-scholar'] = array(
    'menu_name' => 'menu-footer-1',
    'link_path' => 'http://www.contentmath.com/libre-scholar',
    'router_path' => '',
    'link_title' => 'Built with Islandora & Libre Scholar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-1_built-with-islandora--libre-scholar:http://www.contentmath.com/libre-scholar',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-1_contact:contact.
  $menu_links['menu-footer-1_contact:contact'] = array(
    'menu_name' => 'menu-footer-1',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-1_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-libre-scholar-admin-links_inactive-objects-anonymous-submissions-etc:admin/islandora/tools/simple_workflow/list.
  $menu_links['menu-libre-scholar-admin-links_inactive-objects-anonymous-submissions-etc:admin/islandora/tools/simple_workflow/list'] = array(
    'menu_name' => 'menu-libre-scholar-admin-links',
    'link_path' => 'admin/islandora/tools/simple_workflow/list',
    'router_path' => 'admin/islandora/tools',
    'link_title' => 'Inactive Objects (anonymous submissions, etc)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-libre-scholar-admin-links_inactive-objects-anonymous-submissions-etc:admin/islandora/tools/simple_workflow/list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-libre-scholar-admin-links_manage-user-permissions:admin/people/permissions.
  $menu_links['menu-libre-scholar-admin-links_manage-user-permissions:admin/people/permissions'] = array(
    'menu_name' => 'menu-libre-scholar-admin-links',
    'link_path' => 'admin/people/permissions',
    'router_path' => 'admin/people/permissions',
    'link_title' => 'Manage User Permissions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-libre-scholar-admin-links_manage-user-permissions:admin/people/permissions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-libre-scholar-admin-links_metadata-display-settings:admin/islandora/search/islandora_solr/metadata.
  $menu_links['menu-libre-scholar-admin-links_metadata-display-settings:admin/islandora/search/islandora_solr/metadata'] = array(
    'menu_name' => 'menu-libre-scholar-admin-links',
    'link_path' => 'admin/islandora/search/islandora_solr/metadata',
    'router_path' => 'admin/islandora/search/islandora_solr/metadata',
    'link_title' => 'Metadata Display Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-libre-scholar-admin-links_metadata-display-settings:admin/islandora/search/islandora_solr/metadata',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-libre-scholar-admin-links_root-collection:islandora/object/islandora:root.
  $menu_links['menu-libre-scholar-admin-links_root-collection:islandora/object/islandora:root'] = array(
    'menu_name' => 'menu-libre-scholar-admin-links',
    'link_path' => 'islandora/object/islandora:root',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Root Collection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-libre-scholar-admin-links_root-collection:islandora/object/islandora:root',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-libre-scholar-admin-links_solr-search-settings:admin/islandora/search/islandora_solr/settings.
  $menu_links['menu-libre-scholar-admin-links_solr-search-settings:admin/islandora/search/islandora_solr/settings'] = array(
    'menu_name' => 'menu-libre-scholar-admin-links',
    'link_path' => 'admin/islandora/search/islandora_solr/settings',
    'router_path' => 'admin/islandora/search/islandora_solr/settings',
    'link_title' => 'Solr Search Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-libre-scholar-admin-links_solr-search-settings:admin/islandora/search/islandora_solr/settings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-libre-scholar-admin-links_theme-settings:admin/appearance/settings/scholarly_lite.
  $menu_links['menu-libre-scholar-admin-links_theme-settings:admin/appearance/settings/scholarly_lite'] = array(
    'menu_name' => 'menu-libre-scholar-admin-links',
    'link_path' => 'admin/appearance/settings/scholarly_lite',
    'router_path' => 'admin/appearance/settings/scholarly_lite',
    'link_title' => 'Theme Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-libre-scholar-admin-links_theme-settings:admin/appearance/settings/scholarly_lite',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Articles & Publications');
  t('Browse All');
  t('Built with Islandora & Libre Scholar');
  t('Contact');
  t('Inactive Objects (anonymous submissions, etc)');
  t('Manage User Permissions');
  t('Metadata Display Settings');
  t('Organizations');
  t('People');
  t('Root Collection');
  t('Solr Search Settings');
  t('Theme Settings');
  t('Theses');

  return $menu_links;
}
