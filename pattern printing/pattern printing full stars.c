#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, j=0, r=0, c=0;
    printf("\n Enter row size=");
    scanf("%d",&r);

    printf("\n Enter column size=");
    scanf("%d",&c);
    printf("\n\n pattern  is=>\n\n");

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n Thanks!!!");
    getch();
    return 0;


}
