#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int values[num];

    printf("Enter the elements of the array:\n");
    for (int index = 0; index < num; index++) {
        scanf("%d", &values[index]);
    }

    printf("Array elements: ");
    for (int index = 0; index < num; index++) {
        printf("%d ", values[index]);
    }

    printf("\nEven elements of the array: ");
    for (int index = 0; index < num; index++) {
        if (values[index] % 2 == 0) {
            printf("%d ", values[index]);
        }
    }

    printf("\nOdd elements of the array: ");
    for (int index = 0; index < num; index++) {
        if (values[index] % 2 == 1) {
            printf("%d ", values[index]);
        }
    }

    printf("\n");

    return 0;
}
