#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data; 
    struct node *next;
    struct node *prev;      //# badal ahe asa arth
};

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
    else
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;    //#
        *Head = newn;
    }

}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

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
        //type 2
        while(temp -> next !=NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;       //#

    }

}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)       //LL is Empty
    {
        return;
    }                                                          // #
    else if( ( (*Head) -> next == NULL)    &&     (  (*Head) -> prev == NULL)  )        // if LL contains single node 
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Head) -> prev);
        (*Head) -> prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)       //LL is Empty
    {
        return;
    }                                                          // #
    else if( ( (*Head) -> next == NULL)    &&     (  (*Head) -> prev == NULL)  )        // if LL contains single node 
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
       while(temp -> next -> next != NULL)
       {
            temp = temp -> next;
       }
       free(temp -> next);
       temp -> next = NULL;

    }
}

void Display(PNODE Head)
{
    printf("\nContents of LinkedList are : \n");

    printf("NULL <=> ");
    while(Head != NULL)
    {
        printf("| %d | <=> ",Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int count(PNODE Head)
{
    int icnt = 0;
    while(Head !=NULL)
    {
        icnt++;
        Head = Head -> next;
    }
    return icnt;
}

void DeleteAtPos(PPNODE Head, int ipos)
{
    int size = 0;
    size = count(*Head);

    if((ipos < 1) || (ipos > (size)))
    {
        printf("Invalid Position...\n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if(ipos == size)
    {
        DeleteLast(Head);
    }
    else
    {

    }

}


void InsertAtPos(PPNODE Head, int no, int ipos)
{
    int size = 0, i = 0;
    size = count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;

    if((ipos < 1) || (ipos > (size + 1)))
    {
        printf("Invalid Position...\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(Head, no);
    }
    else if(ipos == size + 1)
    {
        InsertLast(Head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;        //#

        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;    //#
        temp -> next = newn;
        newn -> prev = temp;            //#

    }
}

int main()
{
    PNODE first = NULL;     //  teacher chya dokyatla phila porga
    int iret = 0;

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    Display(first);
    iret = count(first);
    printf("Number of elements are : %d\n",iret);

    InsertLast(&first, 101);
    InsertLast(&first, 111);
    InsertLast(&first, 121);
    Display(first);
    iret = count(first);
    printf("Number of elements are : %d\n",iret);

    InsertAtPos(&first, 105, 5);
    Display(first);
    iret = count(first);
    printf("Number of elements are : %d\n",iret);

    DeleteFirst(&first);
    Display(first);
    iret = count(first);
    printf("Number of elements are : %d\n",iret);

    DeleteLast(&first);
    Display(first);
    iret = count(first);
    printf("Number of elements are : %d\n",iret);


    return 0;
}


