/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:40:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xiaoyuluoke (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include	<stdlib.h>
#include "stdio.h"
#include "test.h"
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
tt ttf;
int
main ( int argc, char *argv[] )
{
  ttf.a=10;
  ttf.b=20;
  ttf.c=30;
  printf ( "Hello World!\n" );
  printf ( "ttf.a %d\n",ttf.a );
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

