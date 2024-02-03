//input : 4
//output : A B C D

#include<stdio.h>                                       //input 26chya aat dyaycha karan character 26 ch astat
void Display(int ino)
{
    int icnt=0;
    char ch='\0';   //character la '\0' ney initialise karne good programming practice.  
    // OR Ch ls A ney paan initialise karu shakto    //good programming practice to initialise ch to '\0'.
    
    //      1               2           3
    for(icnt=1,ch='A'; icnt<=ino; icnt++,ch++) //character 1 ni vadhavla
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