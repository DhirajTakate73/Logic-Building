//n number madhun largest element display kara          vv imp for interview

#include<stdio.h>
#include<stdlib.h>

int maximum(int arr[], int isize)
{
    int icnt=0;     //counter count karnyasathi fakt
    int imax=arr[0]; //pahila shirt pahila enter kelela number bakichya sobat compare karycha toh arr[0] madhye store hoil
    //1             2       3
    for(icnt=0; icnt<isize; icnt++)
    {
        if(arr[icnt]>imax)  //dakhavlelya shartachi kimmat mothi asel imax(1st enter kelelya element) peksha
        {
            imax=arr[icnt];//4
        }
    }return imax;
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

    iret=maximum(ptr, icount);
    printf("maximum element is :%d\n",iret);

    free(ptr);
    printf("dynamic memory gets deallocated successfully...\n");

    return 0;
}