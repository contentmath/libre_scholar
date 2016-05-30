<?php
/**
 * @file
 * libre_scholar_display.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function libre_scholar_display_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'radix_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bc7670e3-af71-466e-9f32-63a071dd701c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fb28d376-8597-4375-af75-f0a500d31f32';
    $pane->panel = 'contentmain';
    $pane->type = 'views';
    $pane->subtype = 'recent_publications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb28d376-8597-4375-af75-f0a500d31f32';
    $display->content['new-fb28d376-8597-4375-af75-f0a500d31f32'] = $pane;
    $display->panels['contentmain'][0] = 'new-fb28d376-8597-4375-af75-f0a500d31f32';
    $pane = new stdClass();
    $pane->pid = 'new-23f4058d-9148-4f84-9194-adad8f09478e';
    $pane->panel = 'header';
    $pane->type = 'views';
    $pane->subtype = 'front_page_slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23f4058d-9148-4f84-9194-adad8f09478e';
    $display->content['new-23f4058d-9148-4f84-9194-adad8f09478e'] = $pane;
    $display->panels['header'][0] = 'new-23f4058d-9148-4f84-9194-adad8f09478e';
    $pane = new stdClass();
    $pane->pid = 'new-d4b913bc-2966-4ceb-9430-1e897c2b4ee3';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h3>Welcome to the Institutional Repository</h3>
<p>Discover the publications, data, and works of our students, faculty, and staff.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd4b913bc-2966-4ceb-9430-1e897c2b4ee3';
    $display->content['new-d4b913bc-2966-4ceb-9430-1e897c2b4ee3'] = $pane;
    $display->panels['header'][1] = 'new-d4b913bc-2966-4ceb-9430-1e897c2b4ee3';
    $pane = new stdClass();
    $pane->pid = 'new-dd57fb8d-8303-4350-9cda-562dda619cf2';
    $pane->panel = 'sidebar';
    $pane->type = 'views';
    $pane->subtype = 'new_contributors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dd57fb8d-8303-4350-9cda-562dda619cf2';
    $display->content['new-dd57fb8d-8303-4350-9cda-562dda619cf2'] = $pane;
    $display->panels['sidebar'][0] = 'new-dd57fb8d-8303-4350-9cda-562dda619cf2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
