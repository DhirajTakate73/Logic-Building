#include<stdio.h>
void display(int ino)
{
    int idigit=0;
    //joparyant ino 0 peksha motha ahe 
    //toparyant fira
    while(ino>0)
    {
        idigit= ino % 10;
        printf("digit is : %d\n",idigit);
        ino= ino/10;
        printf("number is : %d\n",ino);
    }
}
int main()
{
    int ivalue=0;
    printf("enter number :\n");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}