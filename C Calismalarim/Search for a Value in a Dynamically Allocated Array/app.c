#include <stdio.h>
#include <stdlib.h>

int main() {
    int elementCount;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &elementCount);

    int *array = (int *)malloc(elementCount * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < elementCount; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int target;

    printf("Enter the value to search for: ");
    scanf("%d", &target);

    int foundPosition = -1;
    for (int i = 0; i < elementCount; ++i) {
        if (array[i] == target) {
            foundPosition = i;
            break;
        }
    }

    if (foundPosition == -1) {
        printf("The target value could not be found in the array.\n");
    } else {
        printf("The target value %d was found at position %d in the array.\n", target, foundPosition + 1);
    }

    free(array);

    return 0;
}
