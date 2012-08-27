(function($){
	Drupal.behaviors.demopoly_protest = {
			attach:function(context){
				var desc = $('div#context div.description').html();
				$('div#context textarea').click(function(){
					if($(this).val() == desc){
						$(this).val('');
					}
				})
				$('div#context textarea').blur(function(){
					if($(this).val() == ''){
						$(this).val(desc);
					}
				})
				$(function () {
				    $("div.date-day select, div.date-month select, div.date-year select").selectbox({
				    	onOpen: function (inst) {
							console.log("open", inst);
						},
						onClose: function (inst) {
							console.log("close", inst);
						},
						onChange: function (val, inst) {
							console.log("blubb", inst);
						},
						effect: "slide"
				    });
				});
			}
	}
})(jQuery)