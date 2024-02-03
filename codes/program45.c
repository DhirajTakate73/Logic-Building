#include<stdio.h>
#include<stdbool.h>     //for true and false values

void displayfactors(int ino)
{
    int icnt=0;

    printf("factors of %d are :\n",ino);

    for(icnt=1; icnt<ino; icnt++)
        //1       2        3
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

//time complexity of this program is : O(N)  order of bolta yala big oh tych nav 
/*
    time complexity 
    O(N)
    O(2N)
    O(^2)

    */