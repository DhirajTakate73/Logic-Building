//capital or not

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cvalue)
{
    if((cvalue >= 65)    &&  (cvalue <=  90))
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

    bret=CheckCapital(ch);
    if(bret==true)
    {
        printf("Its a capital letter\n");
    }
    else
    {
        printf("Its not a capital letter\n");
    }

    return 0; 
}