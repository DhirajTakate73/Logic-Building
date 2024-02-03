#include<stdio.h>
void display(int ino)
    
    {
       int icnt=0;
       for(icnt=1; icnt<=ino; icnt++)
            //1     2           3
       {
        printf("*\n");    //for new line 4
       }

    }


int main()
{   
    int ivalue=0;
    printf("enter number of times you want to display * on screen\n");
    scanf("%d",&ivalue);

    display(ivalue);

    return 0;
}                                   

