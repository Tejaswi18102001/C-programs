#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,SP=0,EP=0;
    printf("\nEnter starting point of table=");
    scanf("%d",&SP);
    printf("\nEnter End point of table=");
    scanf("%d",&EP);

    printf("\n=================================*=======================================\n");
    for(R=1;R<=10;R++)
    {
        if(SP<EP)
        {
            for(C=SP;C<=EP;C++)
            {
                printf("%5d",R*C);
            }
        }
        else
        {
            for(C=EP;C<=SP;C--)
            {

                printf("%5d",R*C);
            }
        }
        printf("\n");
    }
    printf("\n=================================*=======================================\n");
    getch();
    return 0;
}
