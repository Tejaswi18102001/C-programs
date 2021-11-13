#include<stdio.h>
#include<conio.h>
int main()
{
    char Letter = 0;
    printf(" \n Enter an alphabet=  ");
    scanf("%c",&Letter);

    switch (Letter)
    {
        case 'a':
        case 'A':

            printf(" \n Welcome ");
            break;


        case 'b':
        case 'B':
        case 'w':
        case 'W':
            printf(" \n Have a nice day");
            break;


        case 'c':
        case 'C':
            printf("\n Good day");
            break;


        case 'd':
        case 'D':
            printf("\n Good bye ");
            break;


        default:
            printf("\n No message for you ");
            break;

    }

    getch();
    printf("\n\nTHANKS!!!");



    getch();
    return 0;


}
