#include<stdio.h>
#include<stdlib.h>
//singly linked list
//structure declaration memory milat nahi
struct node     //self referential structure
{
    int data;           //4bytes shirt cha no.
    struct node* next;  //8bytes    pointer
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)           // function is not going to return anything beacause return type is void & it will accept 2 parameters
{   
   //struct node*
    PNODE newn = NULL;                              // created a pointer here which is pointing to null
    newn = (PNODE)malloc(sizeof(NODE));             // allocated dynamic momory for new node 
    //struct node* malloc(sizeof(struct node))
    newn->data = No;                                
    newn->next = NULL;

}

int main()
{
    PNODE first=NULL;        //pointer   8bytes

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);        //call by address first navachya poiner cha node
// inserting 3 nodes     1st node will contain data 11, 2nd node will contain data 21, 3rd node will contain data 51

                    //        Linked List Visulatization will look like  :    11 -> 21 -> 51 -> NULL
    return 0;
}


//eak hath -> singly
//don hath -> doubly
// if we are sending address of int, function should accept it in int* and if we are sending address of int* function should accept it in int**.