/**************************************************
pointer that stores the address of another pointer is called a pointer to pointer
*****************************************************/

//Program-9: Example of use of Pointer to Pointer

#include <stdio.h>

void main()
{
    int c = 16;
    int *pc, **ppc;
    pc = &c; ppc = &pc;
    printf("\nThe address of c using address operator = %u", &c);
    printf("\nThe address of c using pointer pc = %u", pc);
    printf("\nThe address of c using ptr to ptr ppc = %u", *ppc);
    printf("\nThe value of c using variable name = %u", c);
    printf("\nThe value of c using pointer pc = %u", *pc);
    printf("\nThe value of c using ptr to ptr ppc pcc = %d", **ppc);
}

/* output:
The address of c using address operator = 669210852
The address of c using pointer pc = 669210852
The address of c using ptr to ptr ppc = 669210852
The value of c using variable name = 16
The value of c using pointer pc = 16
The value of c using ptr to ptr ppc address operator = 16 */
