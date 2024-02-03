#include<stdio.h>

void Display(int ino)       //for aani while nahi mahnun sequence cha program
{
    int idigit=0;
    printf("-------------------------------------------------------------\n");
    printf("value of ino is :%d\n",ino);  //721  

    printf("-------------------------------------------------------------\n");
    idigit= ino % 10;
    printf("digits is :%d\n",idigit);  //1
    ino=ino/10;             //72
    printf("value of ino is :%d\n",ino);    //72

    printf("-------------------------------------------------------------\n");
    idigit= ino % 10;
    printf("digits is :%d\n",idigit);  //2
    ino=ino/10;             //7
    printf("value of ino is :%d\n",ino);    //7

    printf("-------------------------------------------------------------\n");
    idigit= ino % 10;
    printf("digits is :%d\n",idigit);  //7
    ino=ino/10;             //0
    printf("value of ino is :%d\n",ino);    //0

}
int main()
{
    int ivalue=721;

    //printf("enter number");
    //scanf("%d",&ivalue);

    Display(ivalue);     //dukan

    return 0;
}