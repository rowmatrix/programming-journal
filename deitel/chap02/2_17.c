/** 
 *  @file    2_17.c
 *  @author  Ibar Romay 
 *  @github  rowmatrix  
 *  @date    11/18/2016 
 *  
 *  @brief print numbers 1-4 on same line
 *
 *
 */

#include <stdio.h>

int main( void )
{
    /* (a) one printf statement with no conversion specifiers */
    printf("1 2 3 4\n");

    /* (b) one printf statement with four conversion specifiers */
    printf("%d %d %d %d\n", 1,2,3,4);

    /* (c) four printf statements */
    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");

    return 0;
}