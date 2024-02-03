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

    newn = (PNODE)malloc(sizeof(NODE));                         // new node creation
    newn -> data = no;                          
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*Head == NULL) && (*tail == NULL))                      // LL is empty
    {
        *Head = newn;                           
        *tail = newn;
    }
    else
    {
        newn -> next = *Head;                                 // new node chya next madhye 100
        (*Head) -> prev = newn;                               // junya pahilya node chya prev madhye new node
        *Head = newn;                                         // teacher la sangnyasathi ki new node insert zala ahe 
    }
    (*tail) -> next = *Head;                                  // to maintain circular nature
    (*Head) -> prev = *tail;                                  // to maintain circular nature

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
        newn -> prev = *tail;                                 // new node chya prev madhye 600(last node cha add.)              
        (*tail) -> next = newn;                               // junya last node chya next madhye new node(700 add.)takaycha
        *tail = newn;                                         // teacher la last la navin porga insert zala sangnyasathi
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
    
    InsertLast(&first, &last, 101);
    InsertLast(&first, &last, 111);
    InsertLast(&first, &last, 121);
    
    return 0;
}