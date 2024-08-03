// Find a Substring within a String

#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "dunya";

    char *result = strstr(name, "dunya"); // if you had written another word instead of "dunya", it would not find the substring

    // Check if the substring was found and print the result
    if (result != NULL) {
        printf("A substring was found: %s\n", result);
    } else {
        printf("The substring was not found\n");
    }

    return 0;
}
