/*
 * File: rtwtypes.h
 *
 * Code generated for Simulink model 'Buck_Chopper'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Aug 31 22:54:18 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTWTYPES_H
#define RTWTYPES_H
#include "tmwtypes.h"
#ifndef POINTER_T
#define POINTER_T

typedef void * pointer_T;

#endif

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

#ifndef INT64_T
#define INT64_T

typedef long long int64_T;

#define MAX_int64_T                    ((int64_T)(9223372036854775807LL))
#define MIN_int64_T                    ((int64_T)(-9223372036854775807LL-1LL))
#endif

#ifndef UINT64_T
#define UINT64_T

typedef unsigned long long uint64_T;

#define MAX_uint64_T                   ((uint64_T)(0xFFFFFFFFFFFFFFFFULL))
#endif
#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
