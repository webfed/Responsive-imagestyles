<?php
/**
 * @file
 * responsive_imagestyles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function responsive_imagestyles_image_default_styles() {
  $styles = array();

  // Exported image style: 3col_narrow.
  $styles['3col_narrow'] = array(
    'name' => '3col_narrow',
    'effects' => array(
      4 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '160',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 3col_normal.
  $styles['3col_normal'] = array(
    'name' => '3col_normal',
    'effects' => array(
      3 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '220',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 3col_smartport.
  $styles['3col_smartport'] = array(
    'name' => '3col_smartport',
    'effects' => array(
      5 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '480',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 3col_wide.
  $styles['3col_wide'] = array(
    'name' => '3col_wide',
    'effects' => array(
      2 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '280',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 6col_narrow.
  $styles['6col_narrow'] = array(
    'name' => '6col_narrow',
    'effects' => array(
      7 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '340',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 6col_normal.
  $styles['6col_normal'] = array(
    'name' => '6col_normal',
    'effects' => array(
      8 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '460',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 6col_smartport.
  $styles['6col_smartport'] = array(
    'name' => '6col_smartport',
    'effects' => array(
      6 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '480',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 6col_wide.
  $styles['6col_wide'] = array(
    'name' => '6col_wide',
    'effects' => array(
      9 => array(
        'label' => 'Schalen',
        'help' => 'Door te schalen worden de originele verhoudingen behouden. Als één van de dimensies wordt ingevuld zal de andere worden berekend.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '580',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
