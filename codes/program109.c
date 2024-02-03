/*irow=3
icol=4

1 * * *
* 2 * * 
* * 3 *
* * * 4

*/

#include<stdio.h>
void Display(int irow, int icol)
{
    int i=0, j=0;

    for(i=1; i<=irow; i++)     //nested loop
    {
        for(j=1; j<=icol; j++)
        {
            if(i==j)
            {
                printf("%d\t",j);
            }
            else
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

