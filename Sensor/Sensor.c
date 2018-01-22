/*
 * =====================================================================================
 *
 *       Filename:  Sensor.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/17/2018 01:18:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xiaoyuluoke (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Sensor.h"
#include "stdio.h"
#include "stdlib.h"
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_Init
 *  Description:  
 * =====================================================================================
 */
void
Sensor_Init (Sensor * const me )
{
  

}		/* -----  end of function Sensor_Init  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_Cleanup
 *  Description:  
 * =====================================================================================
 */
void
Sensor_Cleanup (Sensor * const me)
{

}		/* -----  end of function Sensor_Cleanup  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_getFilterFrequency
 *  Description:  
 * =====================================================================================
 */
int
Sensor_getFilterFrequency (const Sensor * const me )
{
  
  return me->filterFrequency ;

}		/* -----  end of function Sensor_getFilterFrequency  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_setFilterFrequency
 *  Description:  
 * =====================================================================================
 */
void
Sensor_setFilterFrequency (Sensor *const me ,int p_filterFrequency)
{

}		/* -----  end of function Sensor_setFilterFrequency  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_getUpdateFrequency
 *  Description:  
 * =====================================================================================
 */
int
Sensor_getUpdateFrequency (const Sensor *const me)
{
  return me->updateFrequency;
}		/* -----  end of function Sensor_getUpdateFrequency  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_setUpdateFrequency
 *  Description:  
 * =====================================================================================
 */
void
Sensor_setUpdateFrequency ( Sensor * const me,int p_updateFrequency )
{
  me->updateFrequency =p_updateFrequency;
}		/* -----  end of function Sensor_setUpdateFrequency  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_getValue
 *  Description:  
 * =====================================================================================
 */
int
Sensor_getValue ( const Sensor * const me )
{
  return me->value;
}		/* -----  end of function Sensor_getValue  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_Create
 *  Description:  
 * =====================================================================================
 */
Sensor *
Sensor_Create ( void )
{
  Sensor *me=(Sensor *) malloc ( sizeof(Sensor) );
  if ( me!=NULL ) {
    Sensor_Init(me);
  }
  return me ;
}	/* -----  end of function Sensor_Create  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Sensor_Destroy
 *  Description:  
 * =====================================================================================
 */
void
Sensor_Destroy ( Sensor * const me )
{

  if ( me!=NULL ) {
    Sensor_Cleanup(me);
    free(me);
  }
}		/* -----  end of function Sensor_Destroy  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  hhshs
 *  Description:  
 * =====================================================================================
 */

