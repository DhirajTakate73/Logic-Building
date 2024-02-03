//sir cha special scanf string sathi

#include<stdio.h>
int main()
{
    char arr[20];   //static memory allocation  19 letters deu shakto fakt karan last \0 sathi

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);

    //string scan karnyasathi hey special scanf vapartat 
    //tyacha arth asa ki : me multiple letters ghenar ahe joparyant enter det nahi toparyant aani []ahe mahanje array madhye ghenar
    //  ^\n: joparyant new line chalu hot nahi toparyant asa arth
    
    printf("Entered string is : %s\n",arr);
    
    return 0; 
}

//memory shortage wastage hou shakto
//arr size den imp karan compiler la kalnar nahi
//  ^ Not cha symbol