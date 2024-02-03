#include<stdio.h>
#include<stdbool.h>     //for true and false values

void displayfactors(int ino)
{
    int icnt=0;

    printf("factors of %d are :\n",ino);

    for(icnt=1; icnt<ino; icnt++)    //factor aardhyachya pudhe nasto given no. chya mahnun NO/2 karayla pahije 2 madhye te pudhchya madhye karu 
        //1       2              3
    {
        if((ino % icnt)==0)   //4
        {
            printf("%d\n",icnt);
        }
    }
}
int main()
{   
    int ivalue=0;
    printf("enter the number :\n");
    scanf("%d",&ivalue);

    displayfactors(ivalue);

    return 0;
}                                   

//time complexity of this program is : O(N/2)  order of bolta yala big oh tych nav 
/*
    time complexity     INPUT       Iterations count
    O(N)                100             100
    O(2N)               100             200
    O(N^2)              100             10000
    O(N^3)              100             10000
    O(N/2)              100             50
    O(N/4)              100             25
    */