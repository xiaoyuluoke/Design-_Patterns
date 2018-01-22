/*
 * =====================================================================================
 *
 *       Filename:  queue.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/18/2018 04:56:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xiaoyuluoke (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef  QUEUE_H_
#define  QUEUE_H_      /*  */
/*
 * queue 
 */
#define QUEUE_SIZE 100      /*  */
/*
 * class Queue 
 */
typedef struct Queue Queue ;
struct Queue
{
  int buffer[QUEUE_SIZE];  //where the data things are
  int head;
  int size;
  int tail;
  int (*isFull)(Queue  *const me);
  int (*isEmpty)(Queue *const me);
  int (*getSize)(Queue *const me);
  void (*insert)(Queue *const me ,int k);
  int (*remove)(Queue  *const me);
};
/* 
 * constructor and destructor 
 */
void Queue_Init(Queue *const me,
      int(*isFullfunction)(Queue  *const me),
      int(*isEmptyfunction)(Queue *const me),
      int(*getSizefunction)(Queue *const me),
      void(*insertfunction)(Queue *const me,int k ),
      int(*removefunction)(Queue  *const me)
      );
void Queue_Cleanup(Queue * const me);
/*
 * operator
 */
int Queue_isFull(Queue  *const me);
int Queue_isEmpty(Queue *const me);
int Queue_getSize(Queue *const me);
void Queue_insert(Queue *const me,int k);
int Queue_remove(Queue  *const me);

Queue *Queue_Create(void);
void Queue_Destroy(Queue *const me);


#endif     /* -----  not SS  ----- */
