//input : 4
//output : a b c d


#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    char ch='\0';       //good programming practice to initialise ch to '\0'.
    //      1               2           3
    for(icnt=1,ch='a'; icnt<=ino; icnt++,ch++) //character 1 ni vadhavla
    {
        printf("%c\t",ch);  //4
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