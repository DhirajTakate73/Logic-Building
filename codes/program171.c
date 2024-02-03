#include<stdio.h>
#include<stdlib.h>
//singly linked list
//structure declaration memory milat nahi
struct node     //self referential structure
{
    int data;           //4bytes shirt cha no.
    struct node *next;  //8bytes    pointer
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{   
    //step 1 : allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    //struct node* malloc(sizeof(struct node))

    //step 2 : initialize the node
    newn->data = No;
    newn->next = NULL;

    //step 3 : check whether LL is empty or not
    if(*Head == NULL)   //LL is empty
    {
        *Head = newn;
    }

    else            // LL contains atleast 1 node in it
    {
        newn -> next = *Head;
        *Head = newn;
    }

}

void display(PNODE Head)
{
    printf("\nelements of linked list are : \n");

    while(Head !=NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head -> next;                // head->next chi value parat head madhye taka    // head chi value update karnyasathi
    }
    printf("NULL \n");
}

int count(PNODE Head)
{
    int icnt = 0;
    while(Head != NULL)     // head null nasel tar madhye ya
    {
        icnt++;
        Head = Head -> next;        
    }
    return icnt;
}

int main()
{
    PNODE first=NULL;        //pointer   8bytes
    int iret = 0;

    InsertFirst(&first, 101);
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);        //call by address first navachya poiner cha node

    display(first); // display(100)
    iret=count(first);

    printf("number of nodes are : %d\n",iret);

    return 0;
}


//eak hath -> singly
//don hath -> doubly