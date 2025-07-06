/*Program-16: Function returning a Pointer*/

#include <stdio.h>
#define NUM 10

// Change return type to int* to return a pointer
int* MaxVal(int list[]) {
    int i, *p, max;
    max = list[0];
    p = &list[0];
    for (i = 0; i < NUM; i++) {
        if (list[i] > max) {
            max = list[i];
            p = &list[i];
        }
    }
    return p; // Return pointer to max value
}

int main() {
    int arr[NUM] = {4, 8, 2, 5, 1, 9, 17, 11, 3, 12};
    int *m;
    m = MaxVal(arr);
    printf("\nRequired maximum value is %d\n", *m);
    return 0;
}


/* Output:
Required maximum value is 17 */
