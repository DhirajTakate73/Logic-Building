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

int sum(PNODE Head)
{
    int isum = 0;
    while(Head != NULL)
    {
       isum = isum + (Head -> data);
       Head = Head -> next;
    }
    return isum;
}

int main()
{
    PNODE first = NULL;
    int iret = 0;
    
    InsertFirst(&first, 111);
    InsertFirst(&first, 100);
    InsertFirst(&first, 50);
    InsertFirst(&first, 20);
    InsertFirst(&first, 11);

    display(first);

    iret = sum(first);
    printf("Summation of all elements is : %d\n",iret);

    return 0;
}