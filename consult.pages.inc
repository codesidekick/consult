<?php
/**
 * @file
 * Page display callback for Consult module.
 */

/**
 * Page callback for consult interviews.
 *
 * @param ConsultInterview $interview
 *   The interview to render.
 *
 * @return array
 *   The render array.
 */
function consult_interview_page(ConsultInterview $interview) {
  $render = entity_view(CONSULT_INTERVIEW_ENTITY_NAME, array($interview));
  $output = render($render);

  return $output;
}
