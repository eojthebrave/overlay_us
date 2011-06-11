<?php
/**
 * @file
 * overlayus_overlays.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function overlayus_overlays_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function overlayus_overlays_node_info() {
  $items = array(
    'overlay' => array(
      'name' => t('Overlay'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
