<?php
/**
 * @file
 * View code for portfolio module.
 */

$item_no = theme_get_setting('default_nodes_portfolio', 'saagar');
$view = new view();
$view->name = 'portfolio';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'portfolio';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'portfolio';
$handler->display->display_options['css_class'] = 'col-1';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = $item_no;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Portfolio Image */
$handler->display->display_options['fields']['portfolio_image']['id'] = 'portfolio_image';
$handler->display->display_options['fields']['portfolio_image']['table'] = 'field_data_portfolio_image';
$handler->display->display_options['fields']['portfolio_image']['field'] = 'portfolio_image';
$handler->display->display_options['fields']['portfolio_image']['label'] = '';
$handler->display->display_options['fields']['portfolio_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['portfolio_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['portfolio_image']['settings'] = array(
  'image_style' => 'large',
  'image_link' => '',
);
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'portfolio' => 'portfolio',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['path'] = 'portfolio';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-2';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Portfolio Image */
$handler->display->display_options['fields']['portfolio_image']['id'] = 'portfolio_image';
$handler->display->display_options['fields']['portfolio_image']['table'] = 'field_data_portfolio_image';
$handler->display->display_options['fields']['portfolio_image']['field'] = 'portfolio_image';
$handler->display->display_options['fields']['portfolio_image']['label'] = '';
$handler->display->display_options['fields']['portfolio_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['portfolio_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['portfolio_image']['settings'] = array(
  'image_style' => 'half_size',
  'image_link' => '',
);
$handler->display->display_options['path'] = 'portfolio2c';

/* Display: Page 2 */
$handler = $view->new_display('page', 'Page 2', 'page_2');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-3';
$handler->display->display_options['path'] = 'portfolio3c';

/* Display: Page 3 */
$handler = $view->new_display('page', 'Page 3', 'page_3');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-4';
$handler->display->display_options['path'] = 'portfolio4c';

/* Display: Page 4 */
$handler = $view->new_display('page', 'Page 4', 'page_4');
$handler->display->display_options['path'] = 'portfolio1c';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-4';
