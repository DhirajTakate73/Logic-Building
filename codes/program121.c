//capital ghetla tar small return karaycha

#include<stdio.h>
#include<stdbool.h>

char convertSmall(char cvalue)
{
       return cvalue + 32;
}

int main()
{
    char ch = '\0';
    char cret='\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    cret=convertSmall(ch);
    
    printf("converted small letter is :%c\n",cret);

    return 0; 
}