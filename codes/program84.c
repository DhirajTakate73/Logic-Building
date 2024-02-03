//eakdhda element kiti vela aala ahe te check kara dilelya no. madhun
#include<stdio.h>
#include<stdlib.h>

int frequency(int arr[] ,int isize,int ino)
{
    int icnt=0;
    int ifrequency=0;     

    for(icnt=0; icnt<isize; icnt++)
    {
        if(arr[icnt] == ino)
        {
            ifrequency++;
        }
        
    }return ifrequency;
}
int main()
{
    int icount=0, iret=0, icnt=0, ivalue=0;
    int *ptr=NULL;
    
    printf("enter the number of elements that you want to enter :\n");
    scanf("%d",&icount);

    ptr=(int*)malloc(icount * sizeof(int));
    printf("dynamic memory gets allocated for %d element successfully...\n",icount);

    printf("enter the elements :\n");
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nenter the elements no %d :",icnt+1);
        scanf("%d",&ptr[icnt]);
    }

    printf("enter the element that you want to search\n");
    scanf("%d",&ivalue);

    iret=frequency(ptr, icount, ivalue);
    printf("%d occurs %d times\n",ivalue,iret);
    
    free(ptr);
    printf("dynamic memory gets deallocated successfully...\n");

    return 0;
}