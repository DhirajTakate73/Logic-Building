//entered numbers mudhun odd numbers display kara fakt

#include<stdio.h>
#include<stdlib.h>
    //void display(int *arr, int isize)
    void displayodd(int arr[], int isize)  //(100,4) khalun ithe yeil
    {
        int icnt=0;
        
        printf("\nodd elements of the array are :\n");
            //1         2           3
        for(icnt=0; icnt<isize; icnt++)
        {
            if((arr[icnt] %2 )!=0)
        {
            printf("%d\t",arr[icnt]);
        }

        }
        printf("\n");
    }

int main()
{
    int icount=0,icnt=0;
    int *ptr=NULL;
    int iret=0;

    printf("enter the number of elements that you want to enter : \n");
    scanf("%d",&icount);

    ptr=(int *)malloc(icount * sizeof(int));
    printf("dynamic memory gets successfully allocated for %d elements\n",icount);

    printf("enter the %d values : \n",icount);
        //1         2           3
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nenter the element no %d:",icnt+1);
        scanf("%d",&ptr[icnt]);//4
    }

    displayodd(ptr,icount);    //display(100,4)
    
    free(ptr);  //free(100) ithun dangling pointer tyar hoil jo ki ithun deallocate zalelya memory la point karel

    printf("dynamic memory gets deallocated successfully...\n");
    
    return 0;
}