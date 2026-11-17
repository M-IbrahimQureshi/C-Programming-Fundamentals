

/*
 * Problem: Write a program that keeps taking marks of students until the user enters 0,
 * then displays the total marks and the number of students entered.
 */
#include <stdio.h>

int main()
{
    int Choice, Marks, Total_Marks,Count;
    Count = 0;
    Total_Marks =0;
    printf("Enter Marks of student: ");
    scanf("%d", &Marks);
    Total_Marks = Total_Marks + Marks;
    Count = Count + 1;
    printf("Do you want to enter marks for another student?\n1 = YES\t0 = NO ");
    scanf("%d", &Choice);
    while(Choice == 1)
    {
        printf("Okay! Enter Marks for another student: ");
        scanf("%d", &Marks);
        Total_Marks = Total_Marks + Marks;
        Count = Count + 1;
        printf("Do you want to enter marks for another student?\n1 = YES\t0 = NO ");
        scanf("%d", &Choice);
    }
    printf("No more Students, 0 entered\n");
    printf("Total Marks = %d\n", Total_Marks);
    printf("Number of Students = %d\n", Count);
    
    return 0;
}
