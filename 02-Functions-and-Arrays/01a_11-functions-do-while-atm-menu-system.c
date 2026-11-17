/*
 * Project: ATM Menu System
 *
 * Problem: Write a menu-driven ATM program that lets the user check balance, deposit, or withdraw
 * money repeatedly until they choose to exit. Withdrawals are limited to Rs.10,000 per transaction,
 * cannot exceed the balance, and show a warning if the balance drops below Rs.5000.
 *
 * Concept: Functions with do-while loop and switch (Menu-driven program)
 */
#include <stdio.h>
int showMenu() {
    int ch;
    printf("\n===== ATM MENU =====\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
    scanf("%d", &ch);
    return ch;
}
void checkBalance(float bal) {
    printf("Current balance: Rs. %.2f\n", bal);
}
float deposit(float bal) {
    float amt;
    printf("Enter deposit amount: ");
    scanf("%f", &amt);
    if (amt <= 0) {
        printf("Amount must be positive.\n");
        return bal;
    }
    bal += amt;
    printf("Deposit successful. ");
    checkBalance(bal);
    return bal;
}
float withdraw(float bal) {
    float amt;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amt);
    if (amt <= 0)
        printf("Amount must be positive.\n");
    else if (amt > 10000)
        printf("Maximum Rs. 10,000 per transaction.\n");
    else if (amt > bal)
        printf("Insufficient balance.\n");
    else {
        bal -= amt;
        printf("Withdrawal successful. ");
        checkBalance(bal);
        if (bal < 5000) printf("WARNING: Low balance!\n");
    }
    return bal;
}
int main() {
    float balance = 20000;
    int choice;
    do {
        choice = showMenu();
        switch (choice) {
            case 1: checkBalance(balance); break;
            case 2: balance = deposit(balance); break;
            case 3: balance = withdraw(balance); break;
            case 4: printf("Thank you!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}
