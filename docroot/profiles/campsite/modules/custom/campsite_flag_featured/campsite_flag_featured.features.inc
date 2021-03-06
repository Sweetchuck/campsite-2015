<?php
/**
 * @file
 * campsite_flag_featured.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function campsite_flag_featured_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured attendees".
  $flags['featured_attendees'] = array(
    'entity_type' => 'user',
    'title' => 'Featured attendees',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Add this user to Featured attendees group',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove this user from Featured attendees group',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => '',
    'api_version' => 3,
    'module' => 'campsite_flag_featured',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
