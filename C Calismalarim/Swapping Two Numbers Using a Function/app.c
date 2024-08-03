#include <stdio.h>

void swapValues(int *num1, int *num2) {
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
} 

int main() {
    int value1 = 5;
    int value2 = 7;

    swapValues(&value1, &value2);

    printf("Value 1: %d\n", value1);
    printf("Value 2: %d\n", value2);

    return 0;
}
