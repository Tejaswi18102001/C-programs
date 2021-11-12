#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, dcnt=0;

    printf("\n Enter a positive  number= ");
    scanf("%d",&No);


    while(No>0)
    {
        No=No /10;
        dcnt++;

    }
    printf("\n  Digits in %d is =%d",No,dcnt);
    getch();
    return 0;
}

