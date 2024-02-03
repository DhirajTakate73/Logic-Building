// problem statement: accept 2 numbers from user and perform addition.

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