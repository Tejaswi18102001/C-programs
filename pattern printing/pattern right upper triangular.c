#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, j=0, X=0;
    printf("\n Enter row size = ");
    scanf("%d",&X);

    printf("\n\n pattern is=>\n\n");

    for( i = 1; i <= X; i++)
    {
        for( j = 1; j <= X; j++)
        {
            if(  j >=i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n\nThanks!!!");
    getch();
    return 0;
}
