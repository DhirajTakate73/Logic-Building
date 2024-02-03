//rows aani columns kiti user la v4run display kara
/*
    * * * * 
    * * * *
    * * * * 
    * * * *
*/

#include<stdio.h>
void Display()
{
    int i=0, j=0;

    for(i=1; i<=3; i++)     //   rows sathi ha outer loop                  -- nested loop --
    {
        for(j=1; j<=4; j++) // columns sathi ha inner loop
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}
int main()
{
    

    Display();

    return 0;

}

