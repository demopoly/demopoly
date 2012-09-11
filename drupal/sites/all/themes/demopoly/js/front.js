(function($) {
	Drupal.behaviors.demopoly_mansonary = {
		attach : function(context) {
			
			var $container = $('.view-protest-frontpage-');
			$container.imagesLoaded(function() {
				$container.show();
				$container.masonry({
					itemSelector : '.views-row',
					isAnimated: false

				});
				
			});
			wrapped($container);
			$container.infinitescroll({
				navSelector  : ".item-list",
				nextSelector : ".pager-next a",
				itemSelector : ".view-content",
				donetext     : "Looks like you saw all the protests!",
				loadingImg   : "http://i.imgur.com/6RMhx.gif",
				loadingText  : "Loading new posts...",
				bufferPx     : 100
			}, function(newElements){
				var $newElems = $(newElements).css({
					opacity : 0
					});
				$newElems.imagesLoaded(function() {
					$newElems.animate({
						opacity : 1
						});
					$container.masonry('appended', $newElems, true);
				});
				wrapped($container);
			});
			
			function wrapped($cont){
				var opac = function(obj, opac){
					if(opac != false){
						var opac = opac;
						var opac2 = opac;
						if(opac < 1){
							opac2 = opac * 10;
						} else {
							opac2 = opac;
							opac = opac / 100;
						}
						$(obj).attr('style', ''
								+'filter: alpha(opacity='+opac2+');'
								+'opacity: '+opac+';'
								+'-ms-filter:"progid:DXImageTransform.Microsoft.Alpha(Opacity='+opac2+')"; /*--IE8 Specific--*/');
					} else {
						obj.attr('style', '');
					}
				}
				
				$cont.imagesLoaded(function() {
					$('.views-row').each(function(){
	//					var res = 640 / 480;
	//					var bW = 40; 
	//					var bH = bW*res;
						
						var iHeight = 40;
						var tWrap = $(this).children('.teaser-wrapper');
						var fWrap = $(this).children('.teaser-wrapper').children('.field');
						var bHeight = fWrap.height();
						
						$(this).hover(function(){
//							opac($('.views-row .teaser-wrapper'), 70);
//							opac(tWrap, 100);
							tWrap.height(bHeight);
							tWrap.height(bHeight + iHeight);
							
							
						}, function(){
							tWrap.height(bHeight);
							//opac($('.views-row .teaser-wrapper'), false);
						});
					});
				});
			}
		}
	}
})(jQuery);
