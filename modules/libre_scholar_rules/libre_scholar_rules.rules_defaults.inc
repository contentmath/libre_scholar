<?php
/**
 * @file
 * libre_scholar_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function libre_scholar_rules_default_rules_configuration() {
  $items = array();
  $items['rules_inactive_object_ingested_ex_islandora_simple_workflow_'] = entity_import('rules_config', '{ "rules_inactive_object_ingested_ex_islandora_simple_workflow_" : {
      "LABEL" : "Inactive object ingested (ex. Islandora Simple Workflow)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "islandora" ],
      "ON" : { "islandora_object_ingested" : [] },
      "IF" : [ { "data_is" : { "data" : [ "object:state" ], "value" : "I" } } ],
      "DO" : [
        { "drupal_message" : { "message" : "Your submission has been saved and will be reviewed before being made visible in the repository." } },
        { "redirect" : { "url" : "submit" } }
      ]
    }
  }');
  return $items;
}
