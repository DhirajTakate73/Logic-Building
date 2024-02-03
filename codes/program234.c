#include<stdio.h> //for printf scanf
#include<stdlib.h>  //for malloc calloc

struct node     //structure declaration(self referential)
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;  
    newn->next=NULL;

    if(*Head ==NULL)    //LL is empty
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}

void display(PNODE Head)
{
    printf("\ncontents of Singly Linear linked list are : \n");

    while(Head !=NULL)
    {
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int FirstOccurrence(PNODE Head, int no)
{
    int ipos = 1;
    while(Head != NULL)
    {
        if(Head -> data == no)
        {
            break;
        }
        Head = Head -> next;
        ipos++;
    }
    if(Head == NULL)                        // dilela Number nasel tar
    {
        return -1;
    }
    else 
    {
        return ipos;
    }
    
}

int main()
{
    PNODE first = NULL;
    int iret = 0;
    
    InsertFirst(&first, 111);
    InsertFirst(&first, 11);
    InsertFirst(&first, 50);
    InsertFirst(&first, 11);
    InsertFirst(&first, 11);
    InsertFirst(&first, 5);
    InsertFirst(&first, 3);


    display(first);

    iret = FirstOccurrence(first, 11);
    printf("FirstOccurrence of 11 is at position : %d\n",iret);

    return 0;
}