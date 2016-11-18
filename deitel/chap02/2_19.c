/** 
 *  @file    2_19.c
 *  @author  Ibar Romay 
 *  @github  rowmatrix  
 *  @date    11/18/2016 
 *  
 *  @brief arithmetic, largest value, and smallest value of 3 integers
 *
 *
 */

#include <stdio.h>

int main( void )
{
    int num1;
    int num2;
    int num3;

    printf("Input three different integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    int sum = num1 + num2 + num3;
    printf("Sum is %d\n", sum);

    int average = sum / 3;
    printf("Average is %d\n", average);

    int product = num1 * num2 * num3;
    printf("Product is %d\n", product);

    int smallest;
    int largest;

    /* find smallest int */ 
    if (num1 < num2 && num1 < num3)
    {
        smallest = num1;
    }
    if (num2 < num1 && num2 < num3)
    {
        smallest = num2;
    }
    else 
    {
        smallest = num3;
    }
    printf("Smallest is %d\n", smallest);

    /* find largest int */
    if (num1 > num2 && num1 > num3)
    {
        largest = num1;
    }
    if (num2 > num1 && num2 > num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }
    printf("Largest is %d\n", largest);

    return 0;
}