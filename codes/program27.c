//maximum of 3
#include<stdio.h>
int maximum(int ino1,int ino2,int ino3)
{
    if((ino1>=ino2)&&(ino1>=ino3))
    {
        return ino1;

    }
    else if((ino2>=ino1)&&(ino2>=ino3))
    {
        return ino2;

    }
    else 
    {
        return ino3;
        
    }

}

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ivalue3=0;

    int iret=0;

    printf("enter 1st number:\n");
    scanf("%d",&ivalue1);

    printf("enter 2nd number:\n");
    scanf("%d",&ivalue2);

    printf("enter 3rd number:\n");
    scanf("%d",&ivalue3);


    iret=maximum(ivalue1,ivalue2,ivalue3);

    printf("Largest no. is:%d\n",iret);

    return 0;

}