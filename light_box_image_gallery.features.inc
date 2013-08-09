<?php
/**
 * @file
 * light_box_image_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function light_box_image_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
