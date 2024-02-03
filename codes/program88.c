//input : 6
//output : 0 1 2 3 4 5 6

#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    for(icnt=0; icnt<=ino; icnt++)
    {
        printf("%d\t",icnt);
    }
    printf("\n");
}
int main()
{
    int ivalue=0;

    printf("enter number of times you want to display number on screen\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;

}
// linear pattern