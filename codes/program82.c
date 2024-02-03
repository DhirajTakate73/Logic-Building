//max min dogh display kara

#include<stdio.h>
#include<stdlib.h>

int maxmin(int arr[], int isize)
{
    int icnt=0;
    int imax=arr[0];        //pahila shirt
    int imin=arr[0];        //pahila shirt
    

    for(icnt=0; icnt<isize; icnt++)                 //1st element 0 nahi takaycha kadhich nahitar j pahije te comparison bhetnar nahi
    {
        if(arr[icnt]>imax)
        {                                          //imax aaani imin dogh eaksathi return nahi karta yet paan print karu shakto
            imax=arr[icnt];
        }
        if(arr[icnt]<imin)
        {
            imin=arr[icnt];
        }
        
    }printf("maximmum element is :%d\n",imax);
    printf("minimum element is :%d\n",imin);
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

    maxmin(ptr, icount);
    
    free(ptr);
    printf("dynamic memory gets deallocated successfully...\n");

    return 0;
}