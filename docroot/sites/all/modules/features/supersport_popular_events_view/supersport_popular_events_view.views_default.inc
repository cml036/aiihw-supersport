<?php
/**
 * @file
 * supersport_popular_events_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function supersport_popular_events_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'popular_sport_event_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Popular sport event views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Popular Events';
  $handler->display->display_options['css_class'] = 'popular-sport-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'Popular View' => 'Popular View',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Live-video */
  $handler->display->display_options['fields']['field_live_video']['id'] = 'field_live_video';
  $handler->display->display_options['fields']['field_live_video']['table'] = 'field_data_field_live_video';
  $handler->display->display_options['fields']['field_live_video']['field'] = 'field_live_video';
  $handler->display->display_options['fields']['field_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_live_video']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: post-live-video */
  $handler->display->display_options['fields']['field_post_live_video']['id'] = 'field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['table'] = 'field_data_field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['field'] = 'field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_post_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_live_video']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Pre-live-video */
  $handler->display->display_options['fields']['field_pre_live_video']['id'] = 'field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['table'] = 'field_data_field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['field'] = 'field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_pre_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_live_video']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Sport */
  $handler->display->display_options['fields']['field_sport']['id'] = 'field_sport';
  $handler->display->display_options['fields']['field_sport']['table'] = 'field_data_field_sport';
  $handler->display->display_options['fields']['field_sport']['field'] = 'field_sport';
  $handler->display->display_options['fields']['field_sport']['label'] = '';
  $handler->display->display_options['fields']['field_sport']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'popular-sport-event-views';
  $export['popular_sport_event_views'] = $view;

  return $export;
}
