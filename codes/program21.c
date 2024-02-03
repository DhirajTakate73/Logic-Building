#include<stdio.h>

void DisplayExamTime(int istandard)
{
    if(istandard==1)
    {
       printf("your exam is at 8AM\n");
    }
    else if(istandard==2)
    {
        printf("your exam is at 9AM\n");
    }
    else if(istandard==3)
    {
       printf("your exam is at 10AM\n"); 
    }
    else if(istandard==4)
    {
        printf("your exam is at 11AM\n");
    }
    else if(istandard==5)
    {
        printf("your exam is at 12AM\n");
    }
}

int main()
{
    int ivalue=0;

    printf("enter your standard:\n");
    scanf("%d",&ivalue);

    DisplayExamTime(ivalue);

    return 0;
}       //5th std takla tar direct input case 5 jato karan jumptable mule fast hot switch case madhye 