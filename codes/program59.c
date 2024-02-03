#include<stdio.h>

int countdigits(int ino)       //for aani while nahi mahnun sequence cha program
{
    int icnt=0;

    //joparyant ino zero hot nahi toparyant 

    while(ino !=0)
    {
        ino=ino / 10;
        icnt++;
    }
    return icnt;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);
    iret=countdigits(ivalue);

    printf("number of digits are :%d\n",iret);

    return 0;
}