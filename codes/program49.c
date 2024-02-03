//accept no and cheak whether its perfect no or not
//perfect no=addition of factors is as the entered no
#include<stdio.h>
#include<stdbool.h>     //for true and false values

bool checkperfect(int ino)
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
    if (isum==ino)                     // 2 4 3
    {
        return true;
    }
    else
    {
        return false;
    }
     
}
int main()
{   
    int ivalue=0;
    bool bret=false;
    
    printf("enter the number :\n");
    scanf("%d",&ivalue);

    bret=checkperfect(ivalue);
    if(bret==true)
    {
        printf("%d is a perfect number\n",ivalue);
    }
    else{
        printf("%d is not a perfect number\n",ivalue);
    }
    return 0;
}                                   

