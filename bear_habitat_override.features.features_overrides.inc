<?php
/**
 * @file
 * bear_habitat_override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bear_habitat_override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.habitat_disable_local.habitat_disable_local"]["DELETED"] = TRUE;
  $overrides["variable.habitat_disable_prod.value|0"] = 'fontyourface_ui';
  $overrides["variable.habitat_disable_prod.value|1"] = 'ds_ui';
  $overrides["variable.habitat_disable_prod.value|10"] = 'dblog';
  $overrides["variable.habitat_disable_prod.value|2"] = 'views_ui';
  $overrides["variable.habitat_disable_prod.value|3"] = 'feeds_ui';
  $overrides["variable.habitat_disable_prod.value|4"] = 'field_ui';
  $overrides["variable.habitat_disable_prod.value|5"] = 'rules_ui';
  $overrides["variable.habitat_disable_prod.value|6"] = 'habitat_ui';
  $overrides["variable.habitat_disable_prod.value|7"] = 'bear_habitat_dev';
  $overrides["variable.habitat_disable_prod.value|8"] = 'bear_habitat_test';
  $overrides["variable.habitat_disable_prod.value|9"] = 'devel';
  $overrides["variable.habitat_disable_test.value|0"] = 'fontyourface_ui';
  $overrides["variable.habitat_disable_test.value|1"] = 'ds_ui';
  $overrides["variable.habitat_disable_test.value|10"] = 'dblog';
  $overrides["variable.habitat_disable_test.value|2"] = 'views_ui';
  $overrides["variable.habitat_disable_test.value|3"] = 'feeds_ui';
  $overrides["variable.habitat_disable_test.value|4"] = 'field_ui';
  $overrides["variable.habitat_disable_test.value|5"] = 'rules_ui';
  $overrides["variable.habitat_disable_test.value|6"] = 'habitat_ui';
  $overrides["variable.habitat_disable_test.value|7"] = 'bear_habitat_dev';
  $overrides["variable.habitat_disable_test.value|8"] = 'bear_habitat_test';
  $overrides["variable.habitat_disable_test.value|9"] = 'devel';
  $overrides["variable.habitat_enable_local.habitat_enable_local"]["DELETED"] = TRUE;
  $overrides["variable.habitat_habitats.value|3"]["DELETED"] = TRUE;

 return $overrides;
}
