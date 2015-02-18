<?php
/**
 * @file
 * bdw2pointoh_homepage_etc.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bdw2pointoh_homepage_etc_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.',
  );
  // Exported menu: secondary-menu.
  $menus['secondary-menu'] = array(
    'menu_name' => 'secondary-menu',
    'title' => 'Secondary menu',
    'description' => 'Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Navigation');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links');
  t('Secondary menu');
  t('The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.');


  return $menus;
}
