<?php
/**
 * @file
 * ol_features.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ol_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ol_features_node_info() {
  $items = array(
    'article' => array(
      'name' => t('article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
