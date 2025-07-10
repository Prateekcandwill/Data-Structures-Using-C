/*Program- 24: Selection Sort with Dynamic Memory allocation*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *pnum;
    int n, i, j;
    float temp; // temp should be float, not int

    printf("\nEnter number of values to sort: ");
    scanf("%d", &n);

    // Allocate memory for n floats
    pnum = (float*)malloc(n * sizeof(float));
    if (pnum == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input values
    for (i = 0; i < n; i++) {
        printf("Enter number-%d: ", i + 1);
        scanf("%f", pnum + i);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(pnum + i) > *(pnum + j)) {
                temp = *(pnum + i);
                *(pnum + i) = *(pnum + j);
                *(pnum + j) = temp;
            }
        }
    }

    // Output sorted values
    printf("\nSorted values:\n");
    for (i = 0; i < n; i++) {
        printf("%f\n", *(pnum + i));
    }

    // Free allocated memory
    free(pnum);

    return 0;
}
