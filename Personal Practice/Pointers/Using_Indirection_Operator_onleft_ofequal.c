/******************************************************************************
Unlike the Unary Operator an indirection operator can be used at the left of an assignment operator
*******************************************************************************/

// Program 4: Use of Indirection Operator on the left of equal to

#include <stdio.h>

void main()
{
    int num, result, *presult=NULL;     //Pointer declared presult
    presult = &result;
    
    printf("\nEnter a Number : ");
    scanf("%d", &num);
    *presult = num*num;                 //Value pointing to presult
    printf("\nSquare of the Number = %d", *presult);

    return 0;
}

/* Output:
Enter a Number : 5
Square of the Number = 25 */
