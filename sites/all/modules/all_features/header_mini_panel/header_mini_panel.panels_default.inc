<?php
/**
 * @file
 * header_mini_panel.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function header_mini_panel_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = '';
  $mini->admin_title = 'Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left',
          1 => 'center',
          2 => 'top_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Top center',
        'width' => '33.826115841246995',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'top-center',
        'hide_empty' => 0,
      ),
      'top_left' => array(
        'type' => 'region',
        'title' => 'Top left',
        'width' => '33.13585683827898',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'top-left',
        'hide_empty' => 0,
      ),
      'top_right' => array(
        'type' => 'region',
        'title' => 'Top right',
        'width' => '33.03802732047403',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'top-right',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'logo',
          1 => 'cart',
        ),
        'parent' => 'main',
        'class' => 'Center',
        'hide_empty' => 0,
      ),
      'logo' => array(
        'type' => 'region',
        'title' => 'Logo',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'logo',
        'hide_empty' => 0,
      ),
      'cart' => array(
        'type' => 'region',
        'title' => 'Cart',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'cart',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_menu',
        ),
        'parent' => 'main',
        'class' => 'Bottom',
        'hide_empty' => 0,
      ),
      'main_menu' => array(
        'type' => 'region',
        'title' => 'Main menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'main-menu',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'logo' => NULL,
      'cart' => NULL,
      'main_menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '87f5cb04-ce1d-4cfb-9b4c-b21afebb7130';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61f8279b-0796-4a9f-a3fb-7328bda709ed';
    $pane->panel = 'logo';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '61f8279b-0796-4a9f-a3fb-7328bda709ed';
    $display->content['new-61f8279b-0796-4a9f-a3fb-7328bda709ed'] = $pane;
    $display->panels['logo'][0] = 'new-61f8279b-0796-4a9f-a3fb-7328bda709ed';
    $pane = new stdClass();
    $pane->pid = 'new-87b514b8-f375-4d0c-8e22-33b6df895575';
    $pane->panel = 'main_menu';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '87b514b8-f375-4d0c-8e22-33b6df895575';
    $display->content['new-87b514b8-f375-4d0c-8e22-33b6df895575'] = $pane;
    $display->panels['main_menu'][0] = 'new-87b514b8-f375-4d0c-8e22-33b6df895575';
    $pane = new stdClass();
    $pane->pid = 'new-ac6e67d7-8f3f-43cb-beed-569cece7ba67';
    $pane->panel = 'top_left';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ac6e67d7-8f3f-43cb-beed-569cece7ba67';
    $display->content['new-ac6e67d7-8f3f-43cb-beed-569cece7ba67'] = $pane;
    $display->panels['top_left'][0] = 'new-ac6e67d7-8f3f-43cb-beed-569cece7ba67';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header'] = $mini;

  return $export;
}
