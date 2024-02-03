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

    if(((*Head) == NULL) && ((*Tail) == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;       //#
    }
    else        //LL contains atleast 1 node
    {
        newn -> next = *Head;
        *Head = newn;
    }
    (*Tail) -> next = *Head;        //#
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail) -> next = *Head;

    }
    else        //LL contains atleast 1 node
    {
       (*Tail) -> next = newn;
       (*Tail) = newn;
       (*Tail) -> next = *Head;

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
    printf("\nElements of linked list are : \n");

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | -> ",Head -> data);
            Head = Head -> next;
        } while(Head != Tail -> next);

        printf("Address of first node\n");
    }
}

int count(PNODE Head, PNODE Tail)
{
    int icnt = 0;
    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            icnt++;
            Head = Head -> next;
        } while(Head != Tail -> next);

    }
    return icnt;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;      //#
    int iret = 0;

    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);
    Display(first, last);
    iret = count(first, last);
    printf("Number of elements are : %d\n",iret);

    InsertLast(&first, &last, 101);
    InsertLast(&first, &last, 111);
    InsertLast(&first, &last, 121); 
    Display(first, last);
    iret = count(first, last);
    printf("Number of elements are : %d\n",iret);  

    return 0;
}