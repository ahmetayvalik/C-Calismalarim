#include <stdio.h>
#include <string.h>

int main() {
    float score, gpa;
    char letterGrade[3], status[20];

    printf("Enter your score: ");
    scanf("%f", &score);

    if (score >= 90) {
        strcpy(letterGrade, "AA");
        gpa = 4;
    } else if (score >= 85) {
        strcpy(letterGrade, "BA");
        gpa = 3.5;
    } else if (score >= 80) {
        strcpy(letterGrade, "BB");
        gpa = 3;
    } else if (score >= 70) {
        strcpy(letterGrade, "CB");
        gpa = 2.5;
    } else if (score >= 60) {
        strcpy(letterGrade, "CC");
        gpa = 2;
    } else if (score >= 50) {
        strcpy(letterGrade, "DC");
        gpa = 1.5;
    } else if (score >= 45) {
        strcpy(letterGrade, "DD");
        gpa = 1;
    } else {
        strcpy(letterGrade, "FD");
        gpa = 0.5;
    }
    
    if (score >= 60) {
        strcpy(status, "Passed");
    } else if (score >= 45) {
        strcpy(status, "Conditional Pass");
    } else {
        strcpy(status, "Failed");
    }

    printf("Letter Grade: %s\nGPA: %.1f\nStatus: %s\n", letterGrade, gpa, status);

    return 0;
}
