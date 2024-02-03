#include<stdio.h>

int countdigits(int ino)       //for aani while nahi mahnun sequence cha program
{
    int icnt=0;
    int idigit=0;               //ha paan variable ata kahi kamacha nahi pudhchya code madhye so ha paan kadhun taku

    while(ino !=0)
    {
        idigit=ino % 10;        //no split karaychi garaj nahi so pudhchya code madhye kadhun taku
        ino=ino / 10;
        icnt++;
    }
    return icnt;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number");
    scanf("%d",&ivalue);
    iret=countdigits(ivalue);
    printf("---------------------------------------------------------\n");
    printf("number of digits are :%d\n",iret);
    printf("---------------------------------------------------------\n");

    return 0;
}