(function($) {
	Drupal.behaviors.demopoly_mansonary = {
		attach : function(context) {
			
			var $container = $('#image-container');
			$container.imagesLoaded(function() {
				$container.show();
				$container.masonry({
					itemSelector : '.views-row',
					columnWidth : 1,
					animationOptions : {
						queue : true,
						duration : 500
					},
					isAnimated : true,

				});
				
			});
			/*
			$container.infinitescroll({
				navSelector : '#page-nav', // selector for the paged navigation
				nextSelector : '#page-nav a', // selector for the NEXT link
												// (to page
				// 2)
				itemSelector : '.field-item', // selector for all items you'll
				// retrieve
				loading : {
					finishedMsg : 'No more pages to load.',
					img : 'http://i.imgur.com/6RMhx.gif'
				}
			},
			// trigger Masonry as a callback
			function(newElements) {
				// hide new items while they are loading
				var $newElems = $(newElements).css({
					opacity : 0
				});
				// ensure that images load before adding to masonry layout
				$newElems.imagesLoaded(function() {
					// show elems now they're ready
					$newElems.animate({
						opacity : 1
					});
					$container.masonry('appended', $newElems, true);
				});
			});
			*/
			
			var $container = $('#image-container');
			$container.imagesLoaded(function() {
				$('.views-row').each(function(){
//					var res = 640 / 480;
//					var bW = 40; 
//					var bH = bW*res;
					
					var iHeight = 40;
					var tWrap = $(this).children('.teaser-wrapper');
					var fWrap = $(this).children('.teaser-wrapper').children('.field');
					var bHeight = fWrap.height();
					
					$(this).hover(function(){
						tWrap.height(bHeight);
						tWrap.height(bHeight + iHeight);
					}, function(){
						tWrap.height(bHeight);
					});
				});
			});
		}
	}
})(jQuery);
