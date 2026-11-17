/*
 * Project: Bank Loan Eligibility Checker
 *
 * Problem: Write a program that takes a person's age, monthly salary, and existing loan payments,
 * checks whether they are eligible for a loan (age 21+, salary Rs.50,000+, and at least 40% of
 * salary remaining after payments), and displays the reason if not or the maximum loan amount if eligible.
 *
 * Concept: Functions (with return codes)
 */
#include <stdio.h>
int checkEligibility(int age, float salary, float payments) {
    if (age < 21) return 1;
    if (salary < 50000) return 2;
    if ((salary - payments) < 0.40 * salary) return 3;
    return 0;
}
float maxLoan(float salary, float payments) {
    return 10 * (salary - payments);
}
void showResult(int code, float salary, float payments) {
    if (code == 0) {
        printf("\nEligible for a loan.\nMaximum loan amount: Rs. %.2f\n", maxLoan(salary, payments));
    } else {
        printf("\nNot eligible: ");
        if (code == 1) printf("age must be at least 21.\n");
        else if (code == 2) printf("monthly salary must be at least Rs. 50,000.\n");
        else printf("less than 40%% of salary remains after existing payments.\n");
    }
}
int main() {
    int age;
    float salary, payments;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly salary: ");
    scanf("%f", &salary);
    printf("Enter existing monthly loan payments: ");
    scanf("%f", &payments);
    showResult(checkEligibility(age, salary, payments), salary, payments);
    return 0;
}
