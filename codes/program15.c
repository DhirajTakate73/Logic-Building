//accept the data from user and calculate %
#include<stdio.h>
int CalculatePercentage(int imarks,int iTotal)
{
    auto float fPercentage=0.0f;
    fPercentage=(((float)imarks/(float)iTotal)*100);    //float(imarks)float(itotal) is typecasting
    return fPercentage;
}
int main()
{
   auto int ivalue1=0;
    auto int ivalue2=0;
    auto float fret=0.0f;

    printf("enter the marks:\n");
    scanf("%d",&ivalue1); 

    printf("enter the total marks:\n");
    scanf("%d",&ivalue2);

    fret=CalculatePercentage(ivalue1,ivalue2);

    printf("your percentage is:%f\n",fret);


    return 0;
}