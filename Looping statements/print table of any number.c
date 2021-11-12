#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0, cnt=1;

    printf("\nEnter a number to print its table=");
    scanf("%d",&no);

    printf("\n\nTable of %d =",no);

    while(cnt<=10)
    {

        printf("\n %d*%d=0.2%d",no,cnt,(no*cnt));
        cnt++;
    }

    getch();
    return 0;
}
