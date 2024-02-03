//rows aani columns kiti user la v4run display kara
/*
    * * * * 
    * * * *
    * * * * 
    * * * *
*/

#include<stdio.h>
void Display(int irow, int icol)
{
    int i=0, j=0;

    for(i=1; i<=irow; i++)     //nested loop    outer loop 1da firel teva inner loop 3da firel      1 diwsath 3 golya, 3 diwsath 9 Golya
    {
        for(j=1; j<=icol; j++)
        {
            printf("*\t");
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

