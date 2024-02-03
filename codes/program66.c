#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free

int main()
{
    int icount=0;
    int *ptr=NULL;      //chaku zakun thevaycha
    int icnt=0;

    printf("enter the number of elements : \n");
    scanf("%d",&icount);

    ptr=(int *)malloc(icount * sizeof(int));
    //malloc void* return karto mahnun typecasting keli int madhye 
    
    printf("enter the elements :\n");

    //1             2           3
    for(icnt=0; icnt<icount; icnt++)        //diwas  outer loop  array chi addressing 0 pasun chalu hote
    {
        scanf("%d",&ptr[icnt]); //4     store base address of allocated memory into ptr variable so ptr holds imaginary address for eg. 100
    }
    printf("your entered elements are : \n");
    //1             2           3
    for(icnt=0; icnt<icount; icnt++)        //golya  inner loop  1day=3golya
    {
        printf("%d\t",ptr[icnt]);      //4
    }
    printf("\n");

    /*
    
    scanf("%d",&ptr[0]);
    scanf("%d",&ptr[1]);
    scanf("%d",&ptr[2]);
    scanf("%d",&ptr[3]);
    
    */

    return 0;
}