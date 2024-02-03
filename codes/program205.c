#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, PPNODE tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*Head == NULL) && (*tail == NULL))      // LL is empty
    {
        *Head = newn;
        *tail = newn;
    }
    else
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;
        *Head = newn;
    }
    (*tail) -> next = *Head;
    (*Head) -> prev = *tail;

}

void InsertLast(PPNODE Head, PPNODE tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*Head == NULL) && (*tail == NULL))      // LL is empty
    {
        *Head = newn;
        *tail = newn;
    }
    else
    {
        newn -> prev = *tail;
        (*tail) -> next = newn;
        *tail = newn;
    }
    (*tail) -> next = *Head;
    (*Head) -> prev = *tail;

}

void InsertAtPos(PPNODE Head, PPNODE tail, int no, int ipos)
{

}

void DeleteFirst(PPNODE Head, PPNODE tail)
{

}

void DeleteLast(PPNODE Head, PPNODE tail)
{

}

void DeleteAtPos(PPNODE Head, PPNODE tail, int ipos)
{

}

void display(PNODE Head, PNODE tail)
{
    printf("\nContents of Doubly Circular Linked List Are : ");
    if(Head != NULL && tail != NULL)
    {
        do 
        {
            printf("| %d | <=>",Head -> data);
            Head = Head -> next;
        }
        while(Head != tail -> next);                                                // exact singly circular sarkha 

    }
}

int count(PNODE Head, PNODE tail)
{
    return 0;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;

    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);
    display(first, last);

    InsertLast(&first, &last, 101);
    InsertLast(&first, &last, 111);
    InsertLast(&first, &last, 121);
    display(first, last);
    
    return 0;
}