/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _EBIKE_APP_H_
#define _EBIKE_APP_H_

#include <stdint.h>
#include "main.h"

void ebike_app_controller (void);
void set_cruise_control_state (uint8_t value);
void ebike_app_cruise_control_stop (void);
uint8_t ebike_app_cruise_control_is_set (void);
uint8_t throttle_is_set (void);
uint8_t ebike_app_get_power_assist_control_mode (void);

#endif /* _EBIKE_APP_H_ */