/*
 * Problem: Write a program that checks whether a patient can meet the doctor by taking
 * three inputs (appointment booked, doctor available, registration completed) as 1 for Yes or 0 for No.
 *
 * Concept: Nested if-else
 */
#include <stdio.h>

int main()
{
    int Appointment, doctorAvailable, Has_Reg;
    printf("Enter Appointment, doctorAvailable, registrationCompleted\n");
    printf("Press 1 for Yes and Press 0 for No: ");
    scanf(" %d%d%d", &Appointment, &doctorAvailable, &Has_Reg);
    if (Appointment == 1)
        if (doctorAvailable == 1)
            if (Has_Reg == 1)
                printf("Patient can meet the doctor");
            else
                printf("No Registration");
        else
            printf("Doctor is not available");
    else
        printf("Book your Appointment");
}
