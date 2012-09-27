<?php
/**
 * @file
 * demopoly_protest.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function demopoly_protest_field_default_fields() {
  $fields = array();

  // Exported field: 'protest-protest-field_address_geo'.
  $fields['protest-protest-field_address_geo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address_geo',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
            'format' => 'decimal_degrees',
            'labels' => 1,
          ),
          'type' => 'geofield_latlon',
          'weight' => '13',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_address_geo',
      'label' => 'address-geo',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(),
        'type' => 'geofield_latlon',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_address_postal'.
  $fields['protest-protest-field_address_postal'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address_postal',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => array(
        0 => array(
          'element_key' => 'protest|protest|field_address_postal|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'country' => 'AF',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '14',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '14',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_address_postal',
      'label' => 'address-postal',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'AD' => 'AD',
            'AE' => 'AE',
            'AF' => 'AF',
            'AG' => 'AG',
            'AI' => 'AI',
            'AL' => 'AL',
            'AM' => 'AM',
            'AN' => 'AN',
            'AO' => 'AO',
            'AQ' => 'AQ',
            'AR' => 'AR',
            'AS' => 'AS',
            'AT' => 'AT',
            'AU' => 'AU',
            'AW' => 'AW',
            'AX' => 'AX',
            'AZ' => 'AZ',
            'BA' => 'BA',
            'BB' => 'BB',
            'BD' => 'BD',
            'BE' => 'BE',
            'BF' => 'BF',
            'BG' => 'BG',
            'BH' => 'BH',
            'BI' => 'BI',
            'BJ' => 'BJ',
            'BL' => 'BL',
            'BM' => 'BM',
            'BN' => 'BN',
            'BO' => 'BO',
            'BR' => 'BR',
            'BS' => 'BS',
            'BT' => 'BT',
            'BV' => 'BV',
            'BW' => 'BW',
            'BY' => 'BY',
            'BZ' => 'BZ',
            'CA' => 'CA',
            'CC' => 'CC',
            'CD' => 'CD',
            'CF' => 'CF',
            'CG' => 'CG',
            'CH' => 'CH',
            'CI' => 'CI',
            'CK' => 'CK',
            'CL' => 'CL',
            'CM' => 'CM',
            'CN' => 'CN',
            'CO' => 'CO',
            'CR' => 'CR',
            'CU' => 'CU',
            'CV' => 'CV',
            'CW' => 'CW',
            'CX' => 'CX',
            'CY' => 'CY',
            'CZ' => 'CZ',
            'DE' => 'DE',
            'DJ' => 'DJ',
            'DK' => 'DK',
            'DM' => 'DM',
            'DO' => 'DO',
            'DZ' => 'DZ',
            'EC' => 'EC',
            'EE' => 'EE',
            'EG' => 'EG',
            'EH' => 'EH',
            'ER' => 'ER',
            'ES' => 'ES',
            'ET' => 'ET',
            'FI' => 'FI',
            'FJ' => 'FJ',
            'FK' => 'FK',
            'FM' => 'FM',
            'FO' => 'FO',
            'FR' => 'FR',
            'GA' => 'GA',
            'GB' => 'GB',
            'GD' => 'GD',
            'GE' => 'GE',
            'GF' => 'GF',
            'GG' => 'GG',
            'GH' => 'GH',
            'GI' => 'GI',
            'GL' => 'GL',
            'GM' => 'GM',
            'GN' => 'GN',
            'GP' => 'GP',
            'GQ' => 'GQ',
            'GR' => 'GR',
            'GS' => 'GS',
            'GT' => 'GT',
            'GU' => 'GU',
            'GW' => 'GW',
            'GY' => 'GY',
            'HK' => 'HK',
            'HM' => 'HM',
            'HN' => 'HN',
            'HR' => 'HR',
            'HT' => 'HT',
            'HU' => 'HU',
            'ID' => 'ID',
            'IE' => 'IE',
            'IL' => 'IL',
            'IM' => 'IM',
            'IN' => 'IN',
            'IO' => 'IO',
            'IQ' => 'IQ',
            'IR' => 'IR',
            'IS' => 'IS',
            'IT' => 'IT',
            'JE' => 'JE',
            'JM' => 'JM',
            'JO' => 'JO',
            'JP' => 'JP',
            'KE' => 'KE',
            'KG' => 'KG',
            'KH' => 'KH',
            'KI' => 'KI',
            'KM' => 'KM',
            'KN' => 'KN',
            'KP' => 'KP',
            'KR' => 'KR',
            'KW' => 'KW',
            'KY' => 'KY',
            'KZ' => 'KZ',
            'LA' => 'LA',
            'LB' => 'LB',
            'LC' => 'LC',
            'LI' => 'LI',
            'LK' => 'LK',
            'LR' => 'LR',
            'LS' => 'LS',
            'LT' => 'LT',
            'LU' => 'LU',
            'LV' => 'LV',
            'LY' => 'LY',
            'MA' => 'MA',
            'MC' => 'MC',
            'MD' => 'MD',
            'ME' => 'ME',
            'MF' => 'MF',
            'MG' => 'MG',
            'MH' => 'MH',
            'MK' => 'MK',
            'ML' => 'ML',
            'MM' => 'MM',
            'MN' => 'MN',
            'MO' => 'MO',
            'MP' => 'MP',
            'MQ' => 'MQ',
            'MR' => 'MR',
            'MS' => 'MS',
            'MT' => 'MT',
            'MU' => 'MU',
            'MV' => 'MV',
            'MW' => 'MW',
            'MX' => 'MX',
            'MY' => 'MY',
            'MZ' => 'MZ',
            'NA' => 'NA',
            'NC' => 'NC',
            'NE' => 'NE',
            'NF' => 'NF',
            'NG' => 'NG',
            'NI' => 'NI',
            'NL' => 'NL',
            'NO' => 'NO',
            'NP' => 'NP',
            'NR' => 'NR',
            'NU' => 'NU',
            'NZ' => 'NZ',
            'OM' => 'OM',
            'PA' => 'PA',
            'PE' => 'PE',
            'PF' => 'PF',
            'PG' => 'PG',
            'PH' => 'PH',
            'PK' => 'PK',
            'PL' => 'PL',
            'PM' => 'PM',
            'PN' => 'PN',
            'PR' => 'PR',
            'PS' => 'PS',
            'PT' => 'PT',
            'PW' => 'PW',
            'PY' => 'PY',
            'QA' => 'QA',
            'RE' => 'RE',
            'RO' => 'RO',
            'RS' => 'RS',
            'RU' => 'RU',
            'RW' => 'RW',
            'SA' => 'SA',
            'SB' => 'SB',
            'SC' => 'SC',
            'SD' => 'SD',
            'SE' => 'SE',
            'SG' => 'SG',
            'SH' => 'SH',
            'SI' => 'SI',
            'SJ' => 'SJ',
            'SK' => 'SK',
            'SL' => 'SL',
            'SM' => 'SM',
            'SN' => 'SN',
            'SO' => 'SO',
            'SR' => 'SR',
            'ST' => 'ST',
            'SV' => 'SV',
            'SY' => 'SY',
            'SZ' => 'SZ',
            'TC' => 'TC',
            'TD' => 'TD',
            'TF' => 'TF',
            'TG' => 'TG',
            'TH' => 'TH',
            'TJ' => 'TJ',
            'TK' => 'TK',
            'TL' => 'TL',
            'TM' => 'TM',
            'TN' => 'TN',
            'TO' => 'TO',
            'TR' => 'TR',
            'TT' => 'TT',
            'TV' => 'TV',
            'TW' => 'TW',
            'TZ' => 'TZ',
            'UA' => 'UA',
            'UG' => 'UG',
            'UM' => 'UM',
            'US' => 'US',
            'UY' => 'UY',
            'UZ' => 'UZ',
            'VA' => 'VA',
            'VC' => 'VC',
            'VE' => 'VE',
            'VG' => 'VG',
            'VI' => 'VI',
            'VN' => 'VN',
            'VU' => 'VU',
            'WF' => 'WF',
            'WS' => 'WS',
            'YE' => 'YE',
            'YT' => 'YT',
            'ZA' => 'ZA',
            'ZM' => 'ZM',
            'ZW' => 'ZW',
          ),
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-country' => 0,
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_date'.
  $fields['protest-protest-field_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'datestamp',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_date',
      'label' => 'Date',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '15',
          'input_format' => 'custom',
          'input_format_custom' => 'd-F-Y',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_download'.
  $fields['protest-protest-field_download'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_download',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'I allow other participants to download this picture.',
          0 => 'I don\'t allow other participants to download this picture.',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_download',
      'label' => 'Download',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_expressum'.
  $fields['protest-protest-field_expressum'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_expressum',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'I want my name and city to appear in the Expressum.',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_expressum',
      'label' => 'Expressum',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_firstname'.
  $fields['protest-protest-field_firstname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_firstname',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '20',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '5',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_firstname',
      'label' => 'First name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_licence'.
  $fields['protest-protest-field_licence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_licence',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'I am aware that by uploading a picture that picture is licensed under a <a href="http://creativecommons.org/licenses/by-nc-sa/3.0/de/" target="blank">Creative Commons-Attribution-NonCommerce-ShareALike 3.0 Germany Licence</a>.',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_licence',
      'label' => 'Licence - Creative Commons',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_newsletter'.
  $fields['protest-protest-field_newsletter'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_newsletter',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'If there is a newsletter, I want to get it.',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_newsletter',
      'label' => 'Newsletter',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_protest_context'.
  $fields['protest-protest-field_protest_context'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_protest_context',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'If you want to add some text, use this box. For instance you can describe the circumstances of your picture or you can set a link which leads to a personal project etc. This text will appear along with your public picture.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_protest_context',
      'label' => 'Picture Content Box',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_protest_image'.
  $fields['protest-protest-field_protest_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_protest_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'demopoly_imagestyle',
          'settings' => array(),
          'type' => 'demopoly_imagestyle',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'large',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'demopoly_imagestyle',
          'settings' => array(),
          'type' => 'demopoly_imagestyle',
          'weight' => '0',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'demopoly_imagestyle',
          'settings' => array(),
          'type' => 'demopoly_imagestyle',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_protest_image',
      'label' => 'Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '[current-user:uid]',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '800x600',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_protest_is_frontpage'.
  $fields['protest-protest-field_protest_is_frontpage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_protest_is_frontpage',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_protest_is_frontpage',
      'label' => 'Frontpage Picture',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'protest-protest-field_terms'.
  $fields['protest-protest-field_terms'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_terms',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'I agree to all terms and conditions (<a href="#">terms</a> /<a href="">conditions</a>)',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'protest',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '11',
        ),
      ),
      'entity_type' => 'protest',
      'field_name' => 'field_terms',
      'label' => 'Gerneral Terms and Conditions',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '15',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date');
  t('Download');
  t('Expressum');
  t('First name');
  t('Frontpage Picture');
  t('Gerneral Terms and Conditions');
  t('If you want to add some text, use this box. For instance you can describe the circumstances of your picture or you can set a link which leads to a personal project etc. This text will appear along with your public picture.');
  t('Image');
  t('Licence - Creative Commons');
  t('Newsletter');
  t('Picture Content Box');
  t('address-geo');
  t('address-postal');

  return $fields;
}
