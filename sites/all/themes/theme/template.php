<?php

/**
 * @file
 * template.php
 */

function theme_preprocess_views_view_unformatted(&$vars)
{
  switch ($vars['view']->name) {
    case 'mixitup_controls':
      if ($vars['view']->current_display == 'panel_pane_1') {
        if (!empty($vars['view']->result)) {
          foreach ($vars['view']->result as $k => $v) {
            if (!empty($v->taxonomy_term_data_name)) {
              $filter_name = str_replace(' ','_',strtolower($v->taxonomy_term_data_name));
              $vars['mixitup'][$k] = " data-filter='.{$filter_name}'";
              if ($filter_name == 'all') {
                $vars['mixitup'][$k] = " data-filter='{$filter_name}'";
              }
            }
          }
        }
      }
      break;
    case 'products_front':
      if ($vars['view']->current_display == 'panel_pane_1') {
        if (!empty($vars['view']->result)) {
          foreach ($vars['view']->result as $k => $v) {
            if (!empty($v->field_field_mixitap_category)) {
              foreach ($v->field_field_mixitap_category as $val) {
                if (empty($vars['mixitup'][$k])) {$vars['mixitup'][$k] = '';}
                $vars['mixitup'][$k] .= str_replace(' ','_',strtolower($val['rendered']['#title'])) . ' ';
              }
            }
          }
        }
      }
      break;
  }
}
