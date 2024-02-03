//capital asel tar small aani small asel tar capital madhye convert

#include<stdio.h>

void strtogglex(char str[])    // str ha pointer ahe 
{
    while(*str != '\0')
    {
        if(*str >= 'a'  &&  *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A'  &&  *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
    
            //else if takava lagel is the solution    
}

int main()
{
    char arr[20];   //static memory allocation  19 letters deu shakto fakt karan last \0 sathi
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);
        //strlenx(100)

    strtogglex(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
    
    printf("updated string is : %s\n",arr);
    return 0; 

}

