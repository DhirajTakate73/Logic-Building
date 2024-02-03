//pattern printing
//6 times linear pattern
//*   *   *   *   *   * 

#include<stdio.h>
void Display()      // function kahi return nahi karnar mahnun void
{
    int icnt=0;
    //    1         2       3
    for(icnt=1; icnt<=6; icnt++)
    {
        printf("*\t");      //4
    }
    printf("\n");       //asa takaaycha pretkeyk loop chya shevti mahanje disayla changla dista
}
int main()
{

    Display();

    return 0;

}
//array asla tar 
//kuthlihi ghosta repeat hot asel tar tithe loop 100% yenar mahnaje yenar