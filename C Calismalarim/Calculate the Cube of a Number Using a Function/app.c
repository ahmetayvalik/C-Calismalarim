// Calculate the Cube of a Number Using a Function

#include <stdio.h>

int cube(int x) {
    int value;
    value = x * x * x;
    return value;
}

int main() {
    int num1, result;
    printf("Enter a value: ");
    scanf("%d", &num1);
    result = cube(num1);
    printf("The cube of %d is %d\n", num1, result);
}
