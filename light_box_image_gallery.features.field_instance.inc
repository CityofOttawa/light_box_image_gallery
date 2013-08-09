<?php
/**
 * @file
 * light_box_image_gallery.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function light_box_image_gallery_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-ott_image_gallery-field_closing'
  $field_instances['bean-ott_image_gallery-field_closing'] = array(
    'bundle' => 'ott_image_gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field_closing',
    'label' => 'Closing',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-ott_image_gallery-field_gallery_images'
  $field_instances['bean-ott_image_gallery-field_gallery_images'] = array(
    'bundle' => 'ott_image_gallery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'title',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'field_page',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_node_style' => 'thumbnail',
        ),
        'type' => 'colorbox',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_gallery_images',
    'label' => 'Gallery Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'galleryimages',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'caption_from_title' => 1,
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__apps_featured_screenshot' => 0,
          'colorbox__apps_logo' => 0,
          'colorbox__apps_logo_small' => 0,
          'colorbox__apps_screenshot' => 0,
          'colorbox__large' => 0,
          'colorbox__linkit_thumb' => 0,
          'colorbox__medium' => 0,
          'colorbox__panopoly_image_featured' => 0,
          'colorbox__panopoly_image_full' => 0,
          'colorbox__panopoly_image_half' => 0,
          'colorbox__panopoly_image_quarter' => 0,
          'colorbox__panopoly_image_spotlight' => 0,
          'colorbox__panopoly_image_square' => 0,
          'colorbox__panopoly_image_thumbnail' => 0,
          'colorbox__panopoly_image_video' => 0,
          'colorbox__slider' => 0,
          'colorbox__small_thumbnail' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__stephen_term_image_test' => 0,
          'colorbox__stephen_test_terms' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__wetkit_image_featured' => 0,
          'colorbox__wetkit_image_full' => 0,
          'colorbox__wetkit_image_half' => 0,
          'colorbox__wetkit_image_quarter' => 0,
          'colorbox__wetkit_image_spotlight' => 0,
          'colorbox__wetkit_image_square' => 0,
          'colorbox__wetkit_image_thumbnail' => 0,
          'custom_formatters_wetkit_lightbox' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_apps_featured_screenshot' => 0,
          'image_apps_logo' => 0,
          'image_apps_logo_small' => 0,
          'image_apps_screenshot' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_medium' => 0,
          'image_panopoly_image_featured' => 0,
          'image_panopoly_image_full' => 0,
          'image_panopoly_image_half' => 0,
          'image_panopoly_image_quarter' => 0,
          'image_panopoly_image_spotlight' => 0,
          'image_panopoly_image_square' => 0,
          'image_panopoly_image_thumbnail' => 0,
          'image_panopoly_image_video' => 0,
          'image_slider' => 0,
          'image_small_thumbnail' => 0,
          'image_square_thumbnail' => 0,
          'image_stephen_term_image_test' => 0,
          'image_stephen_test_terms' => 0,
          'image_thumbnail' => 0,
          'image_wetkit_image_featured' => 0,
          'image_wetkit_image_full' => 0,
          'image_wetkit_image_half' => 0,
          'image_wetkit_image_quarter' => 0,
          'image_wetkit_image_spotlight' => 0,
          'image_wetkit_image_square' => 0,
          'image_wetkit_image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'wetkit_image_thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-ott_image_gallery-field_introduction'
  $field_instances['bean-ott_image_gallery-field_introduction'] = array(
    'bundle' => 'ott_image_gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_introduction',
    'label' => 'Introduction',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Closing');
  t('Gallery Images');
  t('Introduction');

  return $field_instances;
}
