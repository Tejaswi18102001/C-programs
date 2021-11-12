#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    printf("Enter a number=");
    scanf("%d",&no);

    if(no==0)
    {
        printf("NUMBER IS NEUTRAL");
    }
    else if(no%2==0)
    {
        printf("NUMBER IS EVEN");
    }
    else
    {
        printf("NUMBER IS ODD");
    }
    getch();
    return 0;
}
