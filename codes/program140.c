#include<stdio.h>

int replacevowels(char str[])    // str ha pointer ahe 
{
    int icnt = 0;

    while(*str != '\0')
    {
        if(*str =='A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str =='a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            *str = '_';
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
    replacevowels(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
    
    printf("updated string is : %s\n",arr);
    return 0; 

}

