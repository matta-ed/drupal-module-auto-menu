<?php

/**
 * Simple Drupal module to auto-create/update disabled menu items for selected
 * content types.
 *
 * @author Matt Burns <matt.burns@ed.ac.uk>
 * @version 1.0.0
 * @package SOPA
 * @subpackage Auto Menu
 */

 /**
 * Displays the Auto Menu administraton form.
 *
 * @param array $form
 * @param array &$form_state
 * @return array
 */
if (! function_exists('auto_menu_display_settings_form')) {
  function auto_menu_display_settings_form($form, &$form_state) {

    $options = array();

    foreach (node_type_get_types() as $type) {
      $options[$type->type] = $type->name;
    }

    $form['auto_menu_content_types'] = array(
      '#description' => t('Select the content types which to force and disable menu items for.'),
      '#type' => 'checkboxes',
      '#title' => t('Content Type Selection'),
      '#default_value' => variable_get('auto_menu_content_types', array()),
      '#options' => $options,
    );

    return system_settings_form($form);

  }
}
