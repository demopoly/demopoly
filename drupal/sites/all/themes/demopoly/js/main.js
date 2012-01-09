
    <!----------------->
    <!-- Grid System -->
    <!----------------->
(function($){
	Drupal.behaviors.masonry = {
			attach: function(context){
var $container = $('#image-container');
$container.imagesLoaded(function(){
	console.log('hans');
  $container.masonry({
    itemSelector : '.views-row',
    columnWidth : 1,
	animationOptions : { queue: true, duration: 500 },
	isAnimated : true
  });
});


// Filter JQuery
$(function() {
//		$( "#filter" ).resizable();
	});
	
$('#open-filter').click(function() {
	$('#close-filter').show();
	$('#open-filter').hide();
  	$('#filter').slideDown(500);
	});

$('#close-filter').click(function() {
	$('#open-filter').show();
	$('#close-filter').hide();
  	$('#filter').slideUp(500);
});

// Upload Button+Container

$('#open-participate').click(function() {
  	$('#participate-container').slideDown(1000);	
  	$('#info-container').hide();
	$('#leave-container').hide();
	$('#participate-inner-container').load('sites/participate.html');
});

$('#close-participate').click(function() {
  	$('#participate-container').slideUp(1000);	
});

// Info Button+Container

$('#open-info').click(function() {
  	$('#info-container').slideDown(500);
	$('#participate-container').hide();
	$('#leave-container').hide();	
	$('#info-inner-container').load('sites/information.html');
});

$('#close-info').click(function() {
  	$('#info-container').slideUp(500);	
});

// Leave Button+Container

$('#open-leave').click(function() {
  	$('#leave-container').slideDown(500);
	$('#participate-container').hide();	
	$('#info-container').hide();	
	$('#leave-inner-container').load('sites/leave.html');
});

$('#close-leave').click(function() {
  	$('#leave-container').slideUp(500);	
});

// ////////////////
// animate to top
// ////////////////

$("#back-top").hide();
$(function () {
$(window).scroll(function () {
if ($(this).scrollTop() > 100) {
$('#back-top').fadeIn();
} else {
$('#back-top').fadeOut();
}
});
$('#back-top').click(function () {
$('body,html').animate({
scrollTop: 0
}, 800);
return false;
});
});  
	}
	
	}})(jQuery);
// //////////////////////////////////
// tooltip on mouseover an image
// //////////////////////////////////
