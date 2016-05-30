<?php
/**
 * @file
 * libre_scholar_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function libre_scholar_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_additional_html';
  $strongarm->value = '<a class="a2a_button_facebook"></a>
<a class="a2a_button_twitter"></a>
<a class="a2a_button_google_plus"></a>';
  $export['addtoany_additional_html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_additional_html_placement';
  $strongarm->value = 'before';
  $export['addtoany_additional_html_placement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_in_nodecont';
  $strongarm->value = 0;
  $export['addtoany_display_in_nodecont'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_in_nodelink';
  $strongarm->value = 0;
  $export['addtoany_display_in_nodelink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_in_rss';
  $strongarm->value = 0;
  $export['addtoany_display_in_rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_display_in_teasers';
  $strongarm->value = 0;
  $export['addtoany_display_in_teasers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_image';
  $strongarm->value = 'a2a_svg_32';
  $export['addtoany_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addtoany_nodetypes';
  $strongarm->value = array(
    'article' => 0,
    'page' => 0,
    'book' => 0,
    'slideshow_slide' => 0,
  );
  $export['addtoany_nodetypes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'book_block_mode';
  $strongarm->value = 'book pages';
  $export['book_block_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'book_child_type';
  $strongarm->value = 'book';
  $export['book_child_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '0';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__slideshow_slide';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_convert';
  $strongarm->value = 'convert';
  $export['imagemagick_convert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_gm';
  $strongarm->value = 0;
  $export['imagemagick_gm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_quality';
  $strongarm->value = '75';
  $export['imagemagick_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'imagemagick';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_audio_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_videojs' => 'islandora_videojs',
    ),
    'default' => 'islandora_videojs',
  );
  $export['islandora_audio_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_basic_collection_admin_page_size';
  $strongarm->value = 25;
  $export['islandora_basic_collection_admin_page_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_book_page_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  );
  $export['islandora_book_page_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_book_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_internet_archive_bookreader' => 'islandora_internet_archive_bookreader',
    ),
    'default' => 'islandora_internet_archive_bookreader',
  );
  $export['islandora_book_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_entities_disambiguated_solr_field';
  $strongarm->value = 'MADS_fullname_mt';
  $export['islandora_entities_disambiguated_solr_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_fits_executable_path';
  $strongarm->value = '/usr/local/fits';
  $export['islandora_fits_executable_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_large_image_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  );
  $export['islandora_large_image_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_metadata_display';
  $strongarm->value = 'islandora_solr_metadata';
  $export['islandora_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_newspaper_issue_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_internet_archive_bookreader' => 'islandora_internet_archive_bookreader',
    ),
    'default' => 'islandora_internet_archive_bookreader',
  );
  $export['islandora_newspaper_issue_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_newspaper_page_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  );
  $export['islandora_newspaper_page_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_pdf_allow_text_upload';
  $strongarm->value = 1;
  $export['islandora_pdf_allow_text_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_pdf_create_fulltext';
  $strongarm->value = 1;
  $export['islandora_pdf_create_fulltext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_repository_pid';
  $strongarm->value = 'librescholar:root';
  $export['islandora_repository_pid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_scholar_romeo_enable';
  $strongarm->value = 1;
  $export['islandora_scholar_romeo_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_human_friendly_query_block';
  $strongarm->value = 1;
  $export['islandora_solr_human_friendly_query_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_limit_result_fields';
  $strongarm->value = 1;
  $export['islandora_solr_limit_result_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_metadata_omit_empty_values';
  $strongarm->value = 1;
  $export['islandora_solr_metadata_omit_empty_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_secondary_display';
  $strongarm->value = array(
    'csv' => 'csv',
    'rss' => 'rss',
  );
  $export['islandora_solr_secondary_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_video_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_videojs' => 'islandora_videojs',
    ),
    'default' => 'islandora_videojs',
  );
  $export['islandora_video_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_unified_login';
  $strongarm->value = 1;
  $export['logintoboggan_unified_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_book';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_slideshow_slide';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_book';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_slideshow_slide';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_assets_path';
  $strongarm->value = 'profiles/libre_scholar/files';
  $export['node_export_file_assets_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_mode';
  $strongarm->value = 'inline';
  $export['node_export_file_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_types';
  $strongarm->value = array(
    'slideshow_slide' => 'slideshow_slide',
    'article' => 0,
    'page' => 0,
    'book' => 0,
  );
  $export['node_export_file_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_slideshow_slide';
  $strongarm->value = 0;
  $export['node_export_reset_author_slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_book';
  $strongarm->value = 0;
  $export['node_export_reset_menu_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_page';
  $strongarm->value = 0;
  $export['node_export_reset_menu_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_book';
  $strongarm->value = 0;
  $export['node_export_reset_path_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_page';
  $strongarm->value = 0;
  $export['node_export_reset_path_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slideshow_slide';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_book';
  $strongarm->value = '1';
  $export['node_preview_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_slideshow_slide';
  $strongarm->value = '1';
  $export['node_preview_slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_book';
  $strongarm->value = 0;
  $export['node_submitted_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_slideshow_slide';
  $strongarm->value = 0;
  $export['node_submitted_slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_page";s:23:"allowed_layout_settings";a:40:{s:8:"flexible";b:0;s:6:"twocol";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:6:"onecol";b:0;s:13:"twocol_bricks";b:0;s:14:"twocol_stacked";b:0;s:21:"radix_hewston_flipped";b:1;s:12:"radix_whelan";b:1;s:11:"radix_brown";b:1;s:20:"radix_taylor_flipped";b:1;s:13:"radix_brenham";b:1;s:12:"radix_taylor";b:1;s:11:"radix_rolph";b:1;s:15:"radix_sanderson";b:1;s:12:"radix_phelan";b:1;s:21:"radix_moscone_flipped";b:1;s:21:"radix_brenham_flipped";b:1;s:13:"radix_moscone";b:1;s:20:"radix_bryant_flipped";b:1;s:18:"radix_sutro_double";b:1;s:11:"radix_selby";b:1;s:22:"radix_bartlett_flipped";b:1;s:11:"radix_geary";b:1;s:23:"radix_sanderson_flipped";b:1;s:18:"radix_burr_flipped";b:1;s:12:"radix_harris";b:1;s:14:"radix_bartlett";b:1;s:14:"radix_mccoppin";b:1;s:10:"radix_burr";b:1;s:12:"radix_bryant";b:1;s:11:"radix_sutro";b:1;s:18:"radix_webb_flipped";b:1;s:13:"radix_hewston";b:1;s:19:"radix_selby_flipped";b:1;s:10:"radix_webb";b:1;s:12:"radix_boxton";b:1;s:10:"radix_pond";b:1;}s:10:"form_state";N;}';
  $export['panels_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'toboggan/denied';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'scholarly_lite';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_scholarly_lite_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'breadcrumb_display' => 1,
    'fixed_header' => 1,
    'scrolltop_display' => 1,
    'frontpage_content_print' => 1,
    'bootstrap_css_cdn' => '3.2.0',
    'bootstrap_js_cdn' => '3.2.0',
    'bootstrap_fa_cdn' => '4.2.0',
    'three_columns_grid_layout' => 'grid_3_6_3',
    'color_scheme' => 'gray-green',
    'sitename_font_family' => 'sff-7',
    'slogan_font_family' => 'slff-7',
    'headings_font_family' => 'hff-7',
    'paragraph_font_family' => 'pff-7',
    'responsive_multilevelmenu_state' => 1,
    'credits_display' => 0,
    'tabs__active_tab' => 'edit-basic-settings',
  );
  $export['theme_scholarly_lite_settings'] = $strongarm;

  return $export;
}
