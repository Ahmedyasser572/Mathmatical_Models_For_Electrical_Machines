/*
 * File: BLDC_Controller1.h
 *
 * Code generated for Simulink model 'BLDC_Controller1'.
 *
 * Model version                  : 2.12
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jul  2 19:42:49 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef BLDC_Controller1_h_
#define BLDC_Controller1_h_
#ifndef BLDC_Controller1_COMMON_INCLUDES_
#define BLDC_Controller1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BLDC_Controller1_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for model 'BLDC_Controller1' */
typedef struct {
  boolean_T LogicalOperator;           /* '<S3>/Logical Operator' */
  boolean_T LogicalOperator5;          /* '<S3>/Logical Operator5' */
  boolean_T LogicalOperator1;          /* '<S3>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S3>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<S3>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S3>/Logical Operator4' */
  boolean_T Compare;                   /* '<S8>/Compare' */
  boolean_T Compare_a;                 /* '<S11>/Compare' */
  boolean_T Compare_b;                 /* '<S9>/Compare' */
  boolean_T Compare_k;                 /* '<S12>/Compare' */
  boolean_T Compare_j;                 /* '<S10>/Compare' */
  boolean_T Compare_kl;                /* '<S13>/Compare' */
} BLDC_Controller1_DW_f;

typedef struct {
  BLDC_Controller1_DW_f rtdw;
} BLDC_Controller1_MdlrefDW;

extern void BLDC_Controller1(const boolean_T rtu_hall_signals[3], const real_T
  rtu_Emf[3], const boolean_T *rtu_control_signal, boolean_T *rty_g1, boolean_T *
  rty_g2, boolean_T *rty_g3, boolean_T *rty_g4, boolean_T *rty_g5, boolean_T
  *rty_g6, BLDC_Controller1_DW_f *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BLDC_Controller1'
 * '<S1>'   : 'BLDC_Controller1/driving_method'
 * '<S2>'   : 'BLDC_Controller1/sensored_control'
 * '<S3>'   : 'BLDC_Controller1/sensorless_control'
 * '<S4>'   : 'BLDC_Controller1/driving_method/If_Action'
 * '<S5>'   : 'BLDC_Controller1/driving_method/elseif_Action'
 * '<S6>'   : 'BLDC_Controller1/sensored_control/Commutation Logic'
 * '<S7>'   : 'BLDC_Controller1/sensored_control/Gate Pulse'
 * '<S8>'   : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero'
 * '<S9>'   : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero1'
 * '<S10>'  : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero2'
 * '<S11>'  : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero3'
 * '<S12>'  : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero4'
 * '<S13>'  : 'BLDC_Controller1/sensored_control/Gate Pulse/Compare To Zero5'
 * '<S14>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero'
 * '<S15>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero1'
 * '<S16>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero10'
 * '<S17>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero11'
 * '<S18>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero2'
 * '<S19>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero3'
 * '<S20>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero4'
 * '<S21>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero5'
 * '<S22>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero6'
 * '<S23>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero7'
 * '<S24>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero8'
 * '<S25>'  : 'BLDC_Controller1/sensorless_control/Compare To Zero9'
 */

/*-
 * Requirements for '<Root>': BLDC_Controller1

 */
#endif                                 /* BLDC_Controller1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
