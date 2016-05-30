<?php

class views_plugin_argument_libre_scholar_islandora_views_default_organization extends views_plugin_argument_default {

  function get_argument() {
    $args = arg();
    if (count($args) == 3 && arg(0) == 'islandora' && arg(1) == 'object') {
      $object = menu_get_object('islandora_object', 2);
      // Label is good enough for now, should be more robust XPath or Solr query.
      if (isset($object->label)) {
        return $object->label;
      }
    }
  }

}