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

void InsertFirst(PPNODE Head, int No)
{   
    //step 1 : allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    //struct node* malloc(sizeof(struct node))

    //step 2 : initialize the node
    newn->data = No;
    newn->next = NULL;

    //step 3 : check whether LL is empty or not
    if(*Head == NULL)       //LL is empty
    {
        *Head = newn;
    }

    else        // LL(linked list) contains atleast 1 node in it
    {
        newn -> next = *Head;
        *Head = newn;
    }

}

int main()
{
    PNODE first=NULL;        //pointer   8bytes

    InsertFirst(&first, 51);    //InsertFirst(60, 51);
    InsertFirst(&first, 21);    //InsertFirst(60, 21);
    InsertFirst(&first, 11);    //InsertFirst(60, 11);    //call by address first navachya poiner cha node


    return 0;
}


//eak hath -> singly
//don hath -> doubly