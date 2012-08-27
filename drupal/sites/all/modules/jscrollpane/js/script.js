(function ($) {

  Drupal.behaviors.jScrollPane = {
    attach: function (context, settings) {
      var jScrollPane = Drupal.settings.jScrollPane['class'];
	      $('.container-thumbs').jScrollPane();
	      $('.para-context').jScrollPane();
    }
  };

})(jQuery);
