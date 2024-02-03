//gets =string taka

#include<stdio.h>
int main()
{
    char arr[20];   //static memory allocation
    
    printf("Enter the string : \n");
    gets(arr);
    
    printf("Entered string is : %s\n",arr);
    
    return 0; 
}

//gets vaprun paan string scan karu shakto paaan gets la kuthe thambaych te mahit nasta to scan karatch rahato paan scanf la te kalta 
//gets  :   meaning is string taka