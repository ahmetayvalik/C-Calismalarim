#include <stdio.h>

int main() {
    int operation, balance, amount, newBalance;

    printf("Enter your balance: ");
    scanf("%d", &balance);

    printf("Select the operation you want to perform:\n");
    printf(" 1: Withdraw money\n 2: Deposit money\n 3: Check balance\n 4: Card return\n");
    scanf("%d", &operation);

    switch (operation) {
    case 1:
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &amount);

        if (amount <= balance) {
            newBalance = balance - amount;
            printf("Money withdrawn: %d\n", amount);
            printf("Remaining balance: %d\n", newBalance);
        } else {
            printf("Insufficient balance\n");
        }
        break;

    case 2:
        printf("Enter the amount you want to deposit: ");
        scanf("%d", &amount);

        newBalance = balance + amount;
        printf("Updated balance: %d\n", newBalance);
        break;

    case 3:
        printf("Your balance: %d\n", balance);
        break;

    case 4:
        printf("Please do not forget to take your card\n");
        break;

    default:
        printf("Please select a valid operation\n");
        break;
    }

    return 0;
}
