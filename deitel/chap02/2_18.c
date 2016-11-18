/** 
 *  @file    2_18.c
 *  @author  Ibar Romay 
 *  @github  rowmatrix  
 *  @date    11/18/2016 
 *  
 *  @brief enter two ints, compare each
 *
 *
 */

#include <stdio.h>

int main( void )
{
    int num1;
    int num2;

    printf("Enter two integers separated by space: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is larger.\n", num1);
    }
    else if (num1 == num2)
    {
        printf("These numbers are equal.\n");
    }
    else 
    {
        printf("%d is larger.\n", num2);
    }

    return 0;
}