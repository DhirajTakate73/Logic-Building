// problem statement: accept 2 numbers from user and perform addition.
//step 1: understand the problem statement.
//conclusion: we have to accept 2 integers and perforrm its addition.
// step 2:write the algorithm
/*start
accept first number from user and store it into no1
accept second number from user and store it into no2
create one variable to store the result named as ans
perform addition of no1 and no2, store the result in ans 
display the result from ans to the user 
stop
*/

//step 3:decide the programming language (c/c++/java/python)
//we select c programming
//step 4: write the program

#include<stdio.h>
int main()
{
    int i, j, k;
   printf( "enter 1st number:\n");
   scanf("%d",&i);
   printf("enter 2nd number:\n");
   scanf("%d",&j);

   k=i+j;

   printf("addition is:%d\n",k);

   return 0;
}