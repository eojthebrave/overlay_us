<?php
/**
 * @file
 * overlayus_overlays.features.inc
 */

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
