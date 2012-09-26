(function($){
	
	Drupal.behaviors.demopoly_geonames = {
			attach: function(){
				var address = new Array();
				
				address['lati'] 	= $('#edit-field-address-geo-und-0-lat');
				address['longi'] 	= $('#edit-field-address-geo-und-0-lon');
//				address['country'] 	= $("#edit-field-address-postal-und-0-country option");
				address['city'] 	= $("#edit-field-address-postal-und-0-locality");
				address['dummy']	= $("#edit-field-city-und-0-value, #edit-field-firstname-und-1-value");
				
				address['dummy'].val(address['city'].val());
				
				address['dummy'].bind('keyup', function(){
					
					$(this).autocomplete({
						delay: 0,
						minLength: 3,
						source:function(request,response){
							$.ajax({
								url:'/demopoly_get_geodata/autocomplete/'+request.term,
								success:function(data){
									response(data)
								}
							})
						},
						change: function(event, ui){
							if(ui.item == undefined){
								address['lati'].val('')
								address['longi'].val('')
								address['city'].val('')
								$("#edit-field-address-postal-und-0-country option[value=AF]").attr('selected', true);
							}
						},
						search: function(){
							address['lati'].val('')
							address['longi'].val('')
							address['city'].val('')
						},
						select: function(event, ui) {
							address['lati'].val(ui.item.lati)
							address['longi'].val(ui.item.longi)
							address['city'].val(ui.item.value)
							$("#edit-field-address-postal-und-0-country option[value="+ui.item.countryID.toUpperCase()+"]").attr('selected', true);
						}
					})
				})
			}
	}
	
})(jQuery)