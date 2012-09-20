(function($){
	
	Drupal.behaviors.demopoly_geonames = {
			attach: function(){
				$('#edit-field-location-und-0-city').bind('keyup', function(){
					$(this).autocomplete({
						source:function(request,response){
							$.ajax({
								url:'/demopoly_get_geodata/autocomplete/'+request.term,
								success:function(data){
									
//									resp = new Array();
//									
//									data = eval(data);
//									var i = 0;
//									$.each(data, function(key, value){
//										resp[i] = value;
//										i = i +1;
//									})
									resp = data;
									response(resp)
								}
							})
						},
						search: function(){
							$('#edit-field-location-und-0-locpick-user-latitude').val('')
							$('#edit-field-location-und-0-locpick-user-longitude').val('')
							$("#edit-field-location-und-0-country option[value=xx]").attr('selected', true);
						},
						select: function(event, ui) {
							$('#edit-field-location-und-0-locpick-user-latitude').val(ui.item.lati)
							$('#edit-field-location-und-0-locpick-user-longitude').val(ui.item.longi)
//							$('#edit-field-location-und-0-name').val(ui.item.country)
							$("#edit-field-location-und-0-country option[value="+ui.item.countryID+"]").attr('selected', true);
//							console.log(ui.item)
						}
					})
				})
			}
	}
	
})(jQuery)