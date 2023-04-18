<?php

namespace Drupal\farm_calendar\Plugin\views\field;

use Drupal\views\Plugin\views\field\MachineName;

/**
 * Field handler for log status machine name.
 *
 * The State Machine module does not provide a Views field handler for the
 * machine name of log status, only the label. We provide our own handler as a
 * temporary workaround.
 * @todo Remove this favor of upstream handler when available.
 *
 * @ViewsField("farm_calendar_log_status_machine_name")
 */
class LogStatusMachineName extends MachineName {

}
