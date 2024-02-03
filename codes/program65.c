#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free

int main()
{
    int icount=0;
    int *ptr=NULL;      //chaku zakun thevaycha   allocate kelelya memory cha address store karnysathi ptr lagel
    int icnt=0;

    printf("enter the number of elements that you want to enter : \n");
    scanf("%d",&icount);

    ptr=(int *)malloc(icount * sizeof(int));        //runtime la memory allocate hoil
    //malloc void* return karto mahnun typecasting keli int madhye 
    //ptr=malloc(kiti elements * 1 element kiticha)
    //so aata ithe tya elemets la memory allocate zali
    printf("enter the elements :\n");


    for(icnt=0; icnt<icount; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }
    printf("your entered elements are : \n");       //no. display karnyasathi khalcha sagla
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("%d\t",ptr[icnt]);   //ptr chya aadhi &takla tar os che hexadecimal address display hotil internal che
    }
    /*scanf("%d",&ptr[0]);
    scanf("%d",&ptr[1]);                                           //   1          2        3
    scanf("%d",&ptr[2]);         0 pasun 3 paryant jaych ahe   => for(icnt=0; icnt<icount; icnt++)  aani common printf("%d",&ptr[icnt])
    scanf("%d",&ptr[3]);
    */



    return 0;
}

//Time Complexity : O(N)