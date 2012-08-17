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
				if (!$.browser.opera) {
					$('select.form-select').each(function(){
						var title = $(this).attr('title');
						if( $('option:selected', this).val() != ''  ) title = $('option:selected',this).text();
						$(this)
							.css({'z-index':0,'opacity':0,'-khtml-appearance':'none'})
							.after('<span class="select">' + title.toUpperCase() + '</span>')
							.change(function(){
								val = $('option:selected',this).text();
								$(this).next().text(val.toUpperCase());
						})
					});
				};
			}
	}
})(jQuery)