#include<stdio.h>
#include<stdlib.h>
//singly linked list
//structure declaration memory milat nahi
struct node     //self referential structure
{
    int data;           //4bytes shirt cha no.
    struct node *next;  //8bytes    pointer
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(struct node ** Head, int No)
{   
    // PNODE
    struct node * newn = NULL;

    newn = (struct node *)malloc(sizeof(struct node));      //newn = (PNODE)malloc(sizeof(NODE)); 
    
    newn->data = No;
    newn->next = NULL;

}

int main()
{
    PNODE first=NULL;        //pointer   8bytes

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);        //call by address first navachya poiner cha node


    return 0;
}


//eak hath -> singly
//don hath -> doubly