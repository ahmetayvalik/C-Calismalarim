// Compare Two Strings

#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "ahmet";
    char str2[10] = "abi";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("We have the same name\n");
    } else if (result < 0) {
        printf("%s comes before %s\n", str1, str2);
    } else {
        printf("%s comes after %s\n", str1, str2);
    }

    // It sorts like in a dictionary, for example, "ahmet" comes after "abi" because of the alphabetical order

    return 0;
}
