// Find the Length of a String

#include <stdio.h>
#include <string.h>

int main() {
    char name[10] = "apple";

    printf("Your name length: %ld\n", strlen(name));

    size_t length = strlen(name);

    printf("Length: %zu\n", length);

    return 0;
}
