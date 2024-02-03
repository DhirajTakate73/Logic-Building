//small or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cvalue)
{
    if((cvalue >= 'a')    &&  (cvalue <=  'z'))
    {
        return true;
    }
    else
    {
        return false;
    }

    
}
int main()
{
    char ch = '\0';
    bool bret=false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bret=CheckSmall(ch);
    if(bret==true)
    {
        printf("Its a small letter\n");
    }
    else
    {
        printf("Its not a small letter\n");
    }

    return 0; 
}