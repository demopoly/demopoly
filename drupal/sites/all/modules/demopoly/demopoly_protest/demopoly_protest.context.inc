<?php
/**
 * @file
 * demopoly_protest.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function demopoly_protest_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = '';
  $context->tag = 'javascript';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'protest_frontpage' => 'protest_frontpage',
      ),
    ),
  );
  $context->reactions = array(
    'js' => array(
      'Bartik' => array(
        'themes/bartik/color/preview.js' => 0,
      ),
      'demopoly.org' => array(
        'sites/all/themes/demopoly/js/grid/jquery.min.js' => 0,
        'sites/all/themes/demopoly/js/grid/modernizr-transitions.js' => 0,
        'sites/all/themes/demopoly/js/grid/jquery.masonry.min.js' => 0,
        'sites/all/themes/demopoly/js/grid/box-maker.js' => 0,
        'sites/all/themes/demopoly/js/grid/jquery.masonry.js' => 0,
        'sites/all/themes/demopoly/js/grid/jquery.infinitescroll.min.js' => 0,
        'sites/all/themes/demopoly/js/profile.js' => 0,
        'sites/all/themes/demopoly/js/main.js' => 0,
        'sites/all/themes/demopoly/js/jquery.qtip-1.0.0-rc3.js' => 0,
        'sites/all/themes/demopoly/js/front.js' => 'sites/all/themes/demopoly/js/front.js',
        'sites/all/themes/demopoly/js/zoomer.js' => 0,
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('javascript');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'imagewall';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'protest_frontpage' => 'protest_frontpage',
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
        'sites/all/themes/demopoly/css/site/take-part.css' => 0,
        'sites/all/themes/demopoly/css/site/protest-form.css' => 0,
        'sites/all/themes/demopoly/css/site/imagewall.css' => 'sites/all/themes/demopoly/css/site/imagewall.css',
        'sites/all/themes/demopoly/css/layout/layout-full.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-empty.css' => 0,
        'sites/all/themes/demopoly/css/pagelayouts/two-column.css' => 0,
        'sites/all/themes/demopoly/css/plugins/jquery-selectbox.css' => 0,
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
  $export['imagewall'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-empty';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'protest-detail*' => 'protest-detail*',
        'protest/add' => 'protest/add',
        'protest/*/edit' => 'protest/*/edit',
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
        'sites/all/themes/demopoly/css/site/take-part.css' => 0,
        'sites/all/themes/demopoly/css/site/imagewall.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-full.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-empty.css' => 'sites/all/themes/demopoly/css/layout/layout-empty.css',
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
  t('layout');
  $export['layout-empty'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-full';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~layout-empty' => '~layout-empty',
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
        'sites/all/themes/demopoly/css/site/take-part.css' => 0,
        'sites/all/themes/demopoly/css/site/imagewall.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-full.css' => 'sites/all/themes/demopoly/css/layout/layout-full.css',
        'sites/all/themes/demopoly/css/layout/layout-empty.css' => 0,
        'sites/all/themes/demopoly/css/pagelayouts/two-column.css' => 0,
        'sites/all/themes/demopoly/css/global/buttons.css' => 0,
        'sites/all/themes/demopoly/css/global/reset.css' => 0,
        'sites/all/themes/demopoly/css/global/fonts.css' => 0,
        'sites/all/themes/demopoly/css/global/standard-form.css' => 0,
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
  t('layout');
  $export['layout-full'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'protest-add-edit';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'protest/add*' => 'protest/add*',
        'protest/*/edit*' => 'protest/*/edit*',
        'protest/*/delete*' => 'protest/*/delete*',
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
        'sites/all/themes/demopoly/css/site/take-part.css' => 0,
        'sites/all/themes/demopoly/css/site/protest-form.css' => 'sites/all/themes/demopoly/css/site/protest-form.css',
        'sites/all/themes/demopoly/css/site/imagewall.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-full.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-empty.css' => 0,
        'sites/all/themes/demopoly/css/pagelayouts/two-column.css' => 0,
        'sites/all/themes/demopoly/css/plugins/jquery-selectbox.css' => 'sites/all/themes/demopoly/css/plugins/jquery-selectbox.css',
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
    'js' => array(
      'Bartik' => array(
        'themes/bartik/color/preview.js' => 0,
      ),
      'demopoly.org' => array(
        'sites/all/themes/demopoly/js/plugins/qtip/jquery.qtip-1.0.0-rc3.js' => 0,
        'sites/all/themes/demopoly/js/plugins/selectbox/jquery.selectbox-0.2.js' => 'sites/all/themes/demopoly/js/plugins/selectbox/jquery.selectbox-0.2.js',
        'sites/all/themes/demopoly/js/plugins/selectbox/jquery.selectbox-0.2.min.js' => 0,
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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['protest-add-edit'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'protest-detail';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'protest-detail/*' => 'protest-detail/*',
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
        'sites/all/themes/demopoly/css/site/protest.css' => 'sites/all/themes/demopoly/css/site/protest.css',
        'sites/all/themes/demopoly/css/site/profile.css' => 0,
        'sites/all/themes/demopoly/css/site/take-part.css' => 0,
        'sites/all/themes/demopoly/css/site/protest-form.css' => 0,
        'sites/all/themes/demopoly/css/site/imagewall.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-full.css' => 0,
        'sites/all/themes/demopoly/css/layout/layout-empty.css' => 0,
        'sites/all/themes/demopoly/css/pagelayouts/two-column.css' => 0,
        'sites/all/themes/demopoly/css/plugins/jquery-selectbox.css' => 0,
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
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'demopoly' => array(
        'disable' => array(
          'header' => 'header',
          'navigation' => 'navigation',
          'login' => 'login',
          'footer' => 'footer',
          'search' => 'search',
          'dashboard_main' => 'dashboard_main',
          'dashboard_sidebar' => 'dashboard_sidebar',
          'dashboard_inactive' => 'dashboard_inactive',
          'content' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 'content',
          'help' => 'help',
          'page_top' => 'page_top',
          'page_bottom' => 'page_bottom',
          'sidebar_first' => 'sidebar_first',
          'dashboard_main' => 'dashboard_main',
          'dashboard_sidebar' => 'dashboard_sidebar',
          'dashboard_inactive' => 'dashboard_inactive',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['protest-detail'] = $context;

  return $export;
}
