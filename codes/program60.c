//number chi sum return kara

#include<stdio.h>
//input :7521
//output:15
//digit addition kara

int sumdigits(int ino)       //for aani while nahi mahnun sequence cha program
{
    int idigit=0;
    int isum=0;

    while(ino !=0)
    {
        idigit=ino % 10;                    //mahanje idigit
        isum=isum + idigit;     //isum=isum+ (ino % 10)     so idigit variable skip karu shakto pudhchya code madhye
        ino=ino/10;  
    }
    return isum;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);
    iret=sumdigits(ivalue);

    printf("sum of digits are :%d\n",iret);

    return 0;
}