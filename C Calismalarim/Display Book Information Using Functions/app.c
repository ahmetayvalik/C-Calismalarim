// Display Book Information Using Functions

#include <stdio.h>

void show(char x, char y) {
    printf("%c %c\n", x, y);
}

char checkYear(int year) {
    char response;
    if (year < 2010) {
        printf("Is this a new publication year? (y/n): ");
        scanf(" %c", &response);
    }
    return response;
}

void display(char title, char author, int year, int price) {
    printf("%c %c %d %d\n", title, author, year, price);
}

int main() {
    int bookCount, year, price;
    char author, title, response;
    printf("How many books do you want to enter? ");
    scanf("%d", &bookCount);

    for (int i = 0; i < bookCount; i++) {
        printf("Enter the book's title, author, publication year, and price: ");
        scanf(" %c %c %d %d", &title, &author, &year, &price);

        show(title, author);
        response = checkYear(year);

        if (response == 'y') {
            printf("Enter the new publication year and price: ");
            scanf("%d%d", &year, &price);
        }

        display(title, author, year, price);
    }
}
