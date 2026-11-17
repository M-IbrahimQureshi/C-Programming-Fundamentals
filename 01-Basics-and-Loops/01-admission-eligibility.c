/*
 * Problem: Write a program that takes a student's marks and age as input,
 * and checks admission eligibility (age must be 18 or above, and marks must be at least 50).
 */
#include <stdio.h>

int main()
{
    int StMarks, StAge;
    printf("Enter Student Marks: ");
    scanf("%d", &StMarks);
    printf("Enter Student Age: ");
    scanf("%d", &StAge);
    if (StAge >= 18)
        {
            if (StMarks >= 50)
                printf("Eligible for Admission");
            else
                printf("Requirement of Marks isnt fulfilled");
        }
    else
        printf("Age Requirement is Failed");
    
}
