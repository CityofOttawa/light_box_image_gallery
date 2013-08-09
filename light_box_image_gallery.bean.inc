<?php
/**
 * @file
 * light_box_image_gallery.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function light_box_image_gallery_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'ott_image_gallery';
  $bean_type->label = 'Lightbox Image Gallery';
  $bean_type->options = '';
  $bean_type->description = 'Displays a list of thumbnails. When a thumbnail is clicked on the image is loaded in a lightbox.';
  $export['ott_image_gallery'] = $bean_type;

  return $export;
}
