/*
 * =====================================================================================
 *
 *       Filename:  Sensor.hh
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/17/2018 12:46:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef Senor_H
#define Senor_H
/* 
 */
typedef struct Sen{
  int filterFrequency;
  int updateFrequency;
  int value ;
  
}Sensor;
extern int Sensor_getFilterFrequency(const Sensor * const me );
/*
 * set filter Frequency for Sensor
 */
extern void Sensor_setFilterFrequecy(Sensor* const me ,int p_filterFrequency);
/*
 * get update Frequency from Sensor
 */
extern int Sensor_getUpdateFrequency(const Sensor* const me);
/*
 * set Frequency update for Senor
 */
extern void Sensor_setUpdateFrequency(Sensor* const me ,int p_updateFrequency);
/*
 *get value from Senor
 */
extern int Sensor_getValue(const Sensor* const me);
/*
 *creat Senor instance
 */
extern Sensor * Sensor_Create(void);
/*
 *destroy Sensor instance
 */
extern void Sensor_Destroy(Sensor* const me ); /* */

/* 
 */
#endif



