#include<stdio.h>
//logical or ||-> if any of the condition is true then it enters inside the if
//logical and &&-> if all the conditions are true then it enters inside the if

void DisplayClass(float fmarks)
{
    if((fmarks<0.00)|| (fmarks>100.00)) //filter OR
        {
        printf("invalid marks...\n");
        }
        if((fmarks>=0.0) && (fmarks<35.00))
        {
            printf("you are fail...\n");
        }
        else if((fmarks>=35.00)&&(fmarks<50.00))
        {
            printf("your class is pass class\n");
        }
        else if((fmarks>=50.00)&&(fmarks<60.00))
        {
            printf("your class is second class\n");
        }
        else if((fmarks>=60.00)&&(fmarks<75.00))
        {
            printf("your class is 1st class\n");
        }
        else if((fmarks>=75.00)&&(fmarks<=100.00))
        {
            printf("your class is 1st class with distinction\n");
        }

}


int main()
{
    float fvalue=0.0f;
   printf("enter your percentage:\n");
    scanf("%f",&fvalue);

    DisplayClass(fvalue);

    return 0;
}