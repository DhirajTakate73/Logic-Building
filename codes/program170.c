#include<stdio.h>
#include<stdlib.h>
//singly linked list
struct node     //self referential structure                //structure declaration memory milat nahi
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
    newn = (PNODE)malloc(sizeof(NODE));                 // new student came on ground 
    //struct node* malloc(sizeof(struct node))

    //step 2 : initialize the node
    newn->data = No;                            // pointer ahe mahnun value initialise karnyasathi -> jar object asla asta tar . use kela asta
    newn->next = NULL;

    //step 3 : check whether LL is empty or not
    if(*Head == NULL)   //LL is empty           //fakt first node insert karnyasathi if part cha use hoil karan LL rikami ahe ajun
    {
        *Head = newn;                       // to insert address of new node in the first pointer of main function
    }
    else   // LL contains atleast 1 node in it 
    {
        newn -> next = *Head;               // insert address of previous node into newly added node 
        *Head = newn;                       // to save address of newly added node into first pointer
    }

}

void display(PNODE Head)
{
    printf("\nelements of linked list are : \n");

    while(Head !=NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}


int main()
{
    PNODE first=NULL;        //pointer   8bytes

    InsertFirst(&first, 101);           // call by address 
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);        //call by address first navachya poiner cha node

    display(first);     // for eg.display(100);             //call by value 

    return 0;
}


//eak hath -> singly
//don hath -> doubly