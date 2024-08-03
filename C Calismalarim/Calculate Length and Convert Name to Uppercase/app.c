#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void calculateLength(const char *firstName, const char *lastName, int *firstNameLength, int *lastNameLength) {
    *firstNameLength = strlen(firstName);
    *lastNameLength = strlen(lastName);
}

void convertToUppercase(char *text) {
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        text[i] = toupper(text[i]);
    }
}

int main() {
    char firstName[35];
    char lastName[35];

    printf("Enter your first name: ");
    scanf("%34s", firstName);

    printf("Enter your last name: ");
    scanf("%34s", lastName);

    int firstNameLength, lastNameLength;
    calculateLength(firstName, lastName, &firstNameLength, &lastNameLength);

    printf("The length of your first name is %d\n", firstNameLength);
    printf("The length of your last name is %d\n", lastNameLength);

    char *fullName = (char *)malloc(firstNameLength + lastNameLength + 2); // +2 for the space and null terminator

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Full name: %s\n", fullName);

    convertToUppercase(fullName);
    printf("Full name in uppercase: %s\n", fullName);

    free(fullName);

    return 0;
}
