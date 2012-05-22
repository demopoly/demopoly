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
	
})(jQuery)