#include<stdio.h>
int minimum(int ino1, int ino2)
{
    if(ino1<ino2)
    {
        return ino1;

    }
    else
    {
        return ino2;

    }
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iret=0;
    printf("enter 1st number:\n");
    scanf("%d",&ivalue1);

    printf("enter 2nd number:\n");
    scanf("%d",&ivalue2);

    iret=minimum(ivalue1,ivalue2);

    printf("minimum number is :%d\n",iret);

    return 0;

}