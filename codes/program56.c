#include<stdio.h>

void Display(int ino)       //for aani while nahi mahnun sequence cha program
{
    int idigit=0;
    //joparyant ino 0 hot 
    //nahi toparyant fira
    while(ino != 0)
    {
        idigit=ino % 10;
        printf("digit is :%d\n",idigit);

        ino=ino/10;
        printf("number is :%d\n",ino);

    }
}
int main()
{
    int ivalue=0;

    printf("enter number");
    scanf("%d",&ivalue);

    Display(ivalue);     //dukan

    return 0;
}