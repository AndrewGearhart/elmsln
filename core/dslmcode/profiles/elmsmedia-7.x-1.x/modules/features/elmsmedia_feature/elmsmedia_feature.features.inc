<?php
/**
 * @file
 * elmsmedia_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function elmsmedia_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function elmsmedia_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function elmsmedia_feature_image_default_styles() {
  $styles = array();

  // Exported image style: image.
  $styles['image'] = array(
    'label' => 'Image',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_lightboxed.
  $styles['image_lightboxed'] = array(
    'label' => 'Image Lightboxed',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 2,
      ),
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 675,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: mediavideo_poster.
  $styles['mediavideo_poster'] = array(
    'label' => 'Mediavideo Poster',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 675,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
