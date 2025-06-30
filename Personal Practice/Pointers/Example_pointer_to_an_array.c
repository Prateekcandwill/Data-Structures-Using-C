//Program-7: Example of Pointer to an array

#include <stdio.h>

void main()
{
    int mat[3][4] = {1,2,3,4,
                     5,6,7,8,
                     9,10,11,12};
    int (*pa)[4], i;                //Pointer to an integer Declared
    pa=mat;
    for(i=0; i<3; i++)
        {printf("\nAddress of mat [%d] [0] = %u", i, &mat[i][0]);   //[0] refers to column 0
         printf("\nAddress of row [%d]=%u", i, (pa+i));             //(pa+i) Address of i th row
        }
}

/* output:
Address of mat [0] [0] = 950338272
Address of row [0]=950338272
Address of mat [1] [0] = 950338288
Address of row [1]=950338288
Address of mat [2] [0] = 950338304
Address of row [2]=950338304 */
