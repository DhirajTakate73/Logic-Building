//capital to lower convert

#include<stdio.h>

void strlwrx(char str[])    // str ha pointer ahe 
{
    while(*str != '\0')
    {
        if(*str >= 'A'  &&  *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
        
    }
    
}

int main()
{
    char arr[20];   //static memory allocation  19 letters deu shakto fakt karan last \0 sathi
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);
        
        //strlenx(100)

    strlwrx(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
    
    printf("updated string is : %s\n",arr);

    return 0; 

}

