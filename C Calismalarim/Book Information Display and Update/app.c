#include <stdio.h>

void display(char title, char author) {
    printf("%c %c\n", title, author);
}

char checkYear(int year) {
    char response;
    if (year < 2010) {
        printf("Is this a new publication year? (y/n): ");
        scanf(" %c", &response);
    }
    return response;
}

void showDetails(char title, char author, int year, int price) {
    printf("%c %c %d %d \n", title, author, year, price);
}

int main() {
    int numBooks, year, price, i;
    char author, title;
    printf("How many books do you want to enter? ");
    scanf("%d", &numBooks);

    for (i = 0; i < numBooks; i++) {
        printf("Enter the book's title, author, publication year, and price: ");
        scanf(" %c %c%d%d", &title, &author, &year, &price);

        display(title, author);
        char response = checkYear(year);

        if (response == 'y') {
            printf("Enter the new publication year and price: ");
            scanf("%d%d", &year, &price);
        }
        showDetails(title, author, year, price);
    }

    return 0;
}
