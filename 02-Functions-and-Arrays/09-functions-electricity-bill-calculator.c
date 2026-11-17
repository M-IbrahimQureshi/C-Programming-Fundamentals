/*
 * Project: Electricity Bill Calculator
 *
 * Problem: Write a program that takes the units consumed and the category (Domestic or Commercial),
 * then calculates the bill using different rates, adds a 5% surcharge if the bill is above Rs.5000,
 * and displays the final payable amount.
 *
 * Concept: Functions (with parameters and return values)
 */
#include <stdio.h>
int getUnits() {
    int u;
    printf("Enter units consumed: ");
    scanf("%d", &u);
    return u;
}
char getCategory() {
    char c;
    printf("Category (D = Domestic, C = Commercial): ");
    scanf(" %c", &c);
    return c;
}
float calcBill(int units, char cat) {
    if (cat == 'C' || cat == 'c') return units * 25.0;
    if (units <= 100) return units * 15.0;
    return 100 * 15.0 + (units - 100) * 20.0;
}
float calcSurcharge(float bill) {
    return (bill > 5000) ? bill * 0.05 : 0;
}
void display(int units, float bill, float sur) {
    printf("\nUnits consumed : %d\nBill amount    : Rs. %.2f\nSurcharge      : Rs. %.2f\nFinal payable  : Rs. %.2f\n",
           units, bill, sur, bill + sur);
}
int main() {
    int units = getUnits();
    char cat = getCategory();
    float bill = calcBill(units, cat);
    float sur = calcSurcharge(bill);
    display(units, bill, sur);
    return 0;
}
