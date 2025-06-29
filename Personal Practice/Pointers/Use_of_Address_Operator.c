/******************************************************************************
Pointer: It is a variable that stores the memory address of another variable
A pointer variable points to a data type (like float) of the same type, and is created with the * operator
To know the address of a variable a special operator called "Address of" Operator represented by & symbol 
*******************************************************************************/

// Program 1: Use of Address Operator

#include <stdio.h>

void main()
{
    int x = 16;
    
    printf("Address of x = %u", &x);
    printf("value of x = %d", &x);

    return 0;
}

// Output: Address of x = 2261415268value of x = -2033552028
