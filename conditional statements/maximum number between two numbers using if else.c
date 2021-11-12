#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0;
    printf("Enter two numbers= ");
    scanf("%d%d",&no1 ,&no2);

    if(no1==no2)
    {
        printf("\n Both given numbers are EQUAL.\n");
    }
    else if(no1>no2)
    {
        printf("\n 1st num =>%d is greater than 2nd num=>%d.",no1,no2);
    }
    else
    {
        printf("\n 2nd num =>%d is greater than 1st num=>%d.",no1,no2);
    }
    printf("\n \n THANKS!!!");
    getch();
    return 0;
}
