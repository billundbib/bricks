<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function billund_cookie_popup_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
