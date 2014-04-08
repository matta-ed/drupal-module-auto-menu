<?php

/**
 * SOPA Auto Menu
 *
 * Simple Drupal module to auto-create/update disabled menu items for selected
 * content types.
 *
 * @copyright Copyright (c) 2014, The University of Edinburgh
 * @author Matt Burns <matt.burns@ed.ac.uk>
 * @version 1.0.0
 * @package SOPA
 * @subpackage SOPA Auto Menu
 */

 /**
 * Displays the SOPA Auto Menu administraton form.
 *
 * @param array $form
 * @param array &$form_state
 * @return array
 */
if (! function_exists('sopa_auto_menu_display_settings_form')) {
  function sopa_auto_menu_display_settings_form($form, &$form_state) {

    $options = array();

    foreach (node_type_get_types() as $type) {
      $options[$type->type] = $type->name;
    }

    $form['sopa_auto_menu_content_types'] = array(
      '#description' => t('Select the content types which to force and disable menu items for.'),
      '#type' => 'checkboxes',
      '#title' => t('Content Type Selection'),
      '#default_value' => variable_get('sopa_auto_menu_content_types', array()),
      '#options' => $options,
    );

    return system_settings_form($form);

  }
}
