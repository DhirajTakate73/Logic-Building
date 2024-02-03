#include<stdio.h>
#include<stdlib.h>

typedef struct node     //typedef nasta tar } chya pudhche object consider zale aste
{
    int data;       
    struct node* next;
}   NODE, *PNODE, **PPNODE;        //shorthand definations 
// ha syntax kiva magchya code cha syntax konta paan chalto                 typedef is just like giving new name 

/*
        typedef struct node NODE;
        typedef struct node* PNODE;
        typedef struct node** PPNODE;
*/

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;      //#

    return 0;
}