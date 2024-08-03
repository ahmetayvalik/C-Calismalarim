#include <stdio.h>
#include <string.h>

struct Customer {
    char name[10];
    char address[86];
    int id;
    int purchase;
};

int main() {
    struct Customer customer1;
    strcpy(customer1.name, "Ahmet");
    strcpy(customer1.address, "Izmir, Turkey");
    customer1.id = 152;
    customer1.purchase = 1800;

    printf("%s\n", customer1.name);
    printf("%s\n", customer1.address);
    printf("%d\n", customer1.id);
    printf("%d\n", customer1.purchase);
    return 0;
}
