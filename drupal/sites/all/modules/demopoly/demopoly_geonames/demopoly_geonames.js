(function($){
	
	Drupal.behaviors.demopoly_geonames = {
			attach: function(){
				$('#edit-field-location-und-0-city').bind('keyup', function(){
					$(this).autocomplete({
						source:function(request,response){
							$.ajax({
								url:'/demopoly_geonames/autocomplete/'+request.term,
								success:function(data){
									response(data)
								}
							})
						}
					})
				})
			}
	}
	
})(jQuery)