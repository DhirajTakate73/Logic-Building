//input : 4
//output : 1 # 2 # 3 # 4 #

#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    //    1         2          3
    for(icnt=1; icnt<=ino; icnt++)
    {
        printf("%d\t#\t",icnt);  //4           //#static ahe aani icnt dynamic ahe
    }
    printf("\n");
}
int main()
{
    int ivalue=0;

    printf("enter number of times you want to display pattern on screen\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;

}

//  Time complexity of above code is : O(N)