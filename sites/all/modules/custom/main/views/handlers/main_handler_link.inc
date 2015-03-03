<?php

class main_handler_link extends views_handler_field {
  function query() {}
  /**
   * Renders output.
   */
  public function render($values) {
    $pid  = $values->commerce_product_field_data_field_products_product_id;
    if (!$pid) {
      $pid = '';
    }
    ctools_include('modal');
    ctools_include('ajax');
    ctools_modal_add_js();

//    return ctools_modal_text_button('quickreview', 'product-popup/'.$nid, t('View node content for @name', array('@name' => 'popup')), 'ctools-modal-happy-modal-style');
    return ctools_ajax_text_button(t('Add to cart'), "to-cart/{$pid}/1/nojs", t('Add product to cart'));
  }
}

