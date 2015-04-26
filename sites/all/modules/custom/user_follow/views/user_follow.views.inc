<?php

/**
 * @file
 * Views definitions for user_follow module.
 */

/**
 * Implements hook_views_data().
 */
function user_follow_views_data() {
  $data = array();

  $data['user_follow']['table']['group'] = t('User follow');
  $data['user_follow']['table']['base'] = array(
    'title' => t('User follow'),
    'help' => t('Contains records we want exposed to Views.'),
  );
  $data['user_follow']['table']['join'] = array(
    'users' => array(
      'left_field' => 'uid',
      'field' => 'uid',
    ),
  );
  $data['user_follow']['id'] = array(
    'title' => t('ID'),
    'help' => t('The record ID.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  // The base user id.
  $data['user_follow']['user_id'] = array(
    'title' => t('User id'),
    'help' => t('The record user follow'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'relationship' => array(
      'base' => 'users',
      'base field' => 'uid',
      'field' => 'user_id',
      'handler' => 'views_handler_relationship',
      'label' => t('Base user'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_user_uid',
    ),
  );

  // The follow user id.
  $data['user_follow']['uid'] = array(
    'title' => t('Follow user id'),
    'help' => t('The record user follow id'),
    'field' => array(
      'handler' => 'views_handler_field_user',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'relationship' => array(
      'base' => 'users',
      'base field' => 'uid',
      'field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Follow user'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_user_uid',
    ),
  );

  return $data;
}