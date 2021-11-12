#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0;

    for( i=1; i<=4; i++)
    {
        for( j=1; j<=4; j++)
        {
            if(i==2 || i==3 && j==1 || j==4  )
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


    getch();
    return 0;
}
