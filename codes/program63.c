// check whether palliandrome or not               no. reverse kelyavar pann aalela no entered no sarkhach asto   for eg nayan

#include<stdio.h>
#include<stdbool.h>

bool ChkPallindrome(int ino)
{
    int icopy=ino;          //xerox kadhli ino chi  original no. ahech nahi compare karnyasathi karan ino last la zero hoto aani kmi kmi hot jato
    int irev=0;
    int idigit=0;           //last la zero nahi dyaycha input madhye

    while(ino !=0)         //last la zero preserve hou shakat nahi kahi kel tari
    {
        idigit= ino % 10;
        ino= ino /10 ;
        irev=(irev*10)+idigit;
    }
        if(irev == icopy)
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