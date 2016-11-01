<?php
/**
 * @file
 * sbp_landing_page.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function sbp_landing_page_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1477939113,
    'title' => 'Build Your Capacity',
    'log' => '',
    'bundle' => 'four_column_cta',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => '',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1477939113,
    'uuid' => '1c0cd9fa-b871-46cb-b569-0f6effe32f3c',
    'language' => '',
    'field_calls_to_actions' => array(
      'und' => array(
        0 => array(
          'value' => 27,
          'revision_id' => 27,
        ),
        1 => array(
          'value' => 28,
          'revision_id' => 28,
        ),
        2 => array(
          'value' => 29,
          'revision_id' => 29,
        ),
        3 => array(
          'value' => 30,
          'revision_id' => 30,
        ),
      ),
    ),
    'field_pane_style' => array(
      'und' => array(
        0 => array(
          'tid' => '184',
        ),
      ),
    ),
    'rdf_mapping' => array(),
  );
  /*$fpps[] = array(
    'timestamp' => 1477938303,
    'title' => 'From the Mayor',
    'log' => '',
    'bundle' => 'pull_quote',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => '',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1477938303,
    'uuid' => '5a864689-f4ed-4da5-ab68-e0d77287577e',
    'language' => '',
    'field_author' => array(
      'und' => array(
        0 => array(
          'value' => 'Peter Garret',
          'format' => NULL,
          'safe_value' => 'Peter Garret',
        ),
      ),
    ),
    'field_pane_style' => array(
      'und' => array(
        0 => array(
          'tid' => '186',
        ),
      ),
    ),
    'field_quote' => array(
      'und' => array(
        0 => array(
          'value' => 'Whether you’re starting a bakery or run an auto shop — we designed the Business Portal to help ALL businesses.',
          'format' => NULL,
          'safe_value' => 'Whether you’re starting a bakery or run an auto shop — we designed the Business Portal to help ALL businesses.',
        ),
      ),
    ),
    'field_quote_image' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => 'mayor_outlined_2.png',
          'uri' => 'public://mayor_outlined_2.png',
          'filemime' => 'image/png',
          'filesize' => 1334019,
          'status' => 1,
          'type' => 'image',
          'uuid' => '3ee8cb11-96b9-4d46-b5c5-026fb802a31e',
          'field_file_image_alt_text' => array(
            'und' => array(
              0 => array(
                'value' => 'Mayor',
                'format' => NULL,
                'safe_value' => 'Mayor',
              ),
            ),
          ),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 1150,
            'width' => 881,
          ),
          'alt' => 'Mayor',
          'title' => NULL,
          'height' => 1150,
          'width' => 881,
          'focal_point' => '50,50',
        ),
      ),
    ),
    'field_quote_subtitle' => array(
      'und' => array(
        0 => array(
          'value' => 'Mayor of Cityville',
          'format' => NULL,
          'safe_value' => 'Mayor of Cityville',
        ),
      ),
    ),
    'rdf_mapping' => array(),
  );*/
  $fpps[] = array(
    'timestamp' => 1477938036,
    'title' => 'Welcome to the Business Portal',
    'log' => '',
    'bundle' => 'general_content',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => '',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1477938036,
    'uuid' => '81dde205-336c-4f62-a34d-1c30349f04b2',
    'language' => '',
    'field_call_to_action' => array(
      'und' => array(
        0 => array(
          'url' => 'start',
          'title' => 'Try the startup guide',
          'attributes' => array(
            'target' => 0,
          ),
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'value' => '<p>The Business Portal has many features available to businesses served in your area.</p>
',
          'format' => 'full_html',
          'safe_value' => '<p>The Business Portal has many features available to businesses served in your area.</p>
',
        ),
      ),
    ),
    'field_intro_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Welcome to the Business Portal',
          'format' => NULL,
          'safe_value' => 'Welcome to the Business Portal',
        ),
      ),
    ),
    'field_pane_style' => array(
      'und' => array(
        0 => array(
          'tid' => '192',
        ),
      ),
    ),
    'rdf_mapping' => array(),
  );

  $fpps[] = array(
    'timestamp' => 1477938693,
    'title' => 'Resources',
    'log' => '',
    'bundle' => 'three_column_cta',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => '',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1477938693,
    'uuid' => 'a0c321f6-ea1e-4dcb-bc7e-45e344d373df',
    'language' => 'und',
    'field_component_body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>You know what running a successful business will look like, but you may need help to get there. Browse featured organizations, websites, courses, guides, incentives, and tools to help you on your way.</p>
',
          'format' => 'filtered_html',
        ),
      ),
    ),
    'field_pane_style' => array(
      'und' => array(
        0 => array(
          'tid' => '185',
        ),
      ),
    ),
    'field_three_ctas' => array(
      'und' => array(
        0 => array(
          'value' => 24,
          'revision_id' => 24,
        ),
        1 => array(
          'value' => 25,
          'revision_id' => 25,
        ),
        2 => array(
          'value' => 26,
          'revision_id' => 26,
        ),
      ),
    ),
    'rdf_mapping' => array(),
  );
  return $fpps;
}