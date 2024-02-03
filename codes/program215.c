// Queue

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// void InsertLast(PPNODE Head, int no)
void Enqueue(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn=(PNODE)malloc(sizeof(NODE));

    newn -> data = no;  
    newn -> next = NULL;

    if(*Head == NULL)    // Queue is empty
    {
        *Head = newn;
    }
    else
    {   //travel the Queue till last node
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        //add the address of new node at last position
        temp->next=newn;

    }
}

// void DeleteFirst(PPNODE Head)
int Dequeue(PPNODE Head)
{
    int value = 0;
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        printf("Queue Is Empty...");
    }
    else
    {
        value = (*Head) -> data;
        *Head = (*Head) -> next;
        free(temp);
    }
    return value;
}

void display(PNODE Head)
{
    printf("\nElements of Queue are : \n");

    while(Head != NULL)
    {
        printf("| %d |\n",Head -> data);
        Head = Head -> next;
    }
    printf("\n");

}

int main()
{
    PNODE first = NULL;
    int iret = 0;

    Enqueue(&first, 111);
    Enqueue(&first, 101);
    Enqueue(&first, 51);
    Enqueue(&first, 21);
    Enqueue(&first, 11);

    display(first);

    iret = Dequeue(&first);
    printf("Removed Element From Queue is : %d\n",iret);
    
    iret = Dequeue(&first);
    printf("Removed Element From Queue is : %d\n",iret);

    iret = Dequeue(&first);
    printf("Removed Element From Queue is : %d\n",iret);
    
    iret = Dequeue(&first);
    printf("Removed Element From Queue is : %d\n",iret);
 
    return 0;
}