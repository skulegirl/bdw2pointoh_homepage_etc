<?php
/**
 * @file
 * bdw2pointoh_homepage_etc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bdw2pointoh_homepage_etc_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bdw2pointoh_homepage_etc_node_info() {
  $items = array(
    'news_and_reminders' => array(
      'name' => t('News and Reminders'),
      'base' => 'node_content',
      'description' => t('Any news or reminders for members to see.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function bdw2pointoh_homepage_etc_views_api() {
  return array(
    'api' => '3.0',
  );
}
