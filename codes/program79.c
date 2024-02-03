//n number ch average

#include<stdio.h>
#include<stdlib.h>
float average(int arr[], int isize)
{
    int icnt=0, isum=0;
    
    float faverage=0.0f; //navin faverage chya variable madhye average chi value lihun khali pathavli

    for(icnt=0; icnt<isize; icnt++)
    {
        isum=isum+arr[icnt];
    }

    faverage=((float)isum / (float)isize); //average sathi 
    return faverage;
}       //accurate ans yenyasathi typecasting keli

int main()
{
    int icount=0, icnt=0;
    int *ptr=NULL;
    float fret=0.0f;

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

    fret=average(ptr, icount);
    printf("average is :%f\n",fret);

    free(ptr);
    printf("dynamic memory gets deallocated successfully...\n");

    return 0;
}