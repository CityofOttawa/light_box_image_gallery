<?php
/**
 * @file
 * ottawa_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ottawa_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ottawa_gallery_node_info() {
  $items = array(
    'ott_gallery' => array(
      'name' => t('Gallery Article'),
      'base' => 'node_content',
      'description' => t('This content type holds the "Gallery" content type - which allows a Gallery of images to be opened in a modal. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
