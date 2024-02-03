#include<stdio.h>
#include<stdlib.h>

typedef struct node     //typedef nasta tar } chya pudhche object consider zale aste
{

    int data;       
    struct node *next;

}   NODE, *PNODE, **PPNODE;        //shorthand definations 
// ha syntax kiva magchya code cha syntax konta paan chalto

/*
        typedef struct node NODE;
        typedef struct node* PNODE;
        typedef struct node** PPNODE;
*/

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;       //#
    }
    else        //LL contains atleast 1 node
    {
        newn -> next = *Head;       // navin node chya aatmadhye junya pahilya poracha address
        *Head = newn;               // teacher chya dokyat navin node cha address takaycha
    }
    (*Tail) -> next = *Head;        //#  to main circular nature of LL
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;          // teacher chya dokyat navin node cha address takaycha
        *Tail = newn;           // #   600 chya next madhye 700 taknyasathi
        (*Tail) -> next = *Head;            // to main circular nature of LL

    }
    else        //LL contains atleast 1 node
    {
        
    }
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{

}

void DeleteLast(PPNODE Head, PPNODE Tail)
{

}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{

}

void Display(PNODE Head, PNODE Tail)
{

}

int count(PNODE Head, PNODE Tail)
{
    return 0;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;      //#

    return 0;
}