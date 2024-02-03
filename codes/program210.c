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

void DeleteFirst(PPNODE Head, PPNODE tail)
{
    if((*Head == NULL) && (*tail == NULL))    // LL Is Empty
    {
        return;
    }
    else if(*Head == *tail)     // LL contains single node
    {
        free(*Head);        // OR free(*tail) 
        *Head = NULL;
        *tail = NULL;
    }
    else       // LL contains more than one node
    {
        (*Head) = (*Head) -> next;
        free((*tail) -> next);      // OR free ((*Head) -> prev); 
        (*Head) -> prev = *tail;
        (*tail) -> next = *Head;

    }
}

void DeleteLast(PPNODE Head, PPNODE tail)
{
    if((*Head == NULL) && (*tail == NULL))    // LL Is Empty
    {
        return;
    }
    else if(*Head == *tail)     // LL contains single node
    {
        free(*Head);        // OR free(*tail) 
        *Head = NULL;
        *tail = NULL;
    }
    else       // LL contains more than one node
    {
        *tail = (*tail) -> prev;
        free((*tail) -> next);          //  OR free((*Head) -> prev);
        (*tail) -> next = *Head;        
        (*Head) -> prev = *tail;
    }
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
        while(Head != tail -> next);

    }
}

int count(PNODE Head, PNODE tail)
{
     int icnt = 0;
    if(Head != NULL && tail != NULL)
    {
        do 
        {
            icnt++;
            Head = Head -> next;
        }
        while(Head != tail -> next);
        
    }
    return icnt;
}

void InsertAtPos(PPNODE Head, PPNODE tail, int no, int ipos)
{
    int size = 0, i = 0;
    PNODE newn = NULL;
    PNODE temp = *Head;

    size = count(*Head, *tail);

    if((ipos < 1) || (ipos > size + 1 ))
    {
        printf("Invalid Position...\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(Head, tail, no);
    }

    else if(ipos == size + 1)
    {
        InsertLast(Head, tail, no);
    }

    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;

        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
        
    }
}

void DeleteAtPos(PPNODE Head, PPNODE tail, int ipos)
{
    int size = 0, i = 0;
    PNODE temp = *Head;

    size = count(*Head, *tail);

    if((ipos < 1) || (ipos > size))
    {
        printf("Invalid Position...\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(Head, tail);
    }

    else if(ipos == size)
    {
        DeleteLast(Head, tail);
    }

    else
    {
        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }
        
    }
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iret = 0;

    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);
    display(first, last);
    iret = count(first, last);
    printf("\nNumber Of Nodes Are : %d",iret);

    InsertLast(&first, &last, 101);
    InsertLast(&first, &last, 111);
    InsertLast(&first, &last, 121);
    display(first, last);
    iret = count(first, last);
    printf("\nNumber Of Nodes Are : %d",iret);

    InsertAtPos(&first, &last, 105, 5);
    display(first, last);
    iret = count(first, last);
    printf("\nNumber Of Nodes Are : %d",iret);

    DeleteFirst(&first, &last);
    display(first, last);
    iret = count(first, last);
    printf("\nNumber Of Nodes Are : %d",iret);

    DeleteLast(&first, &last);
    display(first, last);
    iret = count(first, last);
    printf("\nNumber Of Nodes Are : %d",iret);

    return 0;
}