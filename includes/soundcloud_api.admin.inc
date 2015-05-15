<?php

/**
 * Administration form for soundcloud api settings.
 *
 * @param $form
 * @param $form_state
 * @return mixed
 */
function soundcloud_api_admin_config($form, $form_state) {

  $form['soundcloud_api_client_id'] = array(
    '#type' => 'textfield',
    '#title' => t('API Client ID'),
    '#default_value' => variable_get('soundcloud_api_client_id', ''),
  );

  $form['soundcloud_api_client_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('API Client Secret'),
    '#default_value' => variable_get('soundcloud_api_client_secret', ''),
  );

  return system_settings_form($form);
}