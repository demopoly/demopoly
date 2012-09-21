(function($){
	
	Drupal.behaviors.demopoly_geonames = {
			attach: function(){
				$('input#edit-field-location-und-0-city').bind('keyup', function(){
					$(this).autocomplete({
						autoFocus: true,
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
								$('#edit-field-location-und-0-locpick-user-latitude').val('')
								$('#edit-field-location-und-0-locpick-user-longitude').val('')
								$('#edit-field-location-und-0-city').val('')
								$("#edit-field-location-und-0-country option[value=xx]").attr('selected', true);
							}
						},
						search: function(){
							$('#edit-field-location-und-0-locpick-user-latitude').val('')
							$('#edit-field-location-und-0-locpick-user-longitude').val('')
							$("#edit-field-location-und-0-country option[value=xx]").attr('selected', true);
						},
						select: function(event, ui) {
							$('#edit-field-location-und-0-locpick-user-latitude').val(ui.item.lati)
							$('#edit-field-location-und-0-locpick-user-longitude').val(ui.item.longi)
							$("#edit-field-location-und-0-country option[value="+ui.item.countryID+"]").attr('selected', true);
						}
					})
				})
			}
	}
	
})(jQuery)