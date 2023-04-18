<?php

/**
 * @file
 * Provides Views data for farm_calendar.module.
 */

/**
 * Implements hook_views_data_alter().
 */
function farm_calendar_views_data_alter(array &$data) {

  // Provide a farm_calendar_log_status_machine_name field handler for log
  // status machine names.
  if (isset($data['log_field_data'])) {
    $data['log_field_data']['farm_calendar_log_status_machine_name'] = [
      'title' => t('Log status machine name (for farmOS Calendar)'),
      'help' => t('Machine name of the log status.'),
      'field' => [
        'field' => 'status',
        'id' => 'farm_calendar_log_status_machine_name',
      ],
    ];
  }
}
