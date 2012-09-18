(function($) {
	Drupal.behaviors.demopoly_mansonary = {
		attach : function(context) {
			
			var $container = $('.view-protest-frontpage-');
			window.setTimeout('changeEverything()', 500);
			
			changeEverything = function(){
				$('.views-row .teaser-wrapper').each(function(){
//					tWidth = $(this).find('img').width();
//					tHeight = $(this).find('img').height();
					//$(this).height(tHeight);
					var imageUrl = $(this).attr('img')
					console.log(imageUrl);
					
					
					var options = {
							content: {
								text: '<div style="text-align: center;"><img src="'+imageUrl+'"/></div>',
								title: {
									text: $(this).find('div.info').clone().html()
								}
							},
							position: {
								at: "bottom right",
								my: "top left",
								viewport: $(window),
								adjust: {
									method: 'shift',
									resize: true,
								}
							},
							show: {
								event: 'mouseenter'
							},
							hide: {
								event: 'mouseleave'
							},
							style: {
								classes: "ui-tooltip-blue",
								width: 450,
								tip: {
									corner: false
								},
							}
						};
					
					$(this).qtip(options);
					
				});
				
				$container.imagesLoaded(function() {
					$container.show();
					$container.masonry({
						itemSelector : '.views-row',
						isAnimated: false,
					});
				});
				
			}
//			
//			
//			$container.imagesLoaded(function() {
//				$container.show();
//				$container.masonry({
//					itemSelector : '.views-row',
//					isAnimated: false
//				});
//				
//			});
//			window.setTimeout('changeEverything()', 5000);
//			
//			changeEverything = function(){
//				$('.views-row .teaser-wrapper').each(function(){
//					tWidth = $(this).width();
//					$(this).find('img').width(tWidth);
//					console.log('width changed');
//				});
//				
//				$container.imagesLoaded(function() {
//					$container.show();
//					$container.masonry({
//						itemSelector : '.views-row',
//						isAnimated: false
//					});
//					console.log('masonried');
//				});
//			};
			
			wrapped($container);
			
//			$container.infinitescroll({
//				navSelector  : ".item-list",
//				nextSelector : ".pager-next a",
//				itemSelector : ".view-content",
//				donetext     : "Looks like you saw all the protests!",
//				loadingImg   : "http://i.imgur.com/6RMhx.gif",
//				loadingText  : "Loading new posts...",
//				bufferPx     : 100
//			}, function(newElements){
//				var $newElems = $(newElements).css({	
//					opacity : 0
//					});
//				$newElems.imagesLoaded(function() {
//					$newElems.animate({
//						opacity : 1
//						});
//					$container.masonry('appended', $newElems, true);
//				});
//				wrapped($container);
//			});
			
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
//					$($container).each(function(){
//						$(this).find('img').animate({
//							marginTop: '0', 
//							marginLeft: '0',
//							top: '0', 
//							left: '0', 
//							width: '102px', 
//							height: '135px', 
//							padding: '0'
//						}, 0);
//					});
//					$(".views-row").hover(function() {
//						$(this).css({'z-index' : '10'});
//						$(this).find('img').addClass("hover").stop()
//							.animate({
//								marginTop: '-60px', 
//								marginLeft: '-80px', 
//								top: '50%', 
//								left: '50%', 
//								width: '240', 
//								height: '320',
//								padding: '0' 
//							}, 200);
//						} , function() {
//							$(this).css({'z-index' : '0'});
//							$(this).find('img').removeClass("hover").stop()
//								.animate({
//									marginTop: '0', 
//									marginLeft: '0',
//									top: '0', 
//									left: '0', 
//									width: '102px', 
//									height: '135px', 
//									padding: '0'
//								}, 400);
//							return false;
//					});
				});
			}
		}
	}
})(jQuery);
