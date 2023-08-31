/*
 * File: BuckBoost_Chopper.h
 *
 * Code generated for Simulink model 'BuckBoost_Chopper'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Aug 31 11:29:55 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BuckBoost_Chopper_h_
#define RTW_HEADER_BuckBoost_Chopper_h_
#include <stddef.h>
#include <string.h>
#ifndef BuckBoost_Chopper_COMMON_INCLUDES_
#define BuckBoost_Chopper_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                                 /* BuckBoost_Chopper_COMMON_INCLUDES_ */

#include "BuckBoost_Chopper_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T StateSpace_o1[3];             /* '<S21>/State-Space' */
  real_T StateSpace_o2[6];             /* '<S21>/State-Space' */
  real_T StateSpace_RWORK[2];          /* '<S21>/State-Space' */
  real_T PulseGenerator;               /* '<Root>/Pulse Generator' */
  int_T StateSpace_IWORK[23];          /* '<S21>/State-Space' */
  int_T StateSpace_MODE[4];            /* '<S21>/State-Space' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  void *StateSpace_PWORK[22];          /* '<S21>/State-Space' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T StateSpace_CSTATE[3];         /* '<S21>/State-Space' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T StateSpace_CSTATE[3];         /* '<S21>/State-Space' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T StateSpace_CSTATE[3];      /* '<S21>/State-Space' */
} XDis;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: Vf
   * Referenced by: '<S10>/eee'
   */
  real_T eee_Value;

  /* Expression: Amplitude
   * Referenced by: '<S9>/DC'
   */
  real_T DC_Value;

  /* Computed Parameter: StateSpace_P1_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P1_Size[2];

  /* Expression: S.Mg
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P1[180];

  /* Computed Parameter: StateSpace_P2_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P2_Size[2];

  /* Expression: [S.nb.x S.nb.u S.nb.y S.nb.s]
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P2[4];

  /* Computed Parameter: StateSpace_P3_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P3_Size[2];

  /* Expression: S.x0
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P3[3];

  /* Computed Parameter: StateSpace_P4_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P4_Size[2];

  /* Computed Parameter: StateSpace_P4
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P4[560];

  /* Computed Parameter: StateSpace_P5_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P5_Size[2];

  /* Expression: S.SwitchVf
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P5[6];

  /* Computed Parameter: StateSpace_P6_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P6_Size[2];

  /* Expression: S.SwitchType
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P6[3];

  /* Computed Parameter: StateSpace_P7_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P7_Size[2];

  /* Expression: S.SwitchGateInitialValue
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P7[3];

  /* Computed Parameter: StateSpace_P8_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P8_Size[2];

  /* Expression: S.SwitchTolerance
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P8[3];

  /* Computed Parameter: StateSpace_P9_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P9_Size[2];

  /* Expression: S.SaveMatrices
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P9;

  /* Computed Parameter: StateSpace_P10_Size
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P10_Size[2];

  /* Expression: S.BufferSize
   * Referenced by: '<S21>/State-Space'
   */
  real_T StateSpace_P10;

  /* Pooled Parameter (Expression: 0)
   * Referenced by:
   *   '<Root>/Pulse Generator'
   *   '<S10>/(gate)'
   *   '<S15>/(gate)'
   */
  real_T pooled1;
} ConstP;

/* Real-time Model Data Structure */
struct tag_RTM {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[3];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[4];
      struct _ssDWorkAuxRecord dWorkAux[4];
    } Sfcn0;
  } NonInlinedSFcns;

  X *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[3];
  real_T odeF[3][3];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Continuous states (default storage) */
extern X rtX;

/* Block signals and states (default storage) */
extern DW rtDW;

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Model entry point functions */
extern void BuckBoost_Chopper_initialize(void);
extern void BuckBoost_Chopper_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/do not delete this gain' : Unused code path elimination
 * Block '<S10>/Ron' : Unused code path elimination
 * Block '<S10>/Sum' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<S4>/Add' : Unused code path elimination
 * Block '<S15>/Ron' : Unused code path elimination
 * Block '<S15>/Sum' : Unused code path elimination
 * Block '<S15>/eee' : Unused code path elimination
 * Block '<S17>/Ron' : Unused code path elimination
 * Block '<S17>/Sum' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S5>/do not delete this gain' : Unused code path elimination
 * Block '<S6>/do not delete this gain' : Unused code path elimination
 * Block '<S17>/Data Type Conversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'BuckBoost_Chopper'
 * '<S1>'   : 'BuckBoost_Chopper/Current Measurement'
 * '<S2>'   : 'BuckBoost_Chopper/DC Voltage Source'
 * '<S3>'   : 'BuckBoost_Chopper/Diode'
 * '<S4>'   : 'BuckBoost_Chopper/Mosfet'
 * '<S5>'   : 'BuckBoost_Chopper/Voltage Measurement'
 * '<S6>'   : 'BuckBoost_Chopper/Voltage Measurement1'
 * '<S7>'   : 'BuckBoost_Chopper/powergui'
 * '<S8>'   : 'BuckBoost_Chopper/Current Measurement/Model'
 * '<S9>'   : 'BuckBoost_Chopper/DC Voltage Source/Model'
 * '<S10>'  : 'BuckBoost_Chopper/Diode/Model'
 * '<S11>'  : 'BuckBoost_Chopper/Diode/Model/Measurement list'
 * '<S12>'  : 'BuckBoost_Chopper/Mosfet/Diode'
 * '<S13>'  : 'BuckBoost_Chopper/Mosfet/Ideal Switch'
 * '<S14>'  : 'BuckBoost_Chopper/Mosfet/Measurement list'
 * '<S15>'  : 'BuckBoost_Chopper/Mosfet/Diode/Model'
 * '<S16>'  : 'BuckBoost_Chopper/Mosfet/Diode/Model/Measurement list'
 * '<S17>'  : 'BuckBoost_Chopper/Mosfet/Ideal Switch/Model'
 * '<S18>'  : 'BuckBoost_Chopper/Mosfet/Ideal Switch/Model/Measurement list'
 * '<S19>'  : 'BuckBoost_Chopper/Voltage Measurement/Model'
 * '<S20>'  : 'BuckBoost_Chopper/Voltage Measurement1/Model'
 * '<S21>'  : 'BuckBoost_Chopper/powergui/EquivalentModel1'
 * '<S22>'  : 'BuckBoost_Chopper/powergui/EquivalentModel1/Gates'
 * '<S23>'  : 'BuckBoost_Chopper/powergui/EquivalentModel1/Sources'
 * '<S24>'  : 'BuckBoost_Chopper/powergui/EquivalentModel1/Status'
 * '<S25>'  : 'BuckBoost_Chopper/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_BuckBoost_Chopper_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
