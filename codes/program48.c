//accept the no and find its factors and perform addition of their factors
#include<stdio.h>
#include<stdbool.h>     //for true and false values

int sumfactors(int ino)
{
    int icnt=0;
    int isum=0;

    for(icnt=1; icnt<=(ino/2); icnt++)    //factor aardhyachya pudhe nasto given no. chya mahnun NO/2 lihila 2 madhye 
        //1       2              3
    {
        if((ino % icnt)==0)   //4
        {
            isum=isum+icnt;
        }
    }
     return isum;
}
int main()
{   
    int ivalue=0;
    int iret=0;

    printf("enter the number :\n");
    scanf("%d",&ivalue);

    iret=sumfactors(ivalue);
    printf("sum of factors are :%d\n",iret);

    return 0;
}                                   

