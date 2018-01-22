/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2018 09:42:09 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xiaoyuluoke (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "stdio.h"
#include "stdlib.h"
#include "queue.h"
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int
main ( void)
{
  int j,k,h,t;
/*
 * test normal queue
 */
  Queue * myQ;
  myQ=Queue_Create();
  k=1000;

  for ( j=0; j<QUEUE_SIZE; j++ ) {
    h=myQ->head;
    myQ->insert(myQ,k);
    printf ( "inserting %d at position %d ,size= %d\n",k--,h,myQ->getSize(myQ) );
  }
  printf ( "Inserted %d elements\n",myQ->getSize(myQ) );
  for(j=0;j<QUEUE_SIZE;j++)
  {
    t=myQ->tail;
    k=myQ->remove(myQ);
    printf ( "REMOVEING %d at position %d,size=%d\n",k,t,myQ->getSize(myQ) );
  }
  printf ( "Last item removed =%d\n",k );
  printf ( "Current queue size%d\n",myQ->getSize(myQ) );
  puts("Queue test program");
  EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

