#include<stdio.h>
#include<conio.h>
int main()
{
    int Daynum=0;
    printf(" \n Enter a day number a between (1-7)= ");
    scanf("%d",&Daynum);

    if ( Daynum ==1 )

        printf(" \n monday ");

    else if ( Daynum ==2 )

        printf(" \n tuesday");

    else if (Daynum ==3 )

        printf("\n wednesday");

    else if (Daynum ==4 )

        printf("\n thursday");

    else if ( Daynum ==5)

        printf(" \n friday");

    else if (Daynum ==6)

        printf (" \n saturday");

    else if (Daynum ==7)

        printf("\n sunday");

    else

        printf("invalid");

    getch();
    return 0;
}
