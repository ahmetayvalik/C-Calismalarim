// Calculate and Print Grade Based on Midterm and Final Scores Using a Function

#include <stdio.h>

int calculateGrade(int midterm, int final) {
    int result = (midterm * 40 / 100) + (final * 60 / 100);

    if (result >= 60) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    return result;
}

int main() {
    int midterm, final;
    printf("Enter your midterm score: ");
    scanf("%d", &midterm);
    printf("Enter your final score: ");
    scanf("%d", &final);
    int result = calculateGrade(midterm, final);
    printf("Your final score is %d\n", result);
}
