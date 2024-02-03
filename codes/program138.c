#include<stdio.h>

int countspace(char str[])    // str ha pointer ahe 
{
    int icnt = 0;

    while(*str != '\0')
    {
        if(*str ==' ')
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

    iret=countspace(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
    printf("frequency of white spaces is : %d\n",iret);

    return 0; 

}