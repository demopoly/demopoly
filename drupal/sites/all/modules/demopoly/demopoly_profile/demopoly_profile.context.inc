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
        'themes/bartik/color/preview.css' => 0,
        'themes/bartik/css/print.css' => 0,
        'themes/bartik/css/maintenance-page.css' => 0,
        'themes/bartik/css/style-rtl.css' => 0,
        'themes/bartik/css/ie.css' => 0,
        'themes/bartik/css/ie6.css' => 0,
        'themes/bartik/css/colors.css' => 0,
        'themes/bartik/css/layout.css' => 0,
        'themes/bartik/css/ie-rtl.css' => 0,
        'themes/bartik/css/style.css' => 0,
        'themes/bartik/css/layout-rtl.css' => 0,
      ),
      'demopoly.org' => array(
        'sites/all/themes/demopoly/css/site/protest.css' => 0,
        'sites/all/themes/demopoly/css/site/profile.css' => 'sites/all/themes/demopoly/css/site/profile.css',
        'sites/all/themes/demopoly/css/site/take-part.css' => 0,
        'sites/all/themes/demopoly/css/site/imagewall.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-full.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-empty.css' => 0,
        'sites/all/themes/demopoly/css/pagelayouts/two-column.css' => 0,
        'sites/all/themes/demopoly/css/global/buttons.css' => 0,
        'sites/all/themes/demopoly/css/global/reset.css' => 0,
        'sites/all/themes/demopoly/css/global/fonts.css' => 0,
        'sites/all/themes/demopoly/css/global/standard-form.css' => 0,
        'sites/all/themes/demopoly/css/global/block-login.css' => 0,
        'sites/all/themes/demopoly/css/buttons.css' => 0,
        'sites/all/themes/demopoly/css/protest-edit-add.css' => 0,
        'sites/all/themes/demopoly/css/page-protest-detail.css' => 0,
        'sites/all/themes/demopoly/css/index.css' => 0,
        'sites/all/themes/demopoly/css/font-types.css' => 0,
        'sites/all/themes/demopoly/css/take-part.css' => 0,
        'sites/all/themes/demopoly/css/information.css' => 0,
        'sites/all/themes/demopoly/css/profiles.css' => 0,
        'sites/all/themes/demopoly/css/style.css' => 0,
      ),
      'Seven' => array(
        'themes/seven/reset.css' => 0,
        'themes/seven/vertical-tabs-rtl.css' => 0,
        'themes/seven/jquery.ui.theme.css' => 0,
        'themes/seven/style-rtl.css' => 0,
        'themes/seven/ie.css' => 0,
        'themes/seven/ie6.css' => 0,
        'themes/seven/ie7.css' => 0,
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'take-part';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/register' => 'user/register',
      ),
    ),
  );
  $context->reactions = array(
    'css' => array(
      'Bartik' => array(
        'themes/bartik/color/preview.css' => 0,
        'themes/bartik/css/print.css' => 0,
        'themes/bartik/css/maintenance-page.css' => 0,
        'themes/bartik/css/style-rtl.css' => 0,
        'themes/bartik/css/ie.css' => 0,
        'themes/bartik/css/ie6.css' => 0,
        'themes/bartik/css/colors.css' => 0,
        'themes/bartik/css/layout.css' => 0,
        'themes/bartik/css/ie-rtl.css' => 0,
        'themes/bartik/css/style.css' => 0,
        'themes/bartik/css/layout-rtl.css' => 0,
      ),
      'demopoly.org' => array(
        'sites/all/themes/demopoly/css/site/protest.css' => 0,
        'sites/all/themes/demopoly/css/site/profile.css' => 0,
        'sites/all/themes/demopoly/css/site/take-part.css' => 'sites/all/themes/demopoly/css/site/take-part.css',
        'sites/all/themes/demopoly/css/site/imagewall.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-full.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-empty.css' => 0,
        'sites/all/themes/demopoly/css/pagelayouts/two-column.css' => 0,
        'sites/all/themes/demopoly/css/global/buttons.css' => 0,
        'sites/all/themes/demopoly/css/global/reset.css' => 0,
        'sites/all/themes/demopoly/css/global/fonts.css' => 0,
        'sites/all/themes/demopoly/css/global/standard-form.css' => 0,
        'sites/all/themes/demopoly/css/global/block-login.css' => 0,
        'sites/all/themes/demopoly/css/buttons.css' => 0,
        'sites/all/themes/demopoly/css/protest-edit-add.css' => 0,
        'sites/all/themes/demopoly/css/page-protest-detail.css' => 0,
        'sites/all/themes/demopoly/css/index.css' => 0,
        'sites/all/themes/demopoly/css/font-types.css' => 0,
        'sites/all/themes/demopoly/css/take-part.css' => 0,
        'sites/all/themes/demopoly/css/information.css' => 0,
        'sites/all/themes/demopoly/css/profiles.css' => 0,
        'sites/all/themes/demopoly/css/style.css' => 0,
      ),
      'Seven' => array(
        'themes/seven/reset.css' => 0,
        'themes/seven/vertical-tabs-rtl.css' => 0,
        'themes/seven/jquery.ui.theme.css' => 0,
        'themes/seven/style-rtl.css' => 0,
        'themes/seven/ie.css' => 0,
        'themes/seven/ie6.css' => 0,
        'themes/seven/ie7.css' => 0,
        'themes/seven/style.css' => 0,
        'themes/seven/vertical-tabs.css' => 0,
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['take-part'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user-settings';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*/edit*' => 'user/*/edit*',
      ),
    ),
  );
  $context->reactions = array(
    'css' => array(
      'Bartik' => array(
        'themes/bartik/color/preview.css' => 0,
        'themes/bartik/css/print.css' => 0,
        'themes/bartik/css/maintenance-page.css' => 0,
        'themes/bartik/css/style-rtl.css' => 0,
        'themes/bartik/css/ie.css' => 0,
        'themes/bartik/css/ie6.css' => 0,
        'themes/bartik/css/colors.css' => 0,
        'themes/bartik/css/layout.css' => 0,
        'themes/bartik/css/ie-rtl.css' => 0,
        'themes/bartik/css/style.css' => 0,
        'themes/bartik/css/layout-rtl.css' => 0,
      ),
      'demopoly.org' => array(
        'sites/all/themes/demopoly/css/site/protest.css' => 0,
        'sites/all/themes/demopoly/css/site/profile.css' => 'sites/all/themes/demopoly/css/site/profile.css',
        'sites/all/themes/demopoly/css/site/take-part.css' => 0,
        'sites/all/themes/demopoly/css/site/delete-form.css' => 0,
        'sites/all/themes/demopoly/css/site/protest-form.css' => 0,
        'sites/all/themes/demopoly/css/site/imagewall.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-full.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-empty.css' => 0,
        'sites/all/themes/demopoly/css/pagelayouts/two-column.css' => 0,
        'sites/all/themes/demopoly/css/plugins/jquery.qtip.css' => 0,
        'sites/all/themes/demopoly/css/plugins/jquery-selectbox.css' => 0,
        'sites/all/themes/demopoly/css/plugins/basic.css' => 0,
        'sites/all/themes/demopoly/css/plugins/enhanced.css' => 0,
        'sites/all/themes/demopoly/css/global/buttons.css' => 0,
        'sites/all/themes/demopoly/css/global/reset.css' => 0,
        'sites/all/themes/demopoly/css/global/fonts.css' => 0,
        'sites/all/themes/demopoly/css/global/standard-form.css' => 0,
        'sites/all/themes/demopoly/css/global/block-login.css' => 0,
        'sites/all/themes/demopoly/css/backup/protest-edit-add.css' => 0,
        'sites/all/themes/demopoly/css/backup/page-protest-detail.css' => 0,
        'sites/all/themes/demopoly/css/backup/index.css' => 0,
        'sites/all/themes/demopoly/css/backup/font-types.css' => 0,
        'sites/all/themes/demopoly/css/backup/take-part.css' => 0,
        'sites/all/themes/demopoly/css/backup/information.css' => 0,
        'sites/all/themes/demopoly/css/backup/profiles.css' => 0,
        'sites/all/themes/demopoly/css/backup/style.css' => 0,
      ),
      'Seven' => array(
        'themes/seven/reset.css' => 0,
        'themes/seven/vertical-tabs-rtl.css' => 0,
        'themes/seven/jquery.ui.theme.css' => 0,
        'themes/seven/style-rtl.css' => 0,
        'themes/seven/ie.css' => 0,
        'themes/seven/ie6.css' => 0,
        'themes/seven/ie7.css' => 0,
        'themes/seven/style.css' => 0,
        'themes/seven/vertical-tabs.css' => 0,
      ),
    ),
    'js' => array(
      'Bartik' => array(
        'themes/bartik/color/preview.js' => 0,
      ),
      'demopoly.org' => array(
        'sites/all/themes/demopoly/js/plugins/infinitescroll/jquery.infinitescroll.js' => 0,
        'sites/all/themes/demopoly/js/plugins/infinitescroll/jquery.infinitescroll.min.js' => 0,
        'sites/all/themes/demopoly/js/plugins/qtip/jquery.qtip-1.0.0-rc3.js' => 0,
        'sites/all/themes/demopoly/js/plugins/qtip/jquery.qtip.js' => 'sites/all/themes/demopoly/js/plugins/qtip/jquery.qtip.js',
        'sites/all/themes/demopoly/js/plugins/selectbox/jquery.selectbox-0.2.js' => 0,
        'sites/all/themes/demopoly/js/plugins/selectbox/jquery.selectbox-0.2.min.js' => 0,
        'sites/all/themes/demopoly/js/plugins/custom-fileinput/jQuery.fileinput.js' => 0,
        'sites/all/themes/demopoly/js/plugins/custom-fileinput/enhance.js' => 0,
        'sites/all/themes/demopoly/js/grid/jquery.min.js' => 0,
        'sites/all/themes/demopoly/js/grid/modernizr-transitions.js' => 0,
        'sites/all/themes/demopoly/js/grid/jquery.masonry.min.js' => 0,
        'sites/all/themes/demopoly/js/grid/box-maker.js' => 0,
        'sites/all/themes/demopoly/js/grid/jquery.masonry.js' => 0,
        'sites/all/themes/demopoly/js/grid/jquery.infinitescroll.min.js' => 0,
        'sites/all/themes/demopoly/js/profile.js' => 0,
        'sites/all/themes/demopoly/js/main.js' => 0,
        'sites/all/themes/demopoly/js/front.js' => 0,
        'sites/all/themes/demopoly/js/active.colorbox.js' => 0,
        'sites/all/themes/demopoly/js/zoomer.js' => 0,
        'sites/all/themes/demopoly/js/hide.location.js' => 'sites/all/themes/demopoly/js/hide.location.js',
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['user-settings'] = $context;

  return $export;
}
