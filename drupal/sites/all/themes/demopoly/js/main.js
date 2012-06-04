(function($){
	Drupal.behaviors.demopoly_main = {
		attach: function(context){
			$('.login-button').click(function (event){
				$('#block-user-login').toggle();
			}) ;
			
		}
	}
	
})(jQuery)


