//palliandrome or not

#include<stdio.h>
#include<stdbool.h>

bool ChkPallindrome(int ino)
{
    int icopy=ino;          //xerox kadhli ino chi
    int irev=0;
    int idigit=0;

    while(ino !=0)
    {
        idigit=ino % 10;
        ino= ino /10 ;
        irev=(irev*10)+idigit;
    }
        return(irev == icopy);      //khalche if else skip kele
        
}



int main()
{
    int ivalue=0;
    bool bret=false;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    bret=ChkPallindrome(ivalue);
    if(bret==true)
    {
        printf("%d is a pallindrome number\n",ivalue);
    }
    else
    {
        printf("%d is not a pallindrome number\n",ivalue);
    }
    

    return 0;
}