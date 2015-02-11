<?php
/**
 * @file
 * bear_habitat_override.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function bear_habitat_override_strongarm_alter(&$data) {
  if (isset($data['habitat_disable_local'])) {
    unset($data['habitat_disable_local']);
  }
  if (isset($data['habitat_disable_prod'])) {
    $data['habitat_disable_prod']->value[0] = 'fontyourface_ui'; /* WAS: 'habitat_ui' */
    $data['habitat_disable_prod']->value[1] = 'ds_ui'; /* WAS: 'field_ui' */
    $data['habitat_disable_prod']->value[2] = 'views_ui'; /* WAS: 'devel' */
    $data['habitat_disable_prod']->value[3] = 'feeds_ui'; /* WAS: 'views_ui' */
    $data['habitat_disable_prod']->value[4] = 'field_ui'; /* WAS: 'bear_habitat_local' */
    $data['habitat_disable_prod']->value[5] = 'dblog'; /* WAS: '' */
    $data['habitat_disable_prod']->value[6] = 'rules_ui'; /* WAS: '' */
    $data['habitat_disable_prod']->value[7] = 'habitat_ui'; /* WAS: '' */
    $data['habitat_disable_prod']->value[8] = 'bear_habitat_dev'; /* WAS: '' */
    $data['habitat_disable_prod']->value[9] = 'devel'; /* WAS: '' */
  }
  if (isset($data['habitat_disable_test'])) {
    $data['habitat_disable_test']->value[0] = 'fontyourface_ui'; /* WAS: 'habitat_ui' */
    $data['habitat_disable_test']->value[1] = 'ds_ui'; /* WAS: 'field_ui' */
    $data['habitat_disable_test']->value[2] = 'views_ui'; /* WAS: 'devel' */
    $data['habitat_disable_test']->value[3] = 'feeds_ui'; /* WAS: 'views_ui' */
    $data['habitat_disable_test']->value[4] = 'field_ui'; /* WAS: 'bear_habitat_local' */
    $data['habitat_disable_test']->value[5] = 'dblog'; /* WAS: '' */
    $data['habitat_disable_test']->value[6] = 'rules_ui'; /* WAS: '' */
    $data['habitat_disable_test']->value[7] = 'habitat_ui'; /* WAS: '' */
    $data['habitat_disable_test']->value[8] = 'bear_habitat_dev'; /* WAS: '' */
    $data['habitat_disable_test']->value[9] = 'devel'; /* WAS: '' */
  }
  if (isset($data['habitat_enable_local'])) {
    unset($data['habitat_enable_local']);
  }
  if (isset($data['habitat_habitats'])) {
    unset($data['habitat_habitats']->value[3]);
  }
}
