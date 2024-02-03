#include<stdio.h>
int Reverse(int ino)
{
    int irev=0;
    int idigit=0;

    while(ino !=0)
    {
        idigit=ino % 10;
        ino= ino /10 ;
        irev=(irev*10)+idigit;             // (irev(0) * 10) + idigit =>  0+5 0+1 0+2 0+7  => irev=5127
    }
        return irev;       
}

                            //input madhye last la 0 zero asel tr toh preserve hotach nahi for eg 7800 7820 etc.

int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    iret=Reverse(ivalue);
    printf("Reverse number is : %d",iret);

    return 0;
}