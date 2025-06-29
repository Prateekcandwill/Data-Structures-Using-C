/******************************************************************************
Pointer: It is a variable that stores the memory address of another variable
A pointer variable points to a data type (like float) of the same type, and is created with the * operator
To know the address of a variable a special operator called "Address of" Operator represented by & symbol 
*******************************************************************************/

// Program 3: Use of Indirection Operator

#include <stdio.h>

void main()
{
    int x, *px;
    px = &x;
    x = 16;
    
    printf("\nAddress of x using Address Operator = %u", &x);
    printf("\nAddress of x using Pointer = %u", px);
    printf("\nValue of x using Variable Name = %d", x);
    printf("\nValue of x using Address = %d", *(&x));
    printf("\nValue of x using Pointer = %d", *px);

    return 0;
}

/* Output:
Address of x using Address Operator = 3417555036
Address of x using Pointer = 3417555036
Value of x using Variable Name = 16
Value of x using Address = 16
Value of x using Pointer = 16 */
