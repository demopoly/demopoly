
/**
 *  @file
 *  Initiate the Galleria plugin.
 */

(function ($) {
  Drupal.behaviors.viewsSlideshowGalleria = {
    attach: function (context, settings) {
      for (id in Drupal.settings.viewsSlideshowGalleria) {
        $('#' + id + ':not(.viewsSlideshowGalleria-processed)', context).addClass('viewsSlideshowGalleria-processed').each(function () {
          var settings = Drupal.settings.viewsSlideshowGalleria[$(this).attr('id')];
          // Eval settings that are functions.
          if (settings['extend']) {
            var extend = settings['extend'];
            eval("settings['extend'] = " + extend);
          }
          if (settings['dataConfig']) {
            var dataConfig = settings['dataConfig'];
            eval("settings['dataConfig'] = " + dataConfig);
          }
          // Load the theme.
          Galleria.loadTheme(settings['themePath']);
          // Fire up the gallery.
          $(this).galleria(settings);
        });
      }
    }
  };
}(jQuery));
