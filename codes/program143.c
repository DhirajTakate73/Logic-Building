#include<stdio.h>

void strtogglex(char str[])    // str ha pointer ahe 
{
    while(*str != '\0')
    {
        if(*str >= 'a'  &&  *str <= 'z')
        {
            *str = *str - 32;
        }
        else
        {
            *str = *str + 32;
        }
        str++;
    }
    
        //ha chukicha program ahe pudhcha right ahe eakdum
}

int main()
{
    char arr[20];   //static memory allocation  19 letters deu shakto fakt karan last \0 sathi
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);
        
        //strlenx(100)
    strtogglex(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
    
    printf("Updated string is : %s\n",arr);
    
    return 0; 

}

