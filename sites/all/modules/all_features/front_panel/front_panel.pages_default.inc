<?php
/**
 * @file
 * front_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function front_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'front';
  $page->admin_description = 'Display front page';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front__panel_context_7455fed7-ebb1-4bab-87d5-16771aed4c4f';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Products',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'brands',
        ),
        'parent' => 'main',
        'class' => 'Brands',
        'hide_empty' => 0,
      ),
      'brands' => array(
        'type' => 'region',
        'title' => 'Brands',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'brands' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = ' ';
  $display->uuid = '9a183fc2-00da-4f95-ad2e-8dc3e2a25a77';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c9badd8-f0a0-4d7b-a1e2-5832eacbfc7f';
    $pane->panel = 'brands';
    $pane->type = 'views';
    $pane->subtype = 'brands';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c9badd8-f0a0-4d7b-a1e2-5832eacbfc7f';
    $display->content['new-6c9badd8-f0a0-4d7b-a1e2-5832eacbfc7f'] = $pane;
    $display->panels['brands'][0] = 'new-6c9badd8-f0a0-4d7b-a1e2-5832eacbfc7f';
    $pane = new stdClass();
    $pane->pid = 'new-c08c66a3-d2e1-423e-ab79-89b7437f34f5';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'mixitup_controls-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c08c66a3-d2e1-423e-ab79-89b7437f34f5';
    $display->content['new-c08c66a3-d2e1-423e-ab79-89b7437f34f5'] = $pane;
    $display->panels['center'][0] = 'new-c08c66a3-d2e1-423e-ab79-89b7437f34f5';
    $pane = new stdClass();
    $pane->pid = 'new-f5ad679e-2c84-454f-b517-8d9c3a0eb640';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'products_front-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f5ad679e-2c84-454f-b517-8d9c3a0eb640';
    $display->content['new-f5ad679e-2c84-454f-b517-8d9c3a0eb640'] = $pane;
    $display->panels['center'][1] = 'new-f5ad679e-2c84-454f-b517-8d9c3a0eb640';
    $pane = new stdClass();
    $pane->pid = 'new-144075e8-e6c8-44c2-a976-292e76f54c7c';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'slider_on_front-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '144075e8-e6c8-44c2-a976-292e76f54c7c';
    $display->content['new-144075e8-e6c8-44c2-a976-292e76f54c7c'] = $pane;
    $display->panels['top'][0] = 'new-144075e8-e6c8-44c2-a976-292e76f54c7c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
