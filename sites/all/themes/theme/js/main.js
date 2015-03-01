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

        }
    }
})(jQuery);