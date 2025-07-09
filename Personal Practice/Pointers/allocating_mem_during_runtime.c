/******************************************************************************
Program - 23: Allocating memeory in runtime dynamic memory allocation
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void main()
{   int *p, n, sum=0, i; float avg;
    printf("\nEnter total number of studuents:");
    scanf("%d", &n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
        {printf("\nMemory allocation was not possible");
         exit(1);
        }
    for(i=0; i<n; i++)
        {printf("\nEnter marks of student-%d: ", (i+1));
         scanf("%d", p+i);              //address location p+i
         sum=sum+*(p+i);                //value at address p+i
        }
    avg=(float)sum/n;
    printf("\nAverage Marks = %f", avg);
    free(p);
    return 0;
}

/* Output:

Enter total number of studuents:10
Enter marks of student-1: 10
Enter marks of student-2: 20
Enter marks of student-3: 30
Enter marks of student-4: 40
Enter marks of student-5: 50
Enter marks of student-6: 60
Enter marks of student-7: 70
Enter marks of student-8: 80
Enter marks of student-9: 90
Enter marks of student-10: 100
Average Marks = 55.000000 */
