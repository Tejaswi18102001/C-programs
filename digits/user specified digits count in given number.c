
#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,dCount=0, Temp=0 ,Dig=0;

    printf("\n Enter a positive  number= ");
    scanf("%d",&No);
    printf("\n Enter digits to be counted in given number= ");
    scanf("%d",&Dig);

    Temp=No;

    while(Temp>0)
    {

        if( (Temp %10) == Dig)
        {
            dCount++;
        }
        Temp= Temp / 10;


    }
    printf("\n count of  %d  digit in %d number =%d",Dig,No,dCount);
    getch();
    return 0;
}
