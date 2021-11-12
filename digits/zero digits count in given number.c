#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,Dig=0,Zero_Count=0, Temp=0;

    printf("Enter a positive  number= ");
    scanf("%d",&No);

    Temp=No;

    while(Temp>0)
    {
        Dig = Temp % 10;


        if( Dig  == 0)
        {
            Zero_Count++;
        }
        Temp= Temp / 10;


    }
    printf("\n Zero digits count in %d is =%d",No,Zero_Count);
    getch();
    return 0;
}


