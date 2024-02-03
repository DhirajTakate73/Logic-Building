// Stack

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

// void InsertFirst(PPNODE Head, int no)
void push(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }

}

// void DeleteFirst(PPNODE Head)
int pop(PPNODE Head)                                                                        // returning int
{
    int value = 0;                                                                          // jo element pop zala ahe tyachi value return karnyasathi
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        printf("Stack Is Empty...");
    }
    else
    {
        value = (*Head) -> data;                                                            // 11 store karnyasathi
        *Head = (*Head) -> next;
        free(temp);
    }
    return value;
}

void display(PNODE Head)
{
    printf("\nElements of stack are : \n");

    while(Head != NULL)
    {
        printf("| %d |\n",Head -> data);
        Head = Head -> next;
    }
}

int main()
{
    PNODE first = NULL;
    int iret = 0;

    push(&first, 101);                                                                           // saglyat khali jail (1st element)
    push(&first, 51);
    push(&first, 21);
    push(&first, 11);                                                                           // saglyat varti rahil (last element)

    display(first);

    iret = pop(&first);
    printf("Poped Element Is : %d\n",iret);

    iret = pop(&first);
    printf("Poped Element Is : %d\n",iret);

    iret = pop(&first);
    printf("Poped Element Is : %d\n",iret);
    
    iret = pop(&first);
    printf("Poped Element Is : %d\n",iret);

    iret = pop(&first);
    printf("\nPoped Element Is : %d\n",iret);

    return 0;
}