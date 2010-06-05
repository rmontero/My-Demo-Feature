<?php

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _test_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Projects',
    'path' => 'fserver',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Projects'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _test_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer features
  $permissions[] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  return $permissions;
}
