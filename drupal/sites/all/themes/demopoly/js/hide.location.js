he(function ($) {
	Drupal.behaviors.demopoly_register = {
		attach: function(context){
			var cityForm = $(".form-item-field-location-und-0-city");
			cityForm.attr("autocomplete","off");
			cityForm.appendTo("#edit-field-location");
			$("#field-location-add-more-wrapper").hide();
		}
	}
})(jQuery)