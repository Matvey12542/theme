<?php
/**
 * @file
 * brands_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function brands_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'brands';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Brands';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Brands';
  $handler->display->display_options['css_class'] = 'owlCarousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Brand image */
  $handler->display->display_options['fields']['field_brand_image']['id'] = 'field_brand_image';
  $handler->display->display_options['fields']['field_brand_image']['table'] = 'field_data_field_brand_image';
  $handler->display->display_options['fields']['field_brand_image']['field'] = 'field_brand_image';
  $handler->display->display_options['fields']['field_brand_image']['label'] = '';
  $handler->display->display_options['fields']['field_brand_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brand_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_brand_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'brands' => 'brands',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['brands'] = $view;

  return $export;
}
