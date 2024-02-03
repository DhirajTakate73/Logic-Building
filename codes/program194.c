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
    printf("Elements of linked list are : \n");

    if((Head != NULL) && (Tail != NULL))       // LL madhye koni tari ahe (yachya aadhichya loops madhye hey nai kel because while loop aadhi condition check karun madhye jat hota)
    {
        do  // kara
        {
            printf("| %d | -> ",Head -> data);
            Head = Head -> next;    // address save karun pudhcha data dakhavnyasathi 
        } while(Head != Tail -> next);      // joparyant head not equal to tail -> next

        printf("Address of first node");
    }
}

int count(PNODE Head, PNODE Tail)
{
    return 0;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;      //#

    InsertFirst(&first, &last, 121);
    InsertFirst(&first, &last, 111);
    InsertFirst(&first, &last, 101);
    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);


    Display(first, last);


    return 0;
}