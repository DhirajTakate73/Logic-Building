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
    PNODE Temp = *Head; //temporary pointer for LL traversal

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
        //add the address of new node at last position
        Temp->next=newn;

    }

}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)   //case 1
    {
        return; //karan delete karnyasarkha kahi nahi ye
    }
    else if((*Head)->next == NULL)  //case 2
    {
        free(*Head);        //base address deto
        *Head = NULL;       //pahila porga gela asa sangava lagta
    }
    else    //case 3
    {
        *Head = (*Head) -> next;
        free(Temp);
    }

}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)   //case 1
    {
        return; //karan delete karnyasarkha kahi nahi ye
    }   //void ahe so return value nahi fakt return
    else if((*Head)->next == NULL)  //case 2
    {
        free(*Head);        //base address deto  , pahila porga jail paan sagli por gheun jail so pahilya poracha address copy karun theva temp madhye 
        *Head = NULL;       //pahila porga gela asa sangava lagta
    }
    else    //case 3
    {
        while(Temp->next->next !=NULL)  //(300 != null)
        {
            Temp = Temp -> next;
        }
        free(Temp->next);
        Temp -> next =NULL;

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

void DeleteAtPos(PPNODE Head, int ipos)
{
    int size = 0;
    PNODE Temp = *Head;
    PNODE targetednode = NULL;
    int i = 0;

    size = count(*Head);

    //case 1 : Invalid Position ( ex : 11 /-2/ 8)
    if((ipos < 1) || (ipos > size))
    {
        printf("Invalid Position\n");
        return;
    }

    //case 2 : First Position   (ex : 1)
    if(ipos == 1)
    {
        DeleteFirst(Head);
    }

    //case 3 : Last Postion     (ex : 7)
    else if(ipos == size)
    {
        DeleteLast(Head);
    }

    //case 4 : position is in between first and last    (ex : 5)
    else
    {
        for(i = 1; i < ipos-1; i++)
        {
            Temp = Temp->next;
        }
        targetednode = Temp -> next;

        Temp->next = Temp->next->next;
        free(targetednode);
    }
}

void InsertAtPos(PPNODE Head, int No, int ipos)
{
    int size = 0;                    
    PNODE newn = NULL;              // pointer 
    int i = 0;
    PNODE Temp = *Head;             //for traversal

    size = count(*Head);

    //case 1 : Invalid Position ( ex : 11 /-2/ 8)
    if((ipos < 1) || (ipos > size + 1))
    {
        printf("Invalid Position\n");
        return;
    }

    //case 2 : First Position   (ex : 1)
    if(ipos == 1)
    {
        InsertFirst(Head , No);
    }

    //case 3 : Last Postion     (ex : 7)
    else if(ipos == size + 1)
    {
        InsertLast(Head, No);
    }

    //case 4 : position is in between first and last    (ex : 5)
    else
    {
        newn = (PNODE)malloc(sizeof(NODE)); //navin node karta memory allocate keli
        newn -> data = No;
        newn -> next = NULL;

        for(i = 1; i < ipos-1; i++)         // entered position chya aadhi jaun thambnyasathi
        {
            Temp = Temp -> next;
        }

        newn->next = Temp->next;
        Temp->next = newn;
    }
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

    InsertAtPos(&first, 105, 5);
    display(first);
    iret=count(first);
    printf("number of nodes are : %d\n",iret);

    DeleteAtPos(&first, 5);
    display(first);
    iret=count(first);
    printf("number of nodes are : %d\n",iret);

    DeleteFirst(&first);
    display(first);
    iret=count(first);
    printf("number of nodes are : %d\n",iret);

    DeleteLast(&first);
    display(first);
    iret=count(first);
    printf("number of nodes are : %d\n",iret);

    return 0;
}