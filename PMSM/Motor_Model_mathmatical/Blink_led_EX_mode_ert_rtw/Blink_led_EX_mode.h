/*
 * File: Blink_led_EX_mode.h
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

#ifndef Blink_led_EX_mode_h_
#define Blink_led_EX_mode_h_
#ifndef Blink_led_EX_mode_COMMON_INCLUDES_
#define Blink_led_EX_mode_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#endif                                 /* Blink_led_EX_mode_COMMON_INCLUDES_ */

#include <stddef.h>
#include "Blink_led_EX_mode_types.h"
#include <string.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T DigitalOutput_FRAC_LEN;      /* '<Root>/Digital Output' */
  int32_T DigitalOutput1_FRAC_LEN;     /* '<Root>/Digital Output1' */
} DW_Blink_led_EX_mode_T;

/* Real-time Model Data Structure */
struct tag_RTM_Blink_led_EX_mode_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Blink_led_EX_mode_T Blink_led_EX_mode_DW;

/* Model entry point functions */
extern void Blink_led_EX_mode_initialize(void);
extern void Blink_led_EX_mode_step(void);
extern void Blink_led_EX_mode_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Blink_led_EX_mode_T *const Blink_led_EX_mode_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

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
 * '<Root>' : 'Blink_led_EX_mode'
 */
#endif                                 /* Blink_led_EX_mode_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
