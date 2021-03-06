<?php
/**
 * @file
 * commons_application.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_application_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function commons_application_node_info() {
  $items = array(
    'commons_application' => array(
      'name' => t('Commons Application'),
      'base' => 'node_content',
      'description' => t('Cohort application'),
      'has_title' => '1',
      'title_label' => t('Your Full Name'),
      'help' => '',
    ),
  );
  return $items;
}
