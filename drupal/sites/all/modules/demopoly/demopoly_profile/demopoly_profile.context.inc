<?php
/**
 * @file
 * demopoly_profile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function demopoly_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile-css';
  $context->description = '';
  $context->tag = 'profile';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'protest/*/edit' => 'protest/*/edit',
        'protest/add' => 'protest/add',
      ),
    ),
  );
  $context->reactions = array(
    'css' => array(
      'Bartik' => array(
        'themes/bartik/css/style-rtl.css' => 0,
        'themes/bartik/css/ie.css' => 0,
        'themes/bartik/css/maintenance-page.css' => 0,
        'themes/bartik/css/ie6.css' => 0,
        'themes/bartik/css/layout.css' => 0,
        'themes/bartik/css/layout-rtl.css' => 0,
        'themes/bartik/css/colors.css' => 0,
        'themes/bartik/css/print.css' => 0,
        'themes/bartik/css/ie-rtl.css' => 0,
        'themes/bartik/css/style.css' => 0,
        'themes/bartik/color/preview.css' => 0,
      ),
      'demopoly.org' => array(
        'sites/all/themes/demopoly/css/pagelayouts/two-column.css' => 0,
        'sites/all/themes/demopoly/css/take-part.css' => 0,
        'sites/all/themes/demopoly/css/font-types.css' => 0,
        'sites/all/themes/demopoly/css/protest-edit-add.css' => 'sites/all/themes/demopoly/css/protest-edit-add.css',
        'sites/all/themes/demopoly/css/buttons.css' => 0,
        'sites/all/themes/demopoly/css/index.css' => 0,
        'sites/all/themes/demopoly/css/information.css' => 0,
        'sites/all/themes/demopoly/css/profiles.css' => 0,
        'sites/all/themes/demopoly/css/masonry.css' => 0,
        'sites/all/themes/demopoly/css/style.css' => 0,
      ),
      'Seven' => array(
        'themes/seven/reset.css' => 0,
        'themes/seven/style-rtl.css' => 0,
        'themes/seven/ie.css' => 0,
        'themes/seven/jquery.ui.theme.css' => 0,
        'themes/seven/vertical-tabs-rtl.css' => 0,
        'themes/seven/ie7.css' => 0,
        'themes/seven/ie6.css' => 0,
        'themes/seven/style.css' => 0,
        'themes/seven/vertical-tabs.css' => 0,
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('profile');
  $export['profile-css'] = $context;

  return $export;
}
