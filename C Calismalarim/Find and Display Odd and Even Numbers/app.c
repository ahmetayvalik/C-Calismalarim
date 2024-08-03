#include <stdio.h>

void findNumbers(int count, int values[]);

int main() {
    int count;

    printf("Please enter a positive integer: ");
    scanf("%d", &count);

    if (count > 100) {
        printf("Error: The value cannot be greater than 100.\n");
        return 1;
    }

    int values[count];

    for (int i = 0; i < count; i++) {
        printf("Please enter integer number %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    findNumbers(count, values);

    return 0;
}

void findNumbers(int count, int values[]) {
    printf("Odd numbers: ");
    for (int i = 0; i < count; i++) {
        if (values[i] % 2 != 0) {
            printf("%d ", values[i]);
        }
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < count; i++) {
        if (values[i] % 2 == 0) {
            printf("%d ", values[i]);
        }
    }

    printf("\n");
}
