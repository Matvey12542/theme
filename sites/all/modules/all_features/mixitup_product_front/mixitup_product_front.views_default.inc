<?php
/**
 * @file
 * mixitup_product_front.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mixitup_product_front_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'products_front';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products_front';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'top-front-products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_products_product_id']['id'] = 'field_products_product_id';
  $handler->display->display_options['relationships']['field_products_product_id']['table'] = 'field_data_field_products';
  $handler->display->display_options['relationships']['field_products_product_id']['field'] = 'field_products_product_id';
  /* Field: Commerce Product: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['relationship'] = 'field_products_product_id';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'product_top_front_235x235',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Commerce Product: Big price */
  $handler->display->display_options['fields']['field_big_price']['id'] = 'field_big_price';
  $handler->display->display_options['fields']['field_big_price']['table'] = 'field_data_field_big_price';
  $handler->display->display_options['fields']['field_big_price']['field'] = 'field_big_price';
  $handler->display->display_options['fields']['field_big_price']['relationship'] = 'field_products_product_id';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_products_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Content: Mixitap category */
  $handler->display->display_options['fields']['field_mixitap_category']['id'] = 'field_mixitap_category';
  $handler->display->display_options['fields']['field_mixitap_category']['table'] = 'field_data_field_mixitap_category';
  $handler->display->display_options['fields']['field_mixitap_category']['field'] = 'field_mixitap_category';
  $handler->display->display_options['fields']['field_mixitap_category']['label'] = '';
  $handler->display->display_options['fields']['field_mixitap_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mixitap_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mixitap_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mixitap_category']['multi_type'] = 'ul';
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['relationship'] = 'field_products_product_id';
  $handler->display->display_options['fields']['product_id']['label'] = 'For ajax link (dont delete!!!!)';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Global: Add to cart ajax link */
  $handler->display->display_options['fields']['front_content']['id'] = 'front_content';
  $handler->display->display_options['fields']['front_content']['table'] = 'views';
  $handler->display->display_options['fields']['front_content']['field'] = 'front_content';
  $handler->display->display_options['fields']['front_content']['label'] = '';
  $handler->display->display_options['fields']['front_content']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['products_front'] = $view;

  return $export;
}
