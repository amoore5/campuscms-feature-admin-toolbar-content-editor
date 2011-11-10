<?php
/**
 * @file
 * campuscms_feature_admin_toolbar_content_editor.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function campuscms_feature_admin_toolbar_content_editor_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-toolbar-content-editor
  $menus['menu-toolbar-content-editor'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'title' => 'Toolbar - Content Editor',
    'description' => 'This is the administration toolbar for content editors.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('This is the administration toolbar for content editors.');
  t('Toolbar - Content Editor');


  return $menus;
}
