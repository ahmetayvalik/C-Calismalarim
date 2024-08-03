#include <stdio.h>

int main() {
    int number, i;

    printf("Enter the number of elements (<= 100): ");
    scanf("%d", &number);

    int array[number];

    for (i = 0; i < number; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Odd numbers in the array: ");
    for (i = 0; i < number; i++) {
        if (array[i] % 2 == 1) {
            printf("%d ", array[i]);
        }
    }

    printf("\nEven numbers in the array: ");
    for (i = 0; i < number; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
