/*
 * =====================================================================================
 *
 *       Filename:  cachedQueue.h
 *
 *    Description:  
 *
 *
 *        Version:  1.0
 *        Created:  01/22/2018 04:05:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xiaoyuluoke (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifdef  CACHEDQUEUE_H_
#define CACHEDQUEUE_H_      /*  */
/*
 * include 
 */
#include "queue.h"
/*
 * data struct define
 */
typedef struct CachedQueue CachedQueue;
struct CachedQueue{
  Queue *queue ; /* base class*/
/*
 * new attributes
 */
  char fillename[80];
  int numberElementsOnDisk;
/*
 * aggregation in subclass
 */
  Queue *outputQueue;
/*
 * inherited virtual function
 */
  int (*isFull)(CachedQueue* const me);
  int (*isEmpty)(CachedQueue* const me);
  int (*getSize)(CachedQueue* const me);
  void (*insert)(CachedQueue* const me);
  int (*remove)(CachedQueue* const me,int k);
/*
 * new virtual function
 */
  void (*flush)(CachedQueue* const me);
  void (*load)(CachedQueue* const me);
};
/*
 * constructor and destructor
 */
void CachedQueue_Init(CachedQueue* const me,char*fName,
      int (*isFullfunction)(CachedQueue* const me),
      int (*isEmptyfunction)(CachedQueue* const me),
      int (*getSizefunction)(CachedQueue* const me),
      void (*insertfunction)(CachedQueue* const me,int,k),
      int (*removefunction)(CachedQueue* const me),
      void (*flushfunction)(CachedQueue* const me),
      void (*loadfunction)(CachedQueue* const me) );

/* 
 */
#endif     /* -----  not CACHEDQUEUE_H_  ----- */
