#include<stdio.h>
#include<stdlib.h>
    //void display(int *arr, int isize)
    void display(int arr[], int isize)
    {
        int icnt=0;

        printf("elements of the array are: \n");

        for(icnt=0; icnt<isize; icnt++)
        {
            printf("%d\t",arr[icnt]);
        }
        printf("\n");
    
    }

int main()
{
    int icount=0,icnt=0;
    int *ptr=NULL;

    printf("enter the number of elements that you want to enter : \n");
    scanf("%d",&icount);

    ptr=(int *)malloc(icount * sizeof(int));
    //malloc chi return value void* aste mahnun typecast keli int* madhye malloc (icount evdhi memory pahije int chya patit)

    printf("enter the values : \n");
    for(icnt=0; icnt<icount; icnt++)    //jevdhe element array madhye takayche mahanje allocate kelelya dynamic memory chya index la store karayche tysathi ha loop 
    {
        scanf("%d",&ptr[icnt]);     //pointer la array sarkha treat kartoy paan toh internally pointer consider hoil
    }

    display(ptr,icount);  //ptr cha base address aani element cha count pass kela
    //taklele elements navin dynamic memory madhye array madhye store hotil aani tya tyar zalelya array la point karnarya pointer cha base address ithun pathavto ahe ki jya address pasun pudhe elements store ahe array madhye 
    free(ptr);  //memory vaprun zali ki free karaychi

    printf("Dynamic memory gets deallocated successfully...");

    return 0;
}