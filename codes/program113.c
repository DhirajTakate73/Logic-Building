/*irow=6
icol=6

# $ $ $ $ $
* # $ $ $ $
* * # $ $ $
* * * # $ $
* * * * # $
* * * * * #

*/


//frame pattern

#include<stdio.h>
void Display(int irow, int icol)
{
    int i=0, j=0;

    for(i=1; i<=irow; i++)     //nested loop
    {
        for(j=1; j<=icol; j++)
        {
            if(i==j)        //diagonal     //upper lower tringular sathi
            {                           //multiple paiki 1 true asel mahnun || vaparla
                printf("#\t");
            }
            else if(i>j)        //lower tringle
            {
                printf("*\t");
            }
        }
        
        printf("\n\n");
    }
    
}
int main()
{
    int ino1=0, ino2=0;
    
    printf("Enter number of rows : \n");
    scanf("%d",&ino1);

    printf("Enter number of columns : \n");
    scanf("%d",&ino2);

    Display(ino1, ino2);

    return 0;

}

