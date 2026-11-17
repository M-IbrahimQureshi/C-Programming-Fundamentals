/*
 * Problem: Write a program that takes a student's marks as input and uses the
 * ternary operator to print "Pass" if marks are 50 or above, otherwise "Fail".
 */
#include <stdio.h>

int main(){
    int StMarks;
    printf("Enter your Marks: ");
    scanf("%d", &StMarks);
    printf((StMarks >= 50) ? "Pass" : "Fail");

}
