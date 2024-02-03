//problem yeto special scanf asla ki tyach solution
#include<stdio.h>

int count(char str[], char ch)    // str ha pointer ahe 
{
    int icnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            icnt++;
        }
        str++;
    }
    return icnt;

}

int main()
{
    char arr[20];   //static memory allocation  19 letters deu shakto fakt karan last \0 sathi
    char cvalue='\0';
    int iret=0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);
        //strlenx(100)
    printf("Enter the character for frequency calculation : \n");
    scanf(" %c",&cvalue);   //space dyachya %c chya aadhi nahitar input buffer madhye enter tasach rahato aani jeva scanf madhun letter vachaycha asto teva toh vachta yet nahi

    iret=count(arr,cvalue); //base address pathavnar ithun function la jo to pointer madhye catch karel
    printf("frequency of letter is : %d\n",iret);

    return 0; 

}

/*
special scanf mule string chya shevti jo enter dilela asto to scan nahi hot fakt tya aadhi chi string scan hote
aani dilela ENTER tasach store rahato INPUT BUFFER madhye tyamule jeva aapn navin scanf tyar karun value scan karto ti scan hot nahi 
mahnun tya scanf madhye character scan kartana %c chya aadhi SPACE dyaychi mahanje problem yenar nahi aani character scan hoil
*/