(function($){
	Drupal.behaviors.demopoly_profile = {
		attach: function(context){
			if (location.hash=='#add-protest') {
				$('#demopoly-add-image',context).click();
				location.hash='';
				//.click();
			}
		}
	}
	
	function closeIframe() {
		$('#cboxClose').click();
		top.$('.demopoly-my-images-reload').click();
	}
})(jQuery);
(function($){
	if(Drupal.ajax != null){
		Drupal.ajax.prototype.error = function (response, uri) {
			  /*
			  alert(Drupal.ajaxError(response, uri));
			   */
			  // Remove the progress element.
			  if (this.progress.element) {
			    $(this.progress.element).remove();
			  }
			  if (this.progress.object) {
			    this.progress.object.stopMonitoring();
			  }
			  // Undo hide.
			  $(this.wrapper).show();
			  // Re-enable the element.
			  $(this.element).removeClass('progress-disabled').removeAttr('disabled');
			  // Reattach behaviors, if they were detached in beforeSerialize().
			  if (this.form) {
			    var settings = response.settings || this.settings || Drupal.settings;
			    Drupal.attachBehaviors(this.form, settings);
			  }
			};
	}
	if(Drupal.ACDB != null){
		Drupal.ACDB.prototype.search = function (searchString) {
			  var db = this;
			  this.searchString = searchString;

			  // See if this string needs to be searched for anyway.
			  searchString = searchString.replace(/^\s+|\s+$/, '');
			  if (searchString.length <= 0 ||
			    searchString.charAt(searchString.length - 1) == ',') {
			    return;
			  }

			  // See if this key has been searched for before.
			  if (this.cache[searchString]) {
			    return this.owner.found(this.cache[searchString]);
			  }

			  // Initiate delayed search.
			  if (this.timer) {
			    clearTimeout(this.timer);
			  }
			  this.timer = setTimeout(function () {
			    db.owner.setStatus('begin');

			    // Ajax GET request for autocompletion.
			    $.ajax({
			      type: 'GET',
			      url: db.uri + '/' + encodeURIComponent(searchString),
			      dataType: 'json',
			      success: function (matches) {
			        if (typeof matches.status == 'undefined' || matches.status != 0) {
			          db.cache[searchString] = matches;
			          // Verify if these are still the matches the user wants to see.
			          if (db.searchString == searchString) {
			            db.owner.found(matches);
			          }
			          db.owner.setStatus('found');
			        }
			      },
			      error: function (xmlhttp) {
			        alert(Drupal.ajaxError(xmlhttp, db.uri));
			      }
			    });
			  }, this.delay);
			};
	}
})(jQuery)