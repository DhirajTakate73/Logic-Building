#include<stdio.h>
#include<stdlib.h>
    //void display(int *arr, int isize)
    void display(int arr[], int isize)  //(100,4) khalun ithe yeil  arr[] ha pointer ahe
    {
        int icnt=0;

        printf("\nElements of the array are : \n");
            //1         2           3
        for(icnt=0; icnt<isize; icnt++)     //Time complexity of this loop is O(N)
        {
            printf("%d\t",arr[icnt]);//4    arr[0],arr[1],arr[2],arr[3]         10 20 30 40 resp.
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
    printf("dynamic memory gets allocated successfully for %d elements\n",icount);

    printf("enter the %d values : \n",icount);
        //1         2           3
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nEnter the element no %d:",icnt+1);    //1 2 3 4 5 user friendly banvanyasathi
        scanf("%d",&ptr[icnt]);//4
    }

    display(ptr,icount);    //display(100,4)

    free(ptr);  //free(100) ithun dangling pointer tyar hoil jo ki ithun deallocate zalelya memory la point karel
    //memory manager will free the memory          satbara change hoto fakt zameen tashich rahate   
    printf("dynamic memory gets deallocated successfully...\n");
    return 0;
}

//well decorated code

