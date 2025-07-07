/*Program - 17: Using a pointer to a function*/

#include <stdio.h>

// Function prototypes
double add(float a, float b);
double sub(float a, float b);
double mul(float a, float b);
double divide(float a, float b);

int main() {
    int choice;
    float num1, num2;
    double (*pcalculate)(float, float); // Pointer to a function

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nEnter Your Choice:\n");
    printf("<0> Addition\n<1> Subtraction\n<2> Multiplication\n<3> Division\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 0:
            pcalculate = add;
            break;
        case 1:
            pcalculate = sub;
            break;
        case 2:
            pcalculate = mul;
            break;
        case 3:
            pcalculate = divide;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("The result is: %lf\n", pcalculate(num1, num2));
    return 0;
}

// Function definitions
double add(float a, float b) {
    return (a + b);
}

double sub(float a, float b) {
    return (a - b);
}

double mul(float a, float b) {
    return (a * b);
}

double divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (a / b);
}


/* Output:
Enter first number: 2
Enter second number: 3

Enter Your Choice:
<0> Addition
<1> Subtraction
<2> Multiplication
<3> Division
Choice: 0
The result is: 5.000000
*/
