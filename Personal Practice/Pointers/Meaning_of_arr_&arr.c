//Program-8: Meaning of arr and &anrr for array arr[]

#include <stdio.h>

void main()
{
    int arr[4] = {1,2,3,4};
    printf("\nThe value of arr = %u", arr);
    printf("\nThe value of &arr = %u", &arr);
    printf("\nThe value of arr+1 = %u", arr+1);
    printf("\nThe value of &arr+1 = %u", &arr+1);
}

/* output:
The value of arr = 2113312880
The value of &arr = 2113312880
The value of arr+1 = 2113312884
The value of &arr+1 = 2113312896 */
