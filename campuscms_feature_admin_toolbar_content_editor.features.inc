<?php
/**
 * @file
 * campuscms_feature_admin_toolbar_content_editor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campuscms_feature_admin_toolbar_content_editor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
