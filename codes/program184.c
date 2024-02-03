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

void InsertAtPos(PPNODE Head, int no, int ipos)
{

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
        *Head = NULL;           // to inform teacher that first children is gone
    }
    else
    {
        *Head = (*Head) -> next;        // 200 la point karnyasathi to avoid the use of temp pointer
        free((*Head) -> prev);          // 200 chya prev madhla 100 free karyasathi
        (*Head) -> prev = NULL;         // 200 first porga zala tycha hath parat khishat ghalnyasathi
    }
}

void DeleteLast(PPNODE Head)
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
       
    }
}

void DeleteAtPos(PPNODE Head, int ipos)
{

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

    DeleteFirst(&first);
    Display(first);
    iret = count(first);
    printf("Number of elements are : %d\n",iret);



    return 0;
}


