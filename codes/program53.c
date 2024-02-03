#include<stdio.h>

void Display(int ino)       //for aani while nahi mahnun sequence cha program
{
    int idigit=0;

    idigit= ino % 10;
    printf("%d\n",idigit);  //1
    ino=ino/10;             //72

    idigit= ino % 10;
    printf("%d\n",idigit);  //2
    ino=ino/10;             //7

    idigit= ino % 10;
    printf("%d\n",idigit);  //7
    ino=ino/10;             //0

}
int main()
{
    int ivalue=721;

    //printf("enter number");
    //scanf("%d",&ivalue);              %d mahanje decimal value

    Display(ivalue);     //dukan

    return 0;
}