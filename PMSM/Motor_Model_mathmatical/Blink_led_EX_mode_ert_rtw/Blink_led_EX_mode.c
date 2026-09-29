/*
 * File: Blink_led_EX_mode.c
 *
 * Code generated for Simulink model 'Blink_led_EX_mode'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sun Jan 25 21:37:32 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Blink_led_EX_mode.h"
#include <string.h>

/* Block states (default storage) */
DW_Blink_led_EX_mode_T Blink_led_EX_mode_DW;

/* Real-time model */
static RT_MODEL_Blink_led_EX_mode_T Blink_led_EX_mode_M_;
RT_MODEL_Blink_led_EX_mode_T *const Blink_led_EX_mode_M = &Blink_led_EX_mode_M_;

/* Model step function */
void Blink_led_EX_mode_step(void)
{
  /* S-Function (c280xgpio_do): '<Root>/Digital Output' incorporates:
   *  Constant: '<Root>/Constant'
   */
  {
    if ((1.0)) {
      GpioDataRegs.GPASET.bit.GPIO31 = 1U;
    } else {
      GpioDataRegs.GPACLEAR.bit.GPIO31 = 1U;
    }
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  {
    if ((1.0)) {
      GpioDataRegs.GPBSET.bit.GPIO34 = 1U;
    } else {
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1U;
    }
  }
}

/* Model initialize function */
void Blink_led_EX_mode_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Blink_led_EX_mode_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Blink_led_EX_mode_DW, 0,
                sizeof(DW_Blink_led_EX_mode_T));

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0x3FFFFFFFU;
  GpioCtrlRegs.GPADIR.all |= 0x80000000U;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCFU;
  GpioCtrlRegs.GPBDIR.all |= 0x4U;
  EDIS;
}

/* Model terminate function */
void Blink_led_EX_mode_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
