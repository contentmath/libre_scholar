<?php
/**
 * @file
 * libre_scholar_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function libre_scholar_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'associated_people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Citation Associated People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Associated People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Islandora Solr: mods_name_personal_displayForm_ms */
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['id'] = 'mods_name_personal_displayForm_ms';
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['field'] = 'mods_name_personal_displayForm_ms';
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['alter']['text'] = '<a href="/islandora/search/[mods_name_personal_displayForm_ms]?type=dismax">[mods_name_personal_displayForm_ms]</a>';
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mods_name_personal_displayForm_ms']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Islandora Solr: mods_name_personal_displayForm_ms */
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['id'] = 'mods_name_personal_displayForm_ms';
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['field'] = 'mods_name_personal_displayForm_ms';
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['default_action'] = 'default';
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['default_argument_options']['argument'] = '*';
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['mods_name_personal_displayForm_ms']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['id'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['value'] = 'info:fedora/ir:citationCModel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['associated_people'] = $view;

  $view = new view();
  $view->name = 'author_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Author Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: mods_titleInfo_title_ms */
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['id'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['field'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['link_to_object'] = 1;
  /* Contextual filter: Islandora Solr: mods_name_personal_author_authority_marcrelator_displayForm_ms */
  $handler->display->display_options['arguments']['mods_name_personal_author_authority_marcrelator_displayForm_ms']['id'] = 'mods_name_personal_author_authority_marcrelator_displayForm_ms';
  $handler->display->display_options['arguments']['mods_name_personal_author_authority_marcrelator_displayForm_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['mods_name_personal_author_authority_marcrelator_displayForm_ms']['field'] = 'mods_name_personal_author_authority_marcrelator_displayForm_ms';
  $handler->display->display_options['arguments']['mods_name_personal_author_authority_marcrelator_displayForm_ms']['default_action'] = 'default';
  $handler->display->display_options['arguments']['mods_name_personal_author_authority_marcrelator_displayForm_ms']['default_argument_type'] = 'libre_scholar_islandora_views_default_current_person';
  $handler->display->display_options['arguments']['mods_name_personal_author_authority_marcrelator_displayForm_ms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['mods_name_personal_author_authority_marcrelator_displayForm_ms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['mods_name_personal_author_authority_marcrelator_displayForm_ms']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['author_publications'] = $view;

  $view = new view();
  $view->name = 'front_page_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="slide-overlay">
<h2><a href="[field_link]">[title]</a></h2>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'slideshow',
    'image_link' => 'none',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_slide' => 'slideshow_slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['front_page_slideshow'] = $view;

  $view = new view();
  $view->name = 'new_contributors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'New Contributors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['id'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['value'] = 'info:fedora/islandora:personCModel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['new_contributors'] = $view;

  $view = new view();
  $view->name = 'object_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_usage_stats_object_access_log';
  $view->human_name = 'Object View Count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Item Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Islandora Usage Stats: Object */
  $handler->display->display_options['relationships']['pid_id']['id'] = 'pid_id';
  $handler->display->display_options['relationships']['pid_id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['relationships']['pid_id']['field'] = 'pid_id';
  /* Field: COUNT(Islandora Usage Stats: PID ID) */
  $handler->display->display_options['fields']['pid_id']['id'] = 'pid_id';
  $handler->display->display_options['fields']['pid_id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['fields']['pid_id']['field'] = 'pid_id';
  $handler->display->display_options['fields']['pid_id']['group_type'] = 'count';
  $handler->display->display_options['fields']['pid_id']['label'] = 'Number of times viewed';
  /* Contextual filter: Islandora Usage Stats: PID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['relationship'] = 'pid_id';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['limit'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['object_stats'] = $view;

  $view = new view();
  $view->name = 'organization_people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Organization People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People in this Organization';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: MADS_fullname_ms */
  $handler->display->display_options['fields']['MADS_fullname_ms']['id'] = 'MADS_fullname_ms';
  $handler->display->display_options['fields']['MADS_fullname_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['MADS_fullname_ms']['field'] = 'MADS_fullname_ms';
  $handler->display->display_options['fields']['MADS_fullname_ms']['label'] = '';
  $handler->display->display_options['fields']['MADS_fullname_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['MADS_fullname_ms']['link_to_object'] = 1;
  /* Contextual filter: Islandora Solr: MADS_organization_ms */
  $handler->display->display_options['arguments']['MADS_organization_ms']['id'] = 'MADS_organization_ms';
  $handler->display->display_options['arguments']['MADS_organization_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['MADS_organization_ms']['field'] = 'MADS_organization_ms';
  $handler->display->display_options['arguments']['MADS_organization_ms']['default_action'] = 'default';
  $handler->display->display_options['arguments']['MADS_organization_ms']['default_argument_type'] = 'libre_scholar_islandora_views_default_current_organization';
  $handler->display->display_options['arguments']['MADS_organization_ms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['MADS_organization_ms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['MADS_organization_ms']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['organization_people'] = $view;

  $view = new view();
  $view->name = 'organization_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Organization Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Affiliated Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: mods_titleInfo_title_ms */
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['id'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['field'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Contextual filter: Islandora Solr: mods_name_personal_affiliation_ms */
  $handler->display->display_options['arguments']['mods_name_personal_affiliation_ms']['id'] = 'mods_name_personal_affiliation_ms';
  $handler->display->display_options['arguments']['mods_name_personal_affiliation_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['mods_name_personal_affiliation_ms']['field'] = 'mods_name_personal_affiliation_ms';
  $handler->display->display_options['arguments']['mods_name_personal_affiliation_ms']['default_action'] = 'default';
  $handler->display->display_options['arguments']['mods_name_personal_affiliation_ms']['default_argument_type'] = 'libre_scholar_islandora_views_default_current_organization';
  $handler->display->display_options['arguments']['mods_name_personal_affiliation_ms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['mods_name_personal_affiliation_ms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['mods_name_personal_affiliation_ms']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['organization_publications'] = $view;

  $view = new view();
  $view->name = 'recent_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Recent Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['id'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['value'] = 'info:fedora/ir:citationCModel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['recent_publications'] = $view;

  return $export;
}
