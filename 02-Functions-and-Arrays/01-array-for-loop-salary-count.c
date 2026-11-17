/*
 * Problem: Write a program that stores the salaries of 6 employees in an array,
 * displays them all, and counts how many employees earn more than 50,000.
 *
 * Concept: 1D Array with for loop
 */
#include <stdio.h>

int main()
{   
    int Count;
    Count =0;
    int Salaries[6];
    for (int i=0;i<6;i++)
    {
        printf("Enter Salaray of Employee %d: ",i+1);
        scanf("%d", &Salaries[i]);
        if (Salaries[i] > 50000)
            Count = Count + 1;
    }
        
    for (int i=0;i<6;i++)
        printf("%d\n", Salaries[i]);
    
    printf("Salaries Greater 50000 = %d\n", Count);
    return 0;
}
