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
//addition is a function which accepts 2 parameters as integers and it returns integer

int addition(int ino1, int ino2)
{
    int isum=0;
    isum=ino1+ino2;
    return isum;
}
int main()
{
    auto int ivalue1=0;
    auto int ivalue2=0;
    auto int ians=0;

   printf( "enter 1st number:\n");
   scanf("%d",&ivalue1);
   
   printf("enter 2nd number:\n");
   scanf("%d",&ivalue2);

   ians=addition(ivalue1,ivalue2);

   printf("addition is:%d\n",ians);

   return 0;
}
//step 5: test the code
/*
test case1:
input 10 11
output:21

test case2:
input:10 0
output:10

test case3:
input:12 -6
output:*/