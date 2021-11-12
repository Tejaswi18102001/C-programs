#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,Dig=0,Even_Count=0, Temp=0;

    printf("Enter a positive  number= ");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Dig = Temp % 10;


        if( Dig % 2 == 0)
        {
            Even_Count++;
        }
        Temp= Temp / 10;


    }
    printf("\n Even  digits in %d is =%d",No,Even_Count);
    getch();
    return 0;
}

