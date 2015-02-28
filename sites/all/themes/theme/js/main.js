(function ($) {

    Drupal.behaviors.bxslider = {
        attach: function (context, settings) {
    $('.front-slider .view-content').addClass('bxslider');
    $('.bxslider').bxSlider({
        slideWidth: 1170,
        maxSlides: 1,
        moveSlides: 1,
        slideMargin: 0,
        infiniteLoop: true,
        touchEnabled:true,
        nextText: '',
        prevText: ''
    });

    console.log(front_slider);

        }}
})(jQuery);