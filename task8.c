#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2;
    int a, b;

    printf("Math Operations Console\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
    printf("10. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf", num1 + num2);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf", num1 - num2);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf", num1 * num2);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0)
                printf("Division by zero is not allowed");
            else
                printf("Result = %.2lf", num1 / num2);
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            printf("Square = %.2lf", num1 * num1);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            printf("Cube = %.2lf", num1 * num1 * num1);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0)
                printf("Square root of negative number is not allowed");
            else
                printf("Square Root = %.2lf", sqrt(num1));
            break;

        case 8:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf", pow(num1, num2));
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            printf("Absolute Value = %.2lf", fabs(num1));
            break;

        case 10:
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
            if (b == 0)
                printf("Modulus by zero is not allowed");
            else
                printf("Result = %d", a % b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
