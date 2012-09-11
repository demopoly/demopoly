var infinitescroll_was_initialised = false;

(function ($) {

Drupal.behaviors.infinitescroll  = {
  attach: function (context) {
    if (infinitescroll_was_initialised) return;
    infinitescroll_was_initialised = true;

    // Initialize the infinite scroll
    // Some code based on jQuery.autopager work by lagos (http://lagoscript.org)
    // because I had to extend it and fix issues with the default loading.
    var content_target = findPagerTargetSelector();
    if (content_target == '') return;

    var options = {
      content: content_target + ' > *',
      link: Drupal.settings.infscr.pagerNext,
      pager: Drupal.settings.infscr.pager,
      appendTo: content_target, 
    };

    var status = {
      content: $(options.content).filter(':last'),
      currentUrl: null,
      nextUrl: null,
      active: false,
      page: 1
    };

    // Run the first time (if more results are needed)
    setUrl();
    loadOnScroll();
    $(Drupal.settings.infscr.pager).hide();
    $(window).scroll(loadOnScroll);

    // Using the pager find it's content target
    function findPagerTargetSelector() {
      // We need to find the pager, to assume the content area that it will work on
      $target = $(Drupal.settings.infscr.pager).prev();

      // Some containers are wrapped by another structure.
      // We need to find the real pager target 
      for (var targetClass in Drupal.settings.infscr.target) {
        if ($target.hasClass(targetClass)) {
          $target = $(Drupal.settings.infscr.target[targetClass], $target);
          break;
        }
      }
      if ($target.length == 0 || $target.attr('id') == '') return '';
      var target = '#' + $target.attr('id');

      // Table is an exception, because their content is inside the tbody
      if ($target[0].tagName == 'TABLE') {
        target = target + ' > tbody';
      }

      return target;
    }

    // Set the new url to be loaded
    function setUrl(nextAnchor) {
      status.currentUrl = status.nextUrl || window.location.href;
      status.nextUrl = nextAnchor ? nextAnchor.attr('href') : $(options.link).attr('href');
    }
    
    // Show/hide content loader
    function toogleLoader() {
      if (status.active) {
        $('#infinitescroll-loader').remove();
      }
      else {
        $(options.pager).before('<div id="infinitescroll-loader"><div></div></div>');
      }
    }
    
    // Load new content
    function loadOnScroll() {
      if (status.content.offset().top + status.content.height() < $(document).scrollTop() + $(window).height()) {
        if (status.active || !status.nextUrl || options.disabled) return;

        toogleLoader();
        status.active = true;
        $.get(status.nextUrl, insertContent);
      }
    }

    // Insert the new content into the current page
    function insertContent(res) {
      toogleLoader();

      Drupal.attachBehaviors(content_target);

      status.page++;
      setUrl($(options.link, res));

      var nextContent = $(options.content, res); 
      if (nextContent.length) {
        nextContent.appendTo(options.appendTo);
        status.content = nextContent.filter(':last');
      }

      // No more data
      if (!status.nextUrl && options.pager) {
        $(options.pager).before('<span class="infinitescroll-empty">There is no more content to show.</span>');
      }

      status.active = false;
    }
  }
};

})(jQuery);