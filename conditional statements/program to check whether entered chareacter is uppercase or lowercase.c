#include<stdio.h>
#include<conio.h>
int main()
{
    char ch ='\0';

    printf("Enter a charcter = ");
    ch =getche();

    if(ch>='A' && ch<='Z')
    {
        printf("\n %c is UPPER CASE ALPHABET.",ch);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("\n %c is LOWER CASE ALPHABET.",ch);
    }
    else
    {
        printf("\n given letter is not an alphabet");
    }
    getch();
    return 0;
}
