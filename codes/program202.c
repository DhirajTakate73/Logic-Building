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

}

void InsertLast(PPNODE Head, PPNODE tail, int no)
{

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
    
    return 0;
}