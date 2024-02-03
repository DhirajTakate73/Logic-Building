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

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head; //temporary pointer for LL traversal (xerox to save address of first pointer)

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;  
    newn->next=NULL;

    if(*Head ==NULL)    //LL is empty
    {
        *Head=newn;
    }
    else
    {   //travel the LL till last node
        while(Temp->next !=NULL)
        {
            Temp = Temp->next;
        }
        Temp->next=newn;            // to add the address of new node at the end of last node

    }

}

void display(PNODE Head)
{
    printf("contents of linked list : \n");

    while(Head !=NULL)
    {
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int count(PNODE Head)
{
    int icnt = 0;
    
    while(Head != NULL)
    {
        icnt++;
        Head = Head -> next;
    }
    return icnt;
}
int main()
{
    PNODE first=NULL;   //vv imp master chya dokyatla pahila mulga
    int iret=0;
    
    InsertFirst(&first, 111);    
    InsertFirst(&first, 101);    
    InsertFirst(&first, 51);   
    InsertFirst(&first, 21);    
    InsertFirst(&first, 11);    
    display(first);
    iret=count(first);
    printf("number of nodes are : %d\n",iret);

    InsertLast(&first, 121);
    InsertLast(&first, 151);
    display(first);
    iret=count(first);
    printf("number of nodes are : %d\n",iret);

    return 0;
}