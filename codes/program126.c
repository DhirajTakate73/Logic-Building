#include<stdio.h>

void display(char *str)
{
    printf("String is : %s\n",str); //function he string display karel
}

int main()
{
    char arr[20];   //static memory allocation  19 letters deu shakto fakt karan last \0 sathi

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);

    display(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
        
    return 0; 

}
