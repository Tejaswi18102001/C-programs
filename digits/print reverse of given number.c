



}#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Temp=0 ,Rev=0;

    printf("\n Enter a positive  integer to reverse it= ");
    scanf("%d",&No);

    Temp=No;

    for( Temp=No;Temp>0;Temp/=10)
    {
        Rev=(Rev *10)+ (Temp %10);
    }
    printf("\n Reverse of given number is%d is =%d",No,Rev);
    getch();
    return 0;





