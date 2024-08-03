#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *decimal_to_binary(int decimal) {
    char *binary = (char *)malloc(16);
    if (binary == NULL) {
        printf("Memory allocation error!");
        exit(EXIT_FAILURE);
    }

    for (int i = 15; i >= 0; i--) {
        binary[i] = (decimal & 1) ? '1' : '0';
        decimal >>= 1;
    }

    return binary;
}

char *binary_operation(char *first_binary, char *second_binary, char operation) {
    char *result = (char *)malloc(strlen(first_binary) + 1);
    if (result == NULL) {
        printf("Memory allocation error!");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < strlen(first_binary); i++) {
        switch (operation) {
        case '&':
            result[i] = (first_binary[i] == '1' && second_binary[i] == '1') ? '1' : '0';
            break;
        case '|':
            result[i] = (first_binary[i] == '1' || second_binary[i] == '1') ? '1' : '0';
            break;
        case '^':
            result[i] = (first_binary[i] != second_binary[i]) ? '1' : '0';
            break;
        default:
            printf("Invalid operation!");
            exit(EXIT_FAILURE);
        }
    }

    free(second_binary);

    return result;
}

int get_first_number() {
    int number;
    do {
        printf("Please enter a positive number less than 16000: ");
        scanf("%d", &number);
    } while (number < 0 || number > 16000);

    return number;
}

int get_second_number() {
    int number;
    do {
        printf("Please enter a positive number less than 16000: ");
        scanf("%d", &number);
    } while (number < 0 || number > 16000);

    return number;
}

char select_operation() {
    char operation;
    printf("Which operation would you like to perform? AND, OR, XOR [&, |, ^]: ");
    scanf(" %c", &operation);
    return operation;
}

int main() {
    int number1, number2;

    number1 = get_first_number();
    number2 = get_second_number();

    char *first_binary = decimal_to_binary(number1);
    char *second_binary = decimal_to_binary(number2);

    char operation = select_operation();

    char *result = binary_operation(first_binary, second_binary, operation);

    printf("Result: %s\n", result);

    free(result);
    free(first_binary);

    return 0;
}
