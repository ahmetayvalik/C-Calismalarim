#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the start value: ");
    scanf("%d", &start);

    printf("Enter the end value: ");
    scanf("%d", &end);

    for (int i = start; i < end; i++) {
        if (i % 30 == 0) {
            sum += i;
        }
    }

    printf("The sum of multiples of 30 between %d and %d is: %d\n", start, end, sum);

    return 0;
}
