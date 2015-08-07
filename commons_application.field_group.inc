<?php
/**
 * @file
 * commons_application.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function commons_application_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cohort_morequestions|node|commons_application|form';
  $field_group->group_name = 'group_cohort_morequestions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'commons_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cohort additional questions',
    'weight' => '3',
    'children' => array(
      0 => 'field_describe_the_purpose_of_th',
      1 => 'field_tell_us_about_your_experie',
      2 => 'field_what_was_your_role_in_buil',
      3 => 'field_what_was_your_role_in_desi',
      4 => 'field_what_was_your_role_in_deve',
      5 => 'field_what_was_your_role_in_runn',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cohort-morequestions field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_cohort_morequestions|node|commons_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_howfrequentlyoncampus|node|commons_application|form';
  $field_group->group_name = 'group_howfrequentlyoncampus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'commons_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How frequently have you been involved in the following Social Innovation offerings on your campus? ',
    'weight' => '6',
    'children' => array(
      0 => 'field_other',
      1 => 'field_other_option',
      2 => 'field_courses',
      3 => 'field_research',
      4 => 'field_centers',
      5 => 'field_incubators',
      6 => 'field_fellowships',
      7 => 'field_social_entrepreneur_in_res',
      8 => 'field_study_abroad',
      9 => 'field_internships',
      10 => 'field_on_campus_conferences',
      11 => 'field_speaker_series',
      12 => 'field_competitions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-howfrequentlyoncampus field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_howfrequentlyoncampus|node|commons_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ranking|node|commons_application|form';
  $field_group->group_name = 'group_ranking';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'commons_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rank the following cohort offerings according to your interest in participating, from most interested to least. ',
    'weight' => '12',
    'children' => array(
      0 => 'field_choose_1_preference',
      1 => 'field_choose_2_preference',
      2 => 'field_choose_3_preference',
      3 => 'field_choose_4_preference',
      4 => 'field_choose_5_preference',
      5 => 'field_choose_6_preference',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ranking field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ranking|node|commons_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ratetheimportance|node|commons_application|form';
  $field_group->group_name = 'group_ratetheimportance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'commons_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rate the importance of each of the following to your definition of social innovation from 1-5, with 5 being the most important.',
    'weight' => '4',
    'children' => array(
      0 => 'field_a_sense_of_purpose_and_sel',
      1 => 'field_empathy_through_exposure_t',
      2 => 'field_experience_launching_or_op',
      3 => 'field_knowledge_of_financially_s',
      4 => 'field_skills_to_create_systems_c',
      5 => 'field_skills_to_identify_root_ca',
      6 => 'field_understanding_of_impact_me',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ratetheimportance field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ratetheimportance|node|commons_application|form'] = $field_group;

  return $export;
}
