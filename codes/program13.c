#include<stdio.h>
long int calculatecube(int ivalue)
{
    long int icube=0;

    icube=ivalue*ivalue*ivalue;
    return icube;

}
int main()
{
    auto int ino=0;
    auto long int ians=0;

    printf("enter number:\n");
    scanf("%d",&ino);

    ians=calculatecube(ino);

    printf("cube is:%ld\n",ians);
    
        return 0;
}