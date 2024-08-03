#include <stdio.h>

int main() {
    int number, i, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int array[number];

    for (i = 0; i < number; i++) {
        printf("Enter the elements: ");
        scanf("%d", &array[i]);
        sum += array[i];
    }
    
    printf("The sum of the elements is = %d\n", sum);

    return 0;
}
