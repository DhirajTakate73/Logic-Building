//prime number ahe ki nahi te baghaycha 
#include<stdio.h>
#include<stdbool.h>
bool checkprime(int ino)
{
    int icnt=0;     //loop chya madhye counting karnyasathi
    if(ino<0)       //updator    -ve input +ve madhye convert karnyasathi
    {
        ino=-ino;
    }
    for(icnt=2; icnt<=(ino/2); icnt++)   // prime no mahanje tyla fakt 1 ne aani tya number ne bhhag jato  tyache factors 1 aani toh number asto aani 1 pasun counter suru kela tar pretyek no. prime number yeil mahnun counter 2 pasun suru kela 
    {
        if((ino % icnt)==0)
        {
            return false;           //return nahi lihit loop madhye so updation needed in 52 code
        }
    }
    return true;
}
int main()
{
    int ivalue=0;
    bool bret=false;             // bool madhye 0 taknyasathi false lihito garbage jau naye concept

    printf("enter the number :\n");
    scanf("%d",&ivalue);

    bret=checkprime(ivalue);
    if(bret==true)
    {
        printf("%d is a prime number\n",ivalue);
    }
    else
    {
        printf("%d is not a prime number\n",ivalue);
    }

    return 0;
}