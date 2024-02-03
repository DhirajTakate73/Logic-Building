//even cha count display kara

#include<stdio.h>
#include<stdlib.h>
    //void display(int *arr, int isize)
    int evencount(int arr[], int isize)  //(100,4) khalun ithe yeil
    {
        int icnt=0;     // local variable

        int ievencount=0;
            //1         2           3
        for(icnt=0; icnt<isize; icnt++)
        {
            if((arr[icnt] %2 )==0)
        {
            ievencount++;
        }

        }
        return ievencount;
    }

    //function kahi return karnar asel tar main madhye accept karnyasathi function chya aadhi variable lihaycha return value accept karnyasathi

int main()
{
    int icount=0,icnt=0;
    int *ptr=NULL;
    int iret=0;

    printf("enter the number of elements that you want to enter : \n");
    scanf("%d",&icount);

    ptr=(int *)malloc(icount * sizeof(int));
    printf("dynamic memory gets allocated successfully for %d elements\n",icount);

    printf("enter the %d values : \n",icount);
        //1         2           3
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nenter the element no %d:",icnt+1);
        scanf("%d",&ptr[icnt]);//4
    }

    iret=evencount(ptr,icount);    //display(100,4)
    
    printf("number of even elements are : %d\n",iret);
    free(ptr);  //free(100) ithun dangling pointer tyar hoil jo ki ithun deallocate zalelya memory la point karel

    printf("dynamic memory gets deallocated successfully...\n");
    
    return 0;
}