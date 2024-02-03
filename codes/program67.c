//user la v4run array madhye no. ghya aani display kara 

#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free

void display(int *arr, int isize)       //khalun aalela address ithe pointer madhye pakadla
{                                       //aani count isize madhye pakadli
    int icnt=0;

    for(icnt=0; icnt<isize; icnt++)
    {
        printf("%d\t",arr[icnt]);   //arr chya aadhi & nahi dila nahitar os che address display hotil paan aaplyala enter kelele no.s display karayche ahet
    }
    printf("\n");

}
int main()
{
    int icount=0;
    int *ptr=NULL;      //chaku zakun thevaycha
    int icnt=0;

    printf("enter the number of elements : \n");
    scanf("%d",&icount);

    ptr=(int *)malloc(icount * sizeof(int));
    //malloc void* return karto mahnun typecasting keli int madhye 
    
    printf("enter the elements :\n");

    //1             2           3
    for(icnt=0; icnt<icount; icnt++)
    {
        scanf("%d",&ptr[icnt]); //4
    }
        //address , kiti
    display(ptr,icount);       //ptr madhye array cha base address store hoil jo malloc mule ptr madhye store hoto   call by address , allocated memory cha base address function la pathavla 
                //display function la hey mahit nahi ki address chya pudhe kay ahe so count paan paas karav lagel teva tyla kalel ki pudhe kiti numbers aahet
    return 0;
}