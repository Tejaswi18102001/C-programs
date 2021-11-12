#include<stdio.h>
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
    if (No==Rev)
    {
        printf("\n As, given number %d and its reverse %d are equal.",No,Rev);
        printf("\n So given number is palindrome");

    }
    else
    {
        printf("\n As, given number %d and its reverse %d are not equal.",No,Rev);
        printf("\n So given number is  not palindrome");

    }

    getch();
    return 0;

}
