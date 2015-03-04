(function ($) {
    Drupal.behaviors.bxslider = {
        attach: function (context, settings) {
            $('.front-slider .view-content').addClass('bxslider');
            $('.bxslider').bxSlider({
                slideWidth: 1170,
                maxSlides: 1,
                moveSlides: 1,
                mode: 'fade',
                slideMargin: 0,
                infiniteLoop: true,
                touchEnabled: true,
                nextText: '',
                prevText: '',
                easing: 'ease-out',
                useCSS: true
            });


          $('.top-front-products .view-content').mixItUp();

          $.fn.addCartAnimation = function(data) {
            console.log('buu');
            $('.fa-shopping-cart').addClass('cart-animation');
            setTimeout(function() {
              $('.cart-animation').removeClass('cart-animation');
              console.log('remove');
            }, 1000);
          };

          $('.remove-line').click(function(e){
            e.preventDefault();
            $(this).closest('tr').addClass('remove-row-animation');

            console.log('animate');
            setTimeout(function() {
              $('.remove-row-animation').removeClass('remove-row-animation');
              console.log('remove');
              return true;
            }, 2000);
          });
        }
    }

    Drupal.behaviors.owlCarousel = {
        attach: function (context, settings) {
            $(".owlCarousel .view-content").owlCarousel({
                items: 2,
                lazyLoad: true,
                autoPlay: 5000
            });
        }
    }
})(jQuery);