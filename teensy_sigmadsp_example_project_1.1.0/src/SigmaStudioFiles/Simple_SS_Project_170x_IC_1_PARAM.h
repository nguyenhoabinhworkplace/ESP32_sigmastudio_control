/*
 * File:           C:\Users\jberlin\OneDrive - Analog Devices, Inc\SigmaDSP with Microcontrollers\SIMPLE SigmaDSP Teensy Project\lib\SigmaStudio\Simple_SS_Project_170x_IC_1_PARAM.h
 *
 * Created:        Thursday, April 2, 2020 12:04:09 PM
 * Description:    Simple_SS_Project_170x:IC 1 parameter RAM definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2020 Analog Devices, Inc. All rights reserved.
 */
#ifndef __SIMPLE_SS_PROJECT_170X_IC_1_PARAM_H__
#define __SIMPLE_SS_PROJECT_170X_IC_1_PARAM_H__


/* Module LED_Pulse - Pulse with dynamic duty cycle*/
#define MOD_LED_PULSE_COUNT                            4
#define MOD_LED_PULSE_DEVICE                           "IC1"
#define MOD_LED_PULSE_ALG0_FREQ_STEP_ADDR              0
#define MOD_LED_PULSE_ALG0_FREQ_STEP_FIXPT             0x000000AE
#define MOD_LED_PULSE_ALG0_FREQ_STEP_VALUE             SIGMASTUDIOTYPE_FIXPOINT_CONVERT(2.08333333333333E-05)
#define MOD_LED_PULSE_ALG0_FREQ_STEP_TYPE              SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LED_PULSE_ALG0_TH_ADDR                     1
#define MOD_LED_PULSE_ALG0_TH_FIXPT                    0x00400000
#define MOD_LED_PULSE_ALG0_TH_VALUE                    SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_LED_PULSE_ALG0_TH_TYPE                     SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LED_PULSE_ALG0_ON_ADDR                     2
#define MOD_LED_PULSE_ALG0_ON_FIXPT                    0x00800000
#define MOD_LED_PULSE_ALG0_ON_VALUE                    SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_LED_PULSE_ALG0_ON_TYPE                     SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LED_PULSE_ALG0_ISROUNDED_ADDR              3
#define MOD_LED_PULSE_ALG0_ISROUNDED_FIXPT             0x00000000
#define MOD_LED_PULSE_ALG0_ISROUNDED_VALUE             SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_LED_PULSE_ALG0_ISROUNDED_TYPE              SIGMASTUDIOTYPE_FIXPOINT

/* Module SW vol 1 - Single SW slew vol (adjustable)*/
#define MOD_SWVOL1_COUNT                               2
#define MOD_SWVOL1_DEVICE                              "IC1"
#define MOD_SWVOL1_ALG0_TARGET_ADDR                    4
#define MOD_SWVOL1_ALG0_TARGET_FIXPT                   0x00800000
#define MOD_SWVOL1_ALG0_TARGET_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_SWVOL1_ALG0_TARGET_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_SWVOL1_ALG0_STEP_ADDR                      5
#define MOD_SWVOL1_ALG0_STEP_FIXPT                     0x00000800
#define MOD_SWVOL1_ALG0_STEP_VALUE                     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.000244140625)
#define MOD_SWVOL1_ALG0_STEP_TYPE                      SIGMASTUDIOTYPE_FIXPOINT

/* Module Left_Filter - General (2nd order)*/
#define MOD_LEFT_FILTER_COUNT                          5
#define MOD_LEFT_FILTER_DEVICE                         "IC1"
#define MOD_LEFT_FILTER_ALG0_STAGE0_B0_ADDR            6
#define MOD_LEFT_FILTER_ALG0_STAGE0_B0_FIXPT           0x00800000
#define MOD_LEFT_FILTER_ALG0_STAGE0_B0_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_LEFT_FILTER_ALG0_STAGE0_B0_TYPE            SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LEFT_FILTER_ALG0_STAGE0_B1_ADDR            7
#define MOD_LEFT_FILTER_ALG0_STAGE0_B1_FIXPT           0x00000000
#define MOD_LEFT_FILTER_ALG0_STAGE0_B1_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_LEFT_FILTER_ALG0_STAGE0_B1_TYPE            SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LEFT_FILTER_ALG0_STAGE0_B2_ADDR            8
#define MOD_LEFT_FILTER_ALG0_STAGE0_B2_FIXPT           0x00000000
#define MOD_LEFT_FILTER_ALG0_STAGE0_B2_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_LEFT_FILTER_ALG0_STAGE0_B2_TYPE            SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LEFT_FILTER_ALG0_STAGE0_A0_ADDR            9
#define MOD_LEFT_FILTER_ALG0_STAGE0_A0_FIXPT           0x00000000
#define MOD_LEFT_FILTER_ALG0_STAGE0_A0_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_LEFT_FILTER_ALG0_STAGE0_A0_TYPE            SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LEFT_FILTER_ALG0_STAGE0_A1_ADDR            10
#define MOD_LEFT_FILTER_ALG0_STAGE0_A1_FIXPT           0x00000000
#define MOD_LEFT_FILTER_ALG0_STAGE0_A1_VALUE           SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_LEFT_FILTER_ALG0_STAGE0_A1_TYPE            SIGMASTUDIOTYPE_FIXPOINT

/* Module Right_Filter - General (2nd order)*/
#define MOD_RIGHT_FILTER_COUNT                         5
#define MOD_RIGHT_FILTER_DEVICE                        "IC1"
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B0_ADDR           11
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B0_FIXPT          0x00800000
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B0_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B0_TYPE           SIGMASTUDIOTYPE_FIXPOINT
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B1_ADDR           12
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B1_FIXPT          0x00000000
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B1_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B1_TYPE           SIGMASTUDIOTYPE_FIXPOINT
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B2_ADDR           13
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B2_FIXPT          0x00000000
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B2_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_RIGHT_FILTER_ALG0_STAGE0_B2_TYPE           SIGMASTUDIOTYPE_FIXPOINT
#define MOD_RIGHT_FILTER_ALG0_STAGE0_A0_ADDR           14
#define MOD_RIGHT_FILTER_ALG0_STAGE0_A0_FIXPT          0x00000000
#define MOD_RIGHT_FILTER_ALG0_STAGE0_A0_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_RIGHT_FILTER_ALG0_STAGE0_A0_TYPE           SIGMASTUDIOTYPE_FIXPOINT
#define MOD_RIGHT_FILTER_ALG0_STAGE0_A1_ADDR           15
#define MOD_RIGHT_FILTER_ALG0_STAGE0_A1_FIXPT          0x00000000
#define MOD_RIGHT_FILTER_ALG0_STAGE0_A1_VALUE          SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_RIGHT_FILTER_ALG0_STAGE0_A1_TYPE           SIGMASTUDIOTYPE_FIXPOINT

/* Module ZeroComp1 - Zero Comparator*/
#define MOD_ZEROCOMP1_COUNT                            1
#define MOD_ZEROCOMP1_DEVICE                           "IC1"
#define MOD_ZEROCOMP1_OUTPUT1_ADDR                     16
#define MOD_ZEROCOMP1_OUTPUT1_FIXPT                    0x00000001
#define MOD_ZEROCOMP1_OUTPUT1_VALUE                    SIGMASTUDIOTYPE_INTEGER_CONVERT(1)
#define MOD_ZEROCOMP1_OUTPUT1_TYPE                     SIGMASTUDIOTYPE_INTEGER

#endif
