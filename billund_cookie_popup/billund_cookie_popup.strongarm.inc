<?php

/**
 * Implementation of hook_strongarm().
 */
function billund_cookie_popup_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_da';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 0,
    'popup_info' => array(
      'value' => '<h2>Vi bruger cookies på billundbib.dk.</h2>
Du accepterer brug af cookies når du klikker på hjemmesiden.<br />
Hvis du ikke vil tillade cookies - <a href=\'/cookies\'>se vejledning</a> og læs mere.',
      'format' => '2',
    ),
    'popup_agreed' => array(
      'value' => '<h2>Tak for du accepterede cookies</h2><p>Du kan nu skjule denne meddelelse eller <a href=\'/cookies\'>læse mere om cookies</a></p>',
      'format' => '2',
    ),
    'popup_agreed_enabled' => 1,
    'popup_link' => 'cookie',
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
  );
  $export['eu_cookie_compliance_da'] = $strongarm;

  return $export;
}
