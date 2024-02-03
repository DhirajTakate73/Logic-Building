// user jitkya vela sangel titikya vela * display kara

#include<stdio.h>
void Display(int ino)
{
    int icnt=0;

    for(icnt=1; icnt<=ino; icnt++)
    {
        printf("*\t");
    }
    printf("\n");
}
int main()
{
    int ivalue=0;

    printf("enter number of times you want to display * on screen\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;

}

//dynamic code for linear pattern
