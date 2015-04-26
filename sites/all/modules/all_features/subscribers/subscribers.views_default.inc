<?php
/**
 * @file
 * subscribers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function subscribers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_follow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_follow';
  $view->human_name = 'Subscribers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subscribers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User follow: Follow user id */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_follow';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'User';
  /* Field: User: Rendered User */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'uid';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Contextual filter: User follow: User id */
  $handler->display->display_options['arguments']['user_id']['id'] = 'user_id';
  $handler->display->display_options['arguments']['user_id']['table'] = 'user_follow';
  $handler->display->display_options['arguments']['user_id']['field'] = 'user_id';
  $handler->display->display_options['arguments']['user_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['user_follow'] = $view;

  return $export;
}
