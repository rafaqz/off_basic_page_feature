<?php
/**
 * @file
 * basic_page_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function basic_page_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function basic_page_feature_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
