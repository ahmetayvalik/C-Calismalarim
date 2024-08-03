// Copy a String to Another String

#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    char copy[20];

    printf("Enter your name: ");
    scanf("%s", name);

    strcpy(copy, name);

    printf("Copied name: %s\n", copy);

    return 0;
}
