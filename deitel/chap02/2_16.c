/** 
 *  @file    2_16.c
 *  @author  Ibar Romay 
 *  @github  rowmatrix  
 *  @date    11/18/2016 
 *  
 *  @brief prompts user for two integers and adds/subtract/multiply/divide those integers
 *
 *
 */

#include <stdio.h>

int main( void )
{
    /* user's ints */
    int num1;
    int num2;

    /* prompt */
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int rem = num1 % num2;

    printf("sum = %d\n", sum);
    printf("difference = %d\n", difference);
    printf("product = %d\n", product);
    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", rem);

    return 0;
}