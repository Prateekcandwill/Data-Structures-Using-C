/*Program-13: Call by Value and Call by Reference*/

#include<stdio.h>

void SquareByVal (int a)                /*Value received by normal variable*/
  { a=a*a;                              /*Value accessed in formal argument*/
  }
void SquareByRef (int *pa)              /*Address received by pointer*/   
  { *pa = (*pa) * (*pa);                /*Value accessed through address*/
  }
void main()
{ int x;
  printf("\nEnter value of x: ");
  scanf("%d", &x);
  SquareByVal (x);                      /*Function called with value of x */
  printf("\nValue of x after call by value = %d", x);
  SquareByRef (&x);                     /*Function called with address of x*/
  printf("\nValue of x after call by reference = %d", x);
}

/* Output:
Enter value of x: 30
Value of x after call by value = 30
Value of x after call by reference = 900
*/
