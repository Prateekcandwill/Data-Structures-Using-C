/******************************************************************************
arr is same as &arr[0] 
likewise (arr+i) is same as &arr[i]
likewise *(arr+i) is same as arr[i]
*******************************************************************************/

// Program 5: Use of pointer notation with arrays

#include <stdio.h>

void main()
{
    int arr[5], i;    
    for(i=0; i<5; i++)
        {printf("\nEnter value[%d]: ", i);
        scanf("%d", arr+i);}
    for(i=0; i<5; i++)
        printf("\nEnter value[%d]: %d", i, *(arr+i));
}

/* Output:
Enter value[0]: 1
Enter value[1]: 2
Enter value[2]: 3
Enter value[3]: 4
Enter value[4]: 5

Enter value[0]: 1
Enter value[1]: 2
Enter value[2]: 3
Enter value[3]: 4
Enter value[4]: 5 */
