#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free

void display(int arr[], int isize)  //* chya aaivagi [ ]takla
{                                   //karan array madhye ghetoy
    int icnt=0;

    for(icnt=0; icnt<isize; icnt++)
    {
        printf("%d\t",arr[icnt]);
    }
    printf("\n");

}
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
    for(icnt=0; icnt<icount; icnt++)
    {
        scanf("%d",&ptr[icnt]); //4
    }
        //address kiti
    display(ptr,icount);       //ptr madhye arr cha address store hoil
    //call by address(ptr) , call by value(icount)
    return 0;
}