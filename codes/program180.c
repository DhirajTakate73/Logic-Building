#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data; 
    struct node *next;
    struct node *prev;      //# badal ahe asa arth
};      // 20 bytes

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;        //#

    if(*Head == NULL)   //LL is empty
    {
        *Head = newn;
    }    
    else                    // if there is already any node in LL
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;    //#  if we did't give bracket to *Head precision issue will come and -> will run first.
        *Head = newn;
    }

}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;        //#

    if(*Head == NULL)   //LL is empty
    {
        *Head = newn;
    }    
    else
    {
        
    }

}

void InsertAtPos(PPNODE Head, int no, int ipos)
{

}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE Head)
{

}

void DeleteAtPos(PPNODE Head, int ipos)
{

}

void Display(PNODE Head)
{

}

int count(PNODE Head)
{
   return 0; 
}

int main()
{
    PNODE first = NULL;     //  teacher chya dokyatla phila porga

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    return 0;
}


