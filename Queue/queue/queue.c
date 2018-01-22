/*
 * =====================================================================================
 *
 *       Filename:  queue.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/19/2018 04:01:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xiaoyuluoke (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "stdio.h"
#include "queue.h"
#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_Init
 *  Description:  
 * =====================================================================================
 */
void
Queue_Init ( Queue *const me ,int (*isFullfunction)(Queue *const me),
      int (*isEmptyfunction)(Queue *const me),
      int (*getSizefunction)(Queue *const me),
      void (*insertfunction)(Queue *const me,int k),
      int (*removefunction)(Queue *const me))
{
/*
 * initialization attributes
 */
  me->head =0;
  me->size=0;
  me->tail=0;
 
/*
 * initialization member function pointer
 */
  me->isFull=isFullfunction;
  me->isEmpty=isFullfunction;
  me->getSize=getSizefunction;
  me->insert=insertfunction;
  me->remove=removefunction;

}		/* -----  end of function Queue_Init  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_Cleanup
 *  Description:  
 * =====================================================================================
 */
void
Queue_Cleanup ( Queue *const me )
{
   
}		/* -----  end of function Queue_Cleanup  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_isFull
 *  Description:  
 * =====================================================================================
 */
int
Queue_isFull ( Queue *const me )
{

  return ( me->head+1)%QUEUE_SIZE == me->tail;
}		/* -----  end of function Queue_isFull  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_isEmpty
 *  Description:  
 * =====================================================================================
 */
int
Queue_isEmpty ( Queue *const me )
{
  
  
  return (me->head == me->tail);
}		/* -----  end of function Queue_isEmpty  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_getSize
 *  Description:  
 * =====================================================================================
 */
int
Queue_getSize (Queue *const me )
{

  return me->size;
}		/* -----  end of function Queue_getSize  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_insert
 *  Description:  
 * =====================================================================================
 */
void
Queue_insert ( Queue *const me,int k )
{
  if(!me->isFull(me))
  {
    me->buffer[me->head]=k;
    me->head=(me->head+1)%QUEUE_SIZE;
    ++me->size;

  }
}		/* -----  end of function Queue_insert  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_remove
 *  Description:  
 * =====================================================================================
 */
int
Queue_remove ( Queue *const me )
{
  int value = -9999;
  
  if ( !me->isEmpty(me )) {
    value =me->buffer[me->tail];
    me->tail=(me->tail +1)%QUEUE_SIZE;
    -me->size;
  }
  return value;
}		/* -----  end of function Queue_remove  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_Create
 *  Description:  
 * =====================================================================================
 */
Queue*
Queue_Create ( void)
{
  Queue *me=(Queue *)malloc(sizeof(Queue));

  if ( me!=NULL ) {
    Queue_Init(me,Queue_isFull,
          Queue_isEmpty,
          Queue_getSize,
          Queue_insert,
          Queue_remove);
    
  }
  return me;
}		/* -----  end of function Queue_Create  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Queue_Destroy
 *  Description:  
 * =====================================================================================
 */
void
Queue_Destroy ( Queue * me )
{

  if ( me!=NULL ) {
    Queue_Cleanup(me);
  }
  free(me);
}		/* -----  end of function Queue_Destroy  ----- */
