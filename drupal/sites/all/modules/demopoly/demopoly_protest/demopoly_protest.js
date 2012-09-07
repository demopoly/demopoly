(function($){
	Drupal.behaviors.demopoly_protest = {
			attach:function(context){
				var desc = $('div#context div.description').html();
				var contxt = $('div#context textarea');
				contxt.click(function(){
					if(contxt.val() == desc){
						contxt.val('');
					}
				})
				contxt.blur(function(){
					if(contxt.val() == ''){
						contxt.val(desc);
					}
				})
				
				$('input#edit-submit').click(function(){
					if(contxt.val() == desc){
						contxt.val('');
					};
					return true;
				});
				
				$(function () {
				    $("div.date-day select, div.date-month select, div.date-year select").selectbox({
				    	onOpen: function (inst) {
							//console.log("open", inst);
						},
						onClose: function (inst) {
							//console.log("close", inst);
						},
						onChange: function (val, inst) {
							//console.log("blubb", inst);
						},
						effect: "slide"
				    });
				});
			}
	}
})(jQuery)