// Store Test Results for a Group of Students Using a 2D Array

#include <stdio.h>

int main() {
    int i, j;
    int students[5][8];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            printf("Enter the result for student %d test %d: ", i + 1, j + 1);
            scanf("%d", &students[i][j]);
        }
    }

    return 0;
}
