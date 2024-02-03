//input : 4
//output : a b c d

#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    char ch='a';

    for(icnt=1; icnt<=ino; icnt++,ch++) //character 1 ni vadhavla  counter paan vadhel aani counter paan vadhel company sathi imp asach karaych
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
int main()
{
    int ivalue=0;

    printf("enter number of times you want to display pattern on screen\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;

}