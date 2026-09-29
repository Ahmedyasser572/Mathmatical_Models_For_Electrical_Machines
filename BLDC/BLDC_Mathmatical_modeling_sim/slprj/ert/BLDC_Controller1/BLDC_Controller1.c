/*
 * File: BLDC_Controller1.c
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

#include "BLDC_Controller1.h"
#include "rtwtypes.h"

/* Output and update for referenced model: 'BLDC_Controller1' */
void BLDC_Controller1(const boolean_T rtu_hall_signals[3], const real_T rtu_Emf
                      [3], const boolean_T *rtu_control_signal, boolean_T
                      *rty_g1, boolean_T *rty_g2, boolean_T *rty_g3, boolean_T
                      *rty_g4, boolean_T *rty_g5, boolean_T *rty_g6,
                      BLDC_Controller1_DW_f *localDW)
{
  boolean_T rtb_NOT;

  /* Logic: '<Root>/NOT' */
  rtb_NOT = !(*rtu_control_signal);

  /* Outputs for Enabled SubSystem: '<Root>/sensorless_control' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (rtb_NOT) {
    /* Logic: '<S3>/Logical Operator' incorporates:
     *  Constant: '<S14>/Constant'
     *  Constant: '<S15>/Constant'
     *  RelationalOperator: '<S14>/Compare'
     *  RelationalOperator: '<S15>/Compare'
     */
    localDW->LogicalOperator = ((rtu_Emf[0] > 0.0) && (rtu_Emf[1] >= 0.0));

    /* Logic: '<S3>/Logical Operator5' incorporates:
     *  Constant: '<S16>/Constant'
     *  Constant: '<S17>/Constant'
     *  RelationalOperator: '<S16>/Compare'
     *  RelationalOperator: '<S17>/Compare'
     */
    localDW->LogicalOperator5 = ((rtu_Emf[1] > 0.0) && (rtu_Emf[2] >= 0.0));

    /* Logic: '<S3>/Logical Operator1' incorporates:
     *  Constant: '<S18>/Constant'
     *  Constant: '<S19>/Constant'
     *  RelationalOperator: '<S18>/Compare'
     *  RelationalOperator: '<S19>/Compare'
     */
    localDW->LogicalOperator1 = ((rtu_Emf[0] <= 0.0) && (rtu_Emf[1] < 0.0));

    /* Logic: '<S3>/Logical Operator2' incorporates:
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  RelationalOperator: '<S20>/Compare'
     *  RelationalOperator: '<S21>/Compare'
     */
    localDW->LogicalOperator2 = ((rtu_Emf[0] <= 0.0) && (rtu_Emf[2] > 0.0));

    /* Logic: '<S3>/Logical Operator3' incorporates:
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Constant'
     *  RelationalOperator: '<S22>/Compare'
     *  RelationalOperator: '<S23>/Compare'
     */
    localDW->LogicalOperator3 = ((rtu_Emf[0] > 0.0) && (rtu_Emf[2] <= 0.0));

    /* Logic: '<S3>/Logical Operator4' incorporates:
     *  Constant: '<S24>/Constant'
     *  Constant: '<S25>/Constant'
     *  RelationalOperator: '<S24>/Compare'
     *  RelationalOperator: '<S25>/Compare'
     */
    localDW->LogicalOperator4 = ((rtu_Emf[1] <= 0.0) && (rtu_Emf[2] < 0.0));
  }

  /* End of Outputs for SubSystem: '<Root>/sensorless_control' */

  /* Outputs for Enabled SubSystem: '<Root>/sensored_control' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  /* If: '<S1>/If' */
  if (*rtu_control_signal) {
    int32_T rtb_Sum3;
    boolean_T rtb_LogicalOperator1_idx_0;
    boolean_T rtb_LogicalOperator1_idx_1;
    boolean_T rtb_LogicalOperator1_idx_2;
    boolean_T rtb_LogicalOperator7;

    /* Logic: '<S6>/Logical Operator1' */
    rtb_LogicalOperator1_idx_0 = !rtu_hall_signals[0];
    rtb_LogicalOperator1_idx_1 = !rtu_hall_signals[1];
    rtb_LogicalOperator1_idx_2 = !rtu_hall_signals[2];

    /* Logic: '<S6>/Logical Operator2' */
    rtb_NOT = ((rtu_hall_signals[0]) && rtb_LogicalOperator1_idx_1);

    /* Logic: '<S6>/Logical Operator5' */
    rtb_LogicalOperator7 = (rtb_LogicalOperator1_idx_0 && (rtu_hall_signals[1]));

    /* Sum: '<S6>/Sum2' */
    rtb_Sum3 = rtb_NOT - rtb_LogicalOperator7;

    /* RelationalOperator: '<S8>/Compare' incorporates:
     *  Constant: '<S8>/Constant'
     */
    localDW->Compare = (rtb_Sum3 > 0);

    /* RelationalOperator: '<S11>/Compare' incorporates:
     *  Constant: '<S11>/Constant'
     */
    localDW->Compare_a = (rtb_Sum3 < 0);

    /* Logic: '<S6>/Logical Operator3' */
    rtb_NOT = ((rtu_hall_signals[1]) && rtb_LogicalOperator1_idx_2);

    /* Logic: '<S6>/Logical Operator6' */
    rtb_LogicalOperator7 = (rtb_LogicalOperator1_idx_1 && (rtu_hall_signals[2]));

    /* Sum: '<S6>/Sum1' */
    rtb_Sum3 = rtb_NOT - rtb_LogicalOperator7;

    /* RelationalOperator: '<S9>/Compare' incorporates:
     *  Constant: '<S9>/Constant'
     */
    localDW->Compare_b = (rtb_Sum3 > 0);

    /* RelationalOperator: '<S12>/Compare' incorporates:
     *  Constant: '<S12>/Constant'
     */
    localDW->Compare_k = (rtb_Sum3 < 0);

    /* Logic: '<S6>/Logical Operator4' */
    rtb_NOT = (rtb_LogicalOperator1_idx_0 && (rtu_hall_signals[2]));

    /* Logic: '<S6>/Logical Operator7' */
    rtb_LogicalOperator7 = ((rtu_hall_signals[0]) && rtb_LogicalOperator1_idx_2);

    /* Sum: '<S6>/Sum3' */
    rtb_Sum3 = rtb_NOT - rtb_LogicalOperator7;

    /* RelationalOperator: '<S10>/Compare' incorporates:
     *  Constant: '<S10>/Constant'
     */
    localDW->Compare_j = (rtb_Sum3 > 0);

    /* RelationalOperator: '<S13>/Compare' incorporates:
     *  Constant: '<S13>/Constant'
     */
    localDW->Compare_kl = (rtb_Sum3 < 0);

    /* Outputs for IfAction SubSystem: '<S1>/If_Action' incorporates:
     *  ActionPort: '<S4>/Action_Port'
     */
    /* SignalConversion generated from: '<S4>/Out1' */
    *rty_g1 = localDW->Compare;

    /* SignalConversion generated from: '<S4>/Out1' */
    *rty_g2 = localDW->Compare_a;

    /* SignalConversion generated from: '<S4>/Out1' */
    *rty_g3 = localDW->Compare_b;

    /* SignalConversion generated from: '<S4>/Out1' */
    *rty_g4 = localDW->Compare_k;

    /* SignalConversion generated from: '<S4>/Out1' */
    *rty_g5 = localDW->Compare_j;

    /* SignalConversion generated from: '<S4>/Out1' */
    *rty_g6 = localDW->Compare_kl;

    /* End of Outputs for SubSystem: '<S1>/If_Action' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/elseif_Action' incorporates:
     *  ActionPort: '<S5>/Action_Port'
     */
    /* SignalConversion generated from: '<S5>/Out1' */
    *rty_g1 = localDW->LogicalOperator;

    /* SignalConversion generated from: '<S5>/Out1' */
    *rty_g2 = localDW->LogicalOperator1;

    /* SignalConversion generated from: '<S5>/Out1' */
    *rty_g3 = localDW->LogicalOperator2;

    /* SignalConversion generated from: '<S5>/Out1' */
    *rty_g4 = localDW->LogicalOperator3;

    /* SignalConversion generated from: '<S5>/Out1' */
    *rty_g5 = localDW->LogicalOperator4;

    /* SignalConversion generated from: '<S5>/Out1' */
    *rty_g6 = localDW->LogicalOperator5;

    /* End of Outputs for SubSystem: '<S1>/elseif_Action' */
  }

  /* End of If: '<S1>/If' */
  /* End of Outputs for SubSystem: '<Root>/sensored_control' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
