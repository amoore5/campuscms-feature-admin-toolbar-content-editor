<?php
/**
 * @file
 * admin_toolbar_content_editor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function admin_toolbar_content_editor_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_extras_settings_content-editor';
  $strongarm->value = array(
    'menu' => array(
      'mlid_127' => 'left',
      'mlid_128' => 'left',
      'mlid_129' => 'left',
      'mlid_130' => 'left',
      'mlid_340' => 'right',
    ),
    'show_username' => 1,
    'show_username_prefix' => 'Hello, ',
    'show_username_suffix' => '',
    'show_username_link' => 1,
  );
  $export['quickbar_extras_settings_content-editor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_content-editor';
  $strongarm->value = array(
    'iconset' => 'quickbar',
    'sticky' => 0,
    'float' => 0,
    'secondary_menu_visibility' => 0,
    'nofollow' => 0,
  );
  $export['quickbar_settings_content-editor'] = $strongarm;

  return $export;
}
