<?php
/**
 * @file
 * libre_scholar_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function libre_scholar_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function libre_scholar_display_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function libre_scholar_display_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'label' => 'Slideshow',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function libre_scholar_display_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
      'link_to_object' => TRUE,
      'link_to_search' => FALSE,
    ),
  ),
  1 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_ms',
    'field_type' => 'facet_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'pid_object_label' => 1,
      'permissions' => FALSE,
    ),
  ),
  2 => array(
    'solr_field' => 'mods_originInfo_dateIssued_mdt',
    'field_type' => 'facet_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Date Issued',
      'range_facet_select' => 1,
      'range_facet_variable_gap' => 1,
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_enabled' => 1,
      'range_facet_slider_color' => '#3b6000',
      'date_filter_datepicker_range' => '-100:+3',
      'date_filter_datepicker_enabled' => NULL,
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'mods_name_personal_author_displayForm_ms',
    'field_type' => 'result_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Author',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  4 => array(
    'solr_field' => 'mods_originInfo_dateIssued_ms',
    'field_type' => 'result_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  5 => array(
    'solr_field' => 'mods_name_personal_author_displayForm_ms',
    'field_type' => 'facet_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Author',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'mods_genre_ms',
    'field_type' => 'result_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Type',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  7 => array(
    'solr_field' => 'mods_name_personal_author_affiliation_ms',
    'field_type' => 'facet_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Organization',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_genre_ms',
    'field_type' => 'facet_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Type',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'mods_name_personal_author_affiliation_ms',
    'field_type' => 'result_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Org',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  10 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'facet_fields',
    'weight' => -5,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  11 => array(
    'solr_field' => 'mods_relatedItem_host_titleInfo_title_ms',
    'field_type' => 'facet_fields',
    'weight' => -4,
    'solr_field_settings' => array(
      'label' => 'Host Publication',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'mods_originInfo_publisher_ms',
    'field_type' => 'facet_fields',
    'weight' => -3,
    'solr_field_settings' => array(
      'label' => 'Publisher',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  13 => array(
    'solr_field' => 'fedora_datastream_latest_PDF_LABEL_ms',
    'field_type' => 'facet_fields',
    'weight' => -2,
    'solr_field_settings' => array(
      'label' => 'Has PDF',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'mods_physicalDescription_authority_local_ms',
    'field_type' => 'facet_fields',
    'weight' => -1,
    'solr_field_settings' => array(
      'label' => 'Document Version',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  15 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'search_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  16 => array(
    'solr_field' => 'mods_abstract_mt',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Abstract',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  17 => array(
    'solr_field' => 'mods_name_personal_author_displayForm_mt',
    'field_type' => 'search_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Author',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  18 => array(
    'solr_field' => 'mods_name_personal_author_affiliation_mt',
    'field_type' => 'search_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Affiliation',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  19 => array(
    'solr_field' => 'MADS_organization_ms',
    'field_type' => 'result_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Affiliation',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
);
}

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function libre_scholar_display_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'scholar' => array(
    'fields' => array(
      'MADS_title_ms' => array(
        'solr_field' => 'MADS_title_ms',
        'data' => 'a:3:{s:12:"remove_field";i:0;s:13:"display_label";s:4:"Name";s:9:"hyperlink";i:0;}',
        'weight' => 1,
        'remove_field' => 0,
        'display_label' => 'Name',
        'hyperlink' => 0,
      ),
      'MADS_email_ms' => array(
        'solr_field' => 'MADS_email_ms',
        'data' => 'a:3:{s:12:"remove_field";i:0;s:13:"display_label";s:5:"Email";s:9:"hyperlink";i:0;}',
        'weight' => 2,
        'remove_field' => 0,
        'display_label' => 'Email',
        'hyperlink' => 0,
      ),
      'MADS_position_ms' => array(
        'solr_field' => 'MADS_position_ms',
        'data' => 'a:3:{s:12:"remove_field";i:0;s:13:"display_label";s:8:"Position";s:9:"hyperlink";i:0;}',
        'weight' => 3,
        'remove_field' => 0,
        'display_label' => 'Position',
        'hyperlink' => 0,
      ),
      'MADS_organization_ms' => array(
        'solr_field' => 'MADS_organization_ms',
        'data' => 'a:4:{s:13:"display_label";s:3:"Org";s:9:"hyperlink";i:0;s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";i:0;s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";i:1;}s:12:"remove_field";i:0;}',
        'weight' => 4,
        'display_label' => 'Org',
        'hyperlink' => 0,
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'remove_field' => 0,
      ),
      'MADS_phone_ms' => array(
        'solr_field' => 'MADS_phone_ms',
        'data' => 'a:3:{s:12:"remove_field";i:0;s:13:"display_label";s:5:"Phone";s:9:"hyperlink";i:0;}',
        'weight' => 5,
        'remove_field' => 0,
        'display_label' => 'Phone',
        'hyperlink' => 0,
      ),
      'MADS_address_ms' => array(
        'solr_field' => 'MADS_address_ms',
        'data' => 'a:3:{s:12:"remove_field";i:0;s:13:"display_label";s:8:"Building";s:9:"hyperlink";i:0;}',
        'weight' => 6,
        'remove_field' => 0,
        'display_label' => 'Building',
        'hyperlink' => 0,
      ),
      'MADS_url_ms' => array(
        'solr_field' => 'MADS_url_ms',
        'data' => 'a:3:{s:12:"remove_field";i:0;s:13:"display_label";s:3:"URL";s:9:"hyperlink";i:1;}',
        'weight' => 7,
        'remove_field' => 0,
        'display_label' => 'URL',
        'hyperlink' => 1,
      ),
    ),
    'cmodels' => array(
      'islandora:personCModel' => array(
        'cmodel' => 'islandora:personCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
      'description_data' => NULL,
    ),
    'name' => 'Scholar',
  ),
);
}

/**
 * Implements hook_node_info().
 */
function libre_scholar_display_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slideshow_slide' => array(
      'name' => t('Slideshow Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
