#include<stdio.h> //for printf scanf
#include<stdlib.h>  //for malloc calloc

struct node     //structure declaration(self referential)
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    //PNODE newn = NULL;
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;      //node initializaion
    newn->next=NULL;

    if(*Head == NULL)    // if LL is empty
    {
        *Head=newn;
    }
    else                // for LL having atleast  1 node
    {
        newn->next=*Head;               // navin porala sangitla ki tuza hath 1st chya shoulder var thev
        *Head=newn;                     // teacher la sangitla ki navin porga ala ahe
    }
}

void display(PNODE Head)
{
    printf("\ncontents of linked list : \n");

    while(Head !=NULL)         //Time Complexity : O(N)
    {
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int count(PNODE Head)
{
    int icnt = 0;

    while(Head != NULL)     //Time Complexity : O(N)
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

    InsertFirst(&first, 111);    //if
    InsertFirst(&first, 101);    //else
    InsertFirst(&first, 51);   //else
    InsertFirst(&first, 21);    //else
    InsertFirst(&first, 11);    //else
    
    display(first);
    iret=count(first);

    printf("number of nodes are : %d\n",iret);

    
    return 0;
}