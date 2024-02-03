//input : 4
//output : a b c d


#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    char ch='a';
    //      1       2       3
    for(icnt=1; icnt<=ino; icnt++)
    {
        printf("%c\t",ch);  //4
        ch++;               //a b c d e f.................... asa hoil ch++ mule
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