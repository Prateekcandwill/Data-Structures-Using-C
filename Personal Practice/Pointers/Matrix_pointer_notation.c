/**************************************************
Meaning of*(*(mat+i)+j)
Hence in genral mat[i][j] => *(mat[i]+j) =>*(*(mat+i)+j) =>jth value of the i th row 
*****************************************************/

//Program-10: Example of matrix using pointer notation

#include <stdio.h>

void main()
{
    int mat[2][3], sum=0, i, j;
    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
            {printf("\nEnter element-[%d][%d]:", i, j);
             scanf("%d", (*(mat+i)+j));
             sum = sum + *(*(mat+i)+j);
            }
    printf("\nThe required sum is %d", sum);
}

/* output:
Enter element-[0][0]:5
Enter element-[0][1]:3
Enter element-[0][2]:6
Enter element-[1][0]:2
Enter element-[1][1]:7
Enter element-[1][2]:4
The required sum is 27 */
