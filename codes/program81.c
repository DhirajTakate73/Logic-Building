//n number madhun minimum element display kara

#include<stdio.h>
#include<stdlib.h>

int minimum(int arr[], int isize)
{
    int icnt=0;
    int imin=arr[0];        //pahila shirt

    for(icnt=0; icnt<isize; icnt++)
    {
        if(arr[icnt] < imin)
        {
            imin=arr[icnt];
        }
    }return imin;
}

int main()
{
    int icount=0, iret=0, icnt=0;
    int *ptr=NULL;
    
    printf("enter the number of elements that you want to enter :\n");
    scanf("%d",&icount);

    ptr=(int*)malloc(icount * sizeof(int));
    printf("dynamic memory gets allocated for %d elements successfully...\n",icount);

    printf("enter the elements :\n");
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nenter the elements no %d :",icnt+1);
        scanf("%d",&ptr[icnt]);
    }

    iret=minimum(ptr, icount);
    printf("minimum element is :%d\n",iret);

    free(ptr);
    printf("dynamic memory gets deallocated successfully...\n");

    return 0;
}