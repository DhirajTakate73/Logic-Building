/*irow=3
icol=4

1 * 3 * 
1 * 3 * 
1 * 3 * 
1 * 3 * 

*/

#include<stdio.h>
void Display(int irow, int icol)
{
    int i=0, j=0;

    for(i=1; i<=irow; i++)  //outer loop rows sathi   
    {
        for(j=1; j<=icol; j++)          //inner loop column sathi      //nested loop
        {
            if((j % 2)==0)                  //  column wise change ahe so j madhye change                     
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",j);
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

    printf("Enter number of rows : \n");
    scanf("%d",&ino2);

    Display(ino1, ino2);

    return 0;

}

