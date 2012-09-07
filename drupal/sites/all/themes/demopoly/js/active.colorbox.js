(function ($) {

Drupal.behaviors.initExpandCb = {
  attach: function (context, settings) {
	  $('a, area, input', context)
	  .filter('.expandcb')
	  .once('init-colorbox-inline-processed')
	  .colorbox({
			innerWidth : function() {
				return $.urlParam('width', $(this).attr('href'));
			},
			innerHeight : function() {
				return $.urlParam('height', $(this).attr('href'));
			},
			href:function(){
		        return $.urlParam('fragment', $(this).attr('href'));
		    },
			iframe: true,
			onLoad:function() {
			},
			onComplete:function() {
				var hSel = $.urlParam('hSel', $(this).attr('href'));
				var method = 'cBoxComplete("'+hSel+'")';
				console.log(method);
				window.setTimeout(function(){ cBoxComplete(hSel) }, 100);
			}
		});
	  
	  function cBoxComplete(hSel){
		  var obj = $("#cboxLoadedContent iframe");
		  $(obj).load(function(){
			  var cont = $(this).contents().find(hSel);
			  console.log(cont);
//			  var y = obj.innerHeight();
//			  console.log(cont);
//			  jQuery.colorbox.resize({
//				  'innerHeight':y+5
//			  });
		  });
	  }
	  
	  var resize_cbox = function(obj){
		  var opac = $(obj).css('opacity');
		  if( opac > 0){
			  var y = $(obj).innerHeight();
			  console.log(y);
			  top.jQuery.colorbox.resize({
				  'innerHeight':y+5
			  });
		  }
	  }
  }
}})(jQuery);
// $('colorbox-activater').expandcb();
