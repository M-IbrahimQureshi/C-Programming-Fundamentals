/*
 * Problem: Write a program that simulates an ATM menu where the user selects a service
 * (balance inquiry, cash withdrawal, cash deposit, or pin change) and then a sub-option for it.
 *
 * Concept: Nested switch
 */

#include <stdio.h>

int main()
{
    int Choice_1, Choice_2;
    printf("Press 1 for Balance Inquiry, 2 for Cash Withdrawl, 3 for Cash Deposit, 4 for Pin Change: ");
    scanf("%d", &Choice_1);
    switch(Choice_1){
        case 1:
            printf("Press 1 for Statement or 2 for Remaining Balance: ");
            scanf("%d", &Choice_2);
            switch(Choice_2){
                case 1:
                    printf("Balance Inquiry --> Statement");
                    break;
                case 2:
                    printf("Balance Inquiry --> Remaining Balance");
                    break;
                default:
                    printf("Invalid Choice");
                    break;
            }
            break;
            
        case 2:
            printf("Press 1 for Saving Account and 2 for Current Account: ");
            scanf("%d", &Choice_2);
            switch(Choice_2){
                case 1:
                    printf("Cash Withdrawl --> Saving Account");
                    break;
                
                case 2:
                    printf("Cash Withdrawl --> Current Account");
                    break;
                default:
                    printf("Invalid Choice");
                    break;
            }
                break;
            
        
        case 3:
            printf("Press 1 if You want to deposit in International Account, or Press 2 for National Account: ");
            scanf("%d", &Choice_2);
            switch(Choice_2){
                case 1:
                    printf("Cash Deposit --> International");
                    break;
                case 2:
                    printf("Cash Deposit --> National");
                    break;
                default:
                    printf("Invalid Choice");
                    break;
            }
            break;
            
        
        case 4:
            printf("Press 1 if you know Pin, Press 2 if You dont know Pin: ");
            scanf("%d", &Choice_2);
            switch(Choice_2){
                case 1:
                    printf("Pin Change --> Pin Known");
                    break;
                case 2:
                    printf("Pin Change --> Pin Unknown");
                    break;
                default:
                    printf("Invalid Choice");
                    break;
            }
            break;
            
            
        default:
            printf("Invalid Choice");
            
}           

}
