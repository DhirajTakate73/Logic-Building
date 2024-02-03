//string edit cha program

#include<stdio.h>

void replace(char str[])    // str ha pointer ahe 
{

    while(*str != '\0')
    {
        if(*str =='a')  //jithe a asel tithe _yeil
        {
            *str = '_';
        }
        str++;
    }   //return karaychi garaj nahi karan *str madhla change direct main madhlya data la point karto ahe aani tyat direct change hoto ahe call by address ahe mahnun tya address varach jaun direct change hoto 

}

int main()
{
    char arr[20];   //static memory allocation  19 letters deu shakto fakt karan last \0 sathi

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);
        
        //strlenx(100)
    replace(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
    
    printf("updated string is : %s\n",arr);

    return 0; 

}

//call by address cha program