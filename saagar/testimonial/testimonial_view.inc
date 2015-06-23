<?php
/**
 * @file
 * Testimonial view file
 * @package Saagar
 */

$item_no = theme_get_setting('show_default_node_testimonial_link', 'saagar');
$view = new view();
$view->name = 'testimonial_item_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Testimonial';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Testimonial';
$handler->display->display_options['css_class'] = 'col-3';
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
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
/* Field: Content: Testimonial Author Image */
$handler->display->display_options['fields']['testimonial_author_image']['id'] = 'testimonial_author_image';
$handler->display->display_options['fields']['testimonial_author_image']['table'] = 'field_data_testimonial_author_image';
$handler->display->display_options['fields']['testimonial_author_image']['field'] = 'testimonial_author_image';
$handler->display->display_options['fields']['testimonial_author_image']['label'] = '';
$handler->display->display_options['fields']['testimonial_author_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['testimonial_author_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['testimonial_author_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Field: Content: Category */
$handler->display->display_options['fields']['field_testimonial_category']['id'] = 'field_testimonial_category';
$handler->display->display_options['fields']['field_testimonial_category']['table'] = 'field_data_field_testimonial_category';
$handler->display->display_options['fields']['field_testimonial_category']['field'] = 'field_testimonial_category';
$handler->display->display_options['fields']['field_testimonial_category']['delta_offset'] = '0';
/* Field: Content: Designation/Organisation */
$handler->display->display_options['fields']['testimonial_org_details']['id'] = 'testimonial_org_details';
$handler->display->display_options['fields']['testimonial_org_details']['table'] = 'field_data_testimonial_org_details';
$handler->display->display_options['fields']['testimonial_org_details']['field'] = 'testimonial_org_details';
$handler->display->display_options['fields']['testimonial_org_details']['label'] = '';
$handler->display->display_options['fields']['testimonial_org_details']['element_label_colon'] = FALSE;
/* Field: Content: Testimonial URL */
$handler->display->display_options['fields']['testimonial_url']['id'] = 'testimonial_url';
$handler->display->display_options['fields']['testimonial_url']['table'] = 'field_data_testimonial_url';
$handler->display->display_options['fields']['testimonial_url']['field'] = 'testimonial_url';
$handler->display->display_options['fields']['testimonial_url']['label'] = '';
$handler->display->display_options['fields']['testimonial_url']['element_label_colon'] = FALSE;
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
  'testimonial' => 'testimonial',
);
/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'testimonial';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'testimonial1c';

/* Display: Page 2 */
$handler = $view->new_display('page', 'Page 2', 'page_2');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-2';
$handler->display->display_options['path'] = 'testimonial2c';

/* Display: Page 3 */
$handler = $view->new_display('page', 'Page 3', 'page_3');
$handler->display->display_options['path'] = 'testimonial3c';

/* Display: Page 4 */
$handler = $view->new_display('page', 'Page 4', 'page_4');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'col-4';
$handler->display->display_options['path'] = 'testimonial4c';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
