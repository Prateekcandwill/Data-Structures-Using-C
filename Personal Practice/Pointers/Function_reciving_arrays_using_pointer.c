/*Program-14 Pointer as formal argument to receive array*/

//We can also pass an entire array to a function

#include <stdio.h>
#define MAX 5

float Average(int *list) /* Array address received by pointer */
{
    float a, sum = 0.0;
    int i;
    for (i = 0; i < MAX; i++)
        sum = sum + *(list + i); /* Value through pointer */
    a = sum / MAX;
    return a;
}

int main()
{
    int arr[MAX], i;
    float mean;
    for (i = 0; i < MAX; i++)
    {
        printf("\nEnter number-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    mean = Average(arr); /* Address of 0th element passed */
    printf("\nThe required average is %f\n", mean);

    return 0;
}

/* Output
Enter number-1: 1
Enter number-2: 3
Enter number-3: 5
Enter number-4: 7
Enter number-5: 9
The required average is 5.000000*/
