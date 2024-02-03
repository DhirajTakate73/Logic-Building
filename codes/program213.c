#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// void InsertFirst(PPNODE Head, int no)
void push(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }

}

// void DeleteFirst(PPNODE Head)
int pop(PPNODE Head)
{

}

void display(PNODE Head)
{
    printf("Elements of stack are : \n");

    while(Head != NULL)
    {
        printf("| %d |\n",Head -> data);
        Head = Head -> next;
    }
}

int main()
{
    PNODE first = NULL;

    push(&first, 101);
    push(&first, 51);
    push(&first, 21);
    push(&first, 11);

    display(first);
    
    return 0;
}