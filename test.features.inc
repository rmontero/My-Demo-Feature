<?php

/**
 * Implementation of hook_menu_default_items().
 */
function test_menu_default_items() {
  module_load_include('inc', 'test', 'test.defaults');
  $args = func_get_args();
  return call_user_func_array('_test_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function test_node_info() {
  module_load_include('inc', 'test', 'test.features.node');
  $args = func_get_args();
  return call_user_func_array('_test_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function test_user_default_permissions() {
  module_load_include('inc', 'test', 'test.defaults');
  $args = func_get_args();
  return call_user_func_array('_test_user_default_permissions', $args);
}
