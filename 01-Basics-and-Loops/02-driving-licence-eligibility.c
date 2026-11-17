/*
 * Problem: Write a program that asks whether the user has a CNIC and whether they
 * passed the driving test, then tells them if a licence can be issued or which requirement failed.
 */
#include <stdio.h>

int main()
{
    int Cnic_Choice;
    int Pass_Driving_Test;
    printf("Whether you have CNIC, Press 1 for YES, Press 0 for No: ");
    scanf("%d", &Cnic_Choice);
    printf("Whether you passed Driving Test, Press 1 for YES, Press 0 for NO: ");
    scanf("%d", &Pass_Driving_Test);
    if (Cnic_Choice == 1 && Pass_Driving_Test == 1)
        printf("Licence can be issued");
    else if (Cnic_Choice == 0 && Pass_Driving_Test == 1)
        printf("Cnic requirement Failed");
    else if (Cnic_Choice == 1 && Pass_Driving_Test == 0)
        printf("Pass your Driving test");
    else
        printf("Both Requirements Failed");
    
    
}
