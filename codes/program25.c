//average
#include<stdio.h>
float average(int ino1,int ino2,int ino3)
{
    float fans=0.0f;
    fans=((ino1+ino2+ino3)/3);    
    return fans;

}

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ivalue3=0;

    float fret=0.0f;

    printf("enter 1st number:\n");
    scanf("%d",&ivalue1);

    printf("enter 2nd number:\n");
    scanf("%d",&ivalue2);

    printf("enter 3rd number:\n");
    scanf("%d",&ivalue3);


    fret=average(ivalue1,ivalue2,ivalue3);

    printf("average  is :%f\n",fret);

    return 0;

}