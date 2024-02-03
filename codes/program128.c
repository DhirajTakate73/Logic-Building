//string chya madhle character mojun kalva

#include<stdio.h>

//swatacha fun ahe mahnun x nav ahe last la
int strlenx(char str[])    //ha pointer ahe 
{
    int icnt = 0;

    while(*str != '\0')
    {
        icnt++;
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
    iret=strlenx(arr); //base address pathavnar ithun function la jo to pointer madhye catch karel
    
    printf("length of string is : %d\n",iret);

    return 0; 

}
