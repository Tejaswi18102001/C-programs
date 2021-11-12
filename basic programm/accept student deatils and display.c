#include<stdio.h>
#include<conio.h>
int main()
{
    int roll_no=0;
    char Name[80]="  ";
    float per=0.0;
    char course[40]="  ";

    printf("Accepting student details=");

    printf("\n\n Enter student roll no=");
    scanf("%d",&roll_no);

    printf("\n Enter student Name=");
    scanf(" %[^\n]",&Name);

    printf("\nEnter student percentage=");
    scanf("%f",&per);

    printf("\nEnter student course name=");
    scanf(" %[^\n]",&course);

    getch();

    printf("\n\n =============================*===========================================\n");

    printf("Displaying given student deatils=");

    printf("\n roll no       =%d |",roll_no);
    printf("\n name          =%s |",Name);
    printf("\n percentage    =%0.2f |",per);
    printf("\n course name   =%s |",course);

    printf("\n\n==============================*=============================================\n");
    getch();
    return 0;





}
