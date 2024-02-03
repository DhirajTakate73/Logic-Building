#include<stdio.h>
int calculatecube(int ivalue)
{
    int icube=0;

    icube=ivalue*ivalue*ivalue;
    return icube;

}
int main()
{
    auto int ino=0;
    auto int ians=0;

    printf("enter number:\n");
    scanf("%d",&ino);

    ians=calculatecube(ino);

    printf("cube is:%d\n",ians);
    
        return 0;
}