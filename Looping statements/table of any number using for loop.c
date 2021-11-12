#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0, cnt=1;

    printf("\nEnter a number to print its table=");
    scanf("%d",&no);

    printf("\n\nTable of %d =",no);

    for( cnt=1;cnt<=10 ;cnt++)
    {

        printf("\n %d*%d=%d",no,cnt,(no*cnt));

    }

    getch();
    return 0;
}

