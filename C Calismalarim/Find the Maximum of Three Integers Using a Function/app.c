// Find the Maximum of Three Integers Using a Function

#include <stdio.h>

int findMax(int x, int y, int z) {
    int max = x;
    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
    return max;
}

int main() {
    int num1, num2, num3, result;
    printf("Enter three integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    result = findMax(num1, num2, num3);
    printf("The largest number is %d\n", result);
}
