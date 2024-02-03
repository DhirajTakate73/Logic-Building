//input : 4
//output : 4 3 2 1

#include<stdio.h>
void Display(int ino)
{
    int icnt=0;
    //      1       2         3
    for(icnt=ino; icnt>=1; icnt--)          //icnt=kuthun    icnt>=kuyhparyant
    {
        printf("%d\t",icnt);    //4
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