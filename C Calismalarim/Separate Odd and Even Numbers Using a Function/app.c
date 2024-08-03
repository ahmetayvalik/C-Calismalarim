#include <stdio.h>

void findOddEven(int size, int array[]) {
    int i;

    printf("Odd numbers: ");
    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 1) {
            printf("%d ", array[i]);
        }
    }

    printf("\nEven numbers: ");
    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}

int main() {
    int number, i;

    printf("Enter the number of elements: ");
    scanf("%d", &number);

    int array[number];

    for (i = 0; i < number; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    findOddEven(number, array);

    return 0;
}
