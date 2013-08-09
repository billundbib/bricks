<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function billund_cookie_popup_user_default_permissions() {
  $permissions = array();

  // Exported permission: see EU Cookie Compliance popup
  $permissions['see EU Cookie Compliance popup'] = array(
    'name' => 'see EU Cookie Compliance popup',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
