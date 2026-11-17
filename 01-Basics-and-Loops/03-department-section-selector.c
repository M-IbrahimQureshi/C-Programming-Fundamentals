/*
 * Problem: Write a program that lets the user choose a department (CS, IT, or AI)
 * and a section (A or B), then displays their selection using nested switch statements.
 */
#include <stdio.h>

int main()
{
    int Dep_Choice;
    int Sec_Choice;
    printf("~~~Choose your Department~~~\n");
    printf("1 for CS\n 2 for IT \n 3 for AI\n");
    scanf("%d", &Dep_Choice);
    printf("~~ Choose your Section~~\n");
    printf("1 for SecA\n 2 for SecB\n");
    scanf("%d", &Sec_Choice);
    
    switch(Dep_Choice)
        {
        case 1: 
            switch(Sec_Choice)
                {
                    case 1: printf("Cs of Section A");
                        break;
                case 2: printf("Cs of Section B");
                        break;
                }
        break;
        case 2:
            switch(Sec_Choice)
                {
                    case 1: printf("IT of SecA");
                        break;
                case 2: printf("IT of SecB");
                        break;
                }
        break;
        case 3:
            switch(Sec_Choice)
            {
                case 1: printf("AI of SecA");
                        break;
                case 2: printf("AI of SecB");
                        break;
            }
        break;
        default: printf("Invalid Department Choice");
        }
}
