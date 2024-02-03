#include<stdio.h>

void DisplayExamTime(int istandard)
{
    switch(istandard)
    {
    case 1:
       printf("your exam is at 8AM\n");
       break;
    case 2:
       printf("your exam is at 9AM\n");
       break;
    case 3:
       printf("your exam is at 10AM\n"); 
       break;
    case 4:
        printf("your exam is at 11AM\n");
        break;
    case 5:
        printf("your exam is at 12AM\n");
        break;
    default:
        printf("wrong input...\n");
    }                           //if else peksha swich case fast chalte karan sagla nahi run hot direct case madhye accessing hot

}

int main()
{
    int ivalue=0;

    printf("enter your standard:\n");
    scanf("%d",&ivalue);

    DisplayExamTime(ivalue);

    return 0;
}       //5th std takla tar direct input case 5 jato karan jumptable mule fast hot switch case madhye 