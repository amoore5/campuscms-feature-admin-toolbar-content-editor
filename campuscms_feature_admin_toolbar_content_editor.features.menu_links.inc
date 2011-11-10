<?php
/**
 * @file
 * campuscms_feature_admin_toolbar_content_editor.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_admin_toolbar_content_editor_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar-content-editor:<front>
  $menu_links['menu-toolbar-content-editor:<front>'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-toolbar-content-editor:admin/content
  $menu_links['menu-toolbar-content-editor:admin/content'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-toolbar-content-editor:admin/structure/menu
  $menu_links['menu-toolbar-content-editor:admin/structure/menu'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-toolbar-content-editor:admin/structure/menu/manage/main-menu
  $menu_links['menu-toolbar-content-editor:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-content-editor:admin/structure/menu/manage/menu-center-footer
  $menu_links['menu-toolbar-content-editor:admin/structure/menu/manage/menu-center-footer'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'admin/structure/menu/manage/menu-center-footer',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Center Footer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-content-editor:admin/structure/menu/manage/menu-right-footer
  $menu_links['menu-toolbar-content-editor:admin/structure/menu/manage/menu-right-footer'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'admin/structure/menu/manage/menu-right-footer',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Right Footer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-content-editor:caslogout
  $menu_links['menu-toolbar-content-editor:caslogout'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'caslogout',
    'router_path' => 'caslogout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-toolbar-content-editor:node/add
  $menu_links['menu-toolbar-content-editor:node/add'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Content');
  t('Center Footer');
  t('Home');
  t('Logout');
  t('Main menu');
  t('Manage Content');
  t('Menus');
  t('Right Footer');


  return $menu_links;
}
