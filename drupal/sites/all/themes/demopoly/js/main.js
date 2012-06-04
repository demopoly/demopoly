(function($){
	Drupal.behaviors.demopoly_main = {
		attach: function(context){
			$('.login-button').click(function (event){
				$('#block-user-login').toggle();
			}) ;
			
		}
	}
	
})(jQuery)


    <!----------------->
    <!-- Grid System -->
    <!----------------->
     
var $container = $('#image-container');
$container.imagesLoaded(function(){
  $container.masonry({
    itemSelector : '.box,.infotext',
    columnWidth : 1,
	animationOptions : { queue: true, duration: 500 },
	isAnimated : true
  });
});