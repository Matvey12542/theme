<?php

/**
 * Implements hook_views_data().
 */
function main_views_data() {
  $data['views']['front_content'] = array(
    'title' => t('Add to cart ajax link'),
    'help' => t('Add to cart ajax link'),
    'field' => array(
      'handler' => 'main_handler_link',
    ),
  );

  return $data;
}
