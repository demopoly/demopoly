(function($){
	Drupal.behaviors.demopoly_main = {
		attach: function(context){
			$('.login-button').click(function (event){
				$('#block-user-login').show();
				return false;
			}) ;
			
			var options = {
					content: {
						text: 'Coming soon...',
						title: 'Information',
					},
					position: {
						at: "top right",
						my: "top left",
						viewport: $(window),
						adjust: {
							method: 'shift',
							x: 10,
							y: 0,
							resize: true,
						}
					},
					show: {
						event: 'click'
					},
					hide: {
						event: 'click'
					},
					style: {
						classes: "ui-tooltip-blue",
						width: 450,
						tip: {
							corner: false
						},
					}
				};
			$('#show_info').qtip(options);
			
		}
	}
	
})(jQuery)


