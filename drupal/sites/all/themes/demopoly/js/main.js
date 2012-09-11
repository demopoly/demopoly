(function($){
	Drupal.behaviors.demopoly_main = {
		attach: function(context){
			$('.login-button').click(function (event){
				$('#block-user-login').show();
				return false;
			}) ;
			
			/*$('.field-item.masonry-brick').Zoomer({
				speedView:200,
				speedRemove:400,
				altAnim:true,
				speedTitle:400,
				debug:false
			});*/
			
		}
	}
	
})(jQuery)


