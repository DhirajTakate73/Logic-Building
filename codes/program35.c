#include<stdio.h>
void display(int ino)       //8value yeil khalun
{
    int icnt=0;
    

        //1     2           3
    for(icnt=1; icnt<=ino; icnt++)        //5 is hardcoaded value
    {
        printf("Jay Ganesh...\n");      //4
    }
}

int main()
{   int ivalue=0;               //ivalue cha scope fakt {}asto

    printf("enter number of times you want to display Jay Ganesh on screen\n");
    scanf("%d",&ivalue);

    display(ivalue);

    return 0;
}                                   //iteration vaprun program

//counter chi survat 1 pasun karaychi keva paan rule of marvellous
//hach probelm best ahe 
//dynamic  approach
//program control karnara variable is ivalue