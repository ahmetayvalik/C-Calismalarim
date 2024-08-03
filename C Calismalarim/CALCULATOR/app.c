#include <stdio.h>

// Function to display the main menu
void mainMenu() {
    printf("********\n");
    printf("* 1) Enter two numbers *\n");
    printf("* 2) Addition          *\n");
    printf("* 3) Subtraction       *\n");
    printf("* 4) Multiplication    *\n");
    printf("* 5) Division          *\n");
    printf("* 6) Repeat            *\n");
    printf("* 7) Exit              *\n");
    printf("********\n");
}

// Function for addition
int add(int x, int y) {
    return x + y;
}

// Function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function for multiplication
int multiply(int c, int d) {
    return c * d;
}

// Function for division
int divide(int e, int f) {
    if (f == 0) {
        printf("Cannot perform the operation, undefined.\n");
        return 0;
    } else {
        return e / f;
    }
}

int main() {
    int num1, num2, operation, result;

    do {
        mainMenu();

        printf("Select an operation: ");
        scanf("%d", &operation);

        switch (operation) {
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                break;
            case 2:
                result = add(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 3:
                result = subtract(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 4:
                result = multiply(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 5:
                result = divide(num1, num2);
                printf("Result: %d\n", result);
                break;
            case 6:
                break;
            case 7:
                printf("Exiting the program\n");
                break;
            default:
                printf("Please enter a valid operation\n");
                break;
        }
    } while (operation != 7);

    return 0;
}
