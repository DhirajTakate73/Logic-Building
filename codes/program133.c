#include<stdio.h>

int countdigits(char str[])    // str ha pointer ahe 
{
    int icnt = 0;

    while(*str != '\0')
    {
        if((*str >='0')  &&  (*str <='9'))
        {
            icnt++;
        }
        str++;
    }
    return icnt;

}

int main()
{
    char arr[20];   //static memory allocation  19 letters deu shakto fakt karan last \0 sathi
    int iret=0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);

        //strlenx(100)
    iret=countdigits(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
   
    printf("frequency of digits is : %d\n",iret);

    return 0; 

}