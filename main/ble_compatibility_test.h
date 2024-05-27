/*
 * SPDX-FileCopyrightText: 2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Attributes State Machine */
enum
{
    IDX_SVC,
    
    IDX_CHAR_MQTT,
    IDX_CHAR_VAL_MQTT,
    IDX_CHAR_CFG_MQTT,

    HRS_IDX_NB,
};
