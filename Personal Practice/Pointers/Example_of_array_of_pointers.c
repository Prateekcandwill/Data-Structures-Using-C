/******************************************************************************
Every element of this array can be used to store a pointer
*******************************************************************************/

//Program-6: Example of Array of Pointers

#include <stdio.h>

void main()
{
    int *arr[4], a=8, b= 6, c=7, d=4, i;
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    arr[3]=&d;
    for(i=0; i<4; i++)
        printf("\nNumber = %d", *arr[i]);
}

/* Output:
Number = 8
Number = 6
Number = 7
Number = 4 */
