/*
 * ultrasonic_sensor.h
 *
 *  Created on: Oct 14, 2022
 *      Author: fatima
 */

#ifndef ULTRASONIC_SENSOR_H_
#define ULTRASONIC_SENSOR_H_
#include"std_types.h"
/********************************************************
 *               definitions
 ********************************************************/
#define TRIGGER_PORT  PORTB_ID
#define TRIGGER_PIN    PIN5_ID

/********************************************************
 *              functions declaration
 ********************************************************/
void Ultrasonic_init(void);
void Ultrasonic_Trigger(void);
uint16 Ultrasonic_readDistance(void);
void Ultrasonic_edgeProcessing(void);

#endif /* ULTRASONIC_SENSOR_H_ */
