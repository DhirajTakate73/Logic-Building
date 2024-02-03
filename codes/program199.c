#include<stdio.h>
#include<stdlib.h>

typedef struct node     //typedef nasta tar } chya pudhche object consider zale aste
{

    int data;       
    struct node *next;

}   NODE, *PNODE, **PPNODE;        //shorthand definations 
// ha syntax kiva magchya code cha syntax konta paan chalto

/*
        typedef struct node NODE;
        typedef struct node* PNODE;
        typedef struct node** PPNODE;
*/

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(((*Head) == NULL) && ((*Tail) == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;       //#
    }
    else        //LL contains atleast 1 node
    {
        newn -> next = *Head;
        *Head = newn;
    }
    (*Tail) -> next = *Head;        //#
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail) -> next = *Head;

    }
    else        //LL contains atleast 1 node
    {
       (*Tail) -> next = newn;
       (*Tail) = newn;
       (*Tail) -> next = *Head;

    }
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{
    int size = 0, i = 0;
    size = count(*Head, *Tail);     // count fun la call karun size ghetoy
    PNODE newn = NULL;

    PNODE temp = *Head;

    if((ipos < 1) || (ipos > size+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
       InsertFirst( Head, Tail, no); 
    }
    else if(ipos == size+1)
    {
        InsertLast(Head, Tail, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));     // insert karnyasathi new node tyar kela
        newn->data = no;
        newn->next = NULL;

        for(i = 1; i < ipos - 1; i++)     // 
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;        // new node chya next madhye 500 takaycha ahe 
        temp -> next = newn;                // 400 next madhye 450

    }

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if(*Head == NULL && *Tail == NULL)  //case 1 LL is empty
    {
        return;     // delete karayla kahich nahi so direct baher
    }

    else if (*Head == *Tail)        //case 2  LL contains only one node so toch 1st aani toch last
    {
        free(*Head);        // OR (free(*Tail))
        *Head = NULL;       // Teacher la sangnyasathi ki 1st proga gela  
        Tail = NULL;        //  Teacher la sangnyasathi ki last proga gela  
    }
    else                    //case 3        LL contains more than one node
    {
        (*Head) = (*Head) -> next;      // 100  varun 200 la shift ho(point kar)
        free((*Tail) -> next);            // 100 address ajun last node chya next madhye ahe to free kela 
        (*Tail) -> next = *Head;          // last node chya next madhye aata 200(jo ata 1st ahe)      100 gela purnpane
    }       // to maintain circular nature
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;     // Temporary pointer tyar kela to travel till 500

    if(*Head == NULL && *Tail == NULL)  //case 1    LL is empty
    {
        return;
    }

    else if (*Head == *Tail)        //case 2    LL contains only one node so toch 1st aani toch last
    {
        free(*Head);        // OR (free(*Tail))
        *Head = NULL;   //ll rikami zali asa teacher la sangnyasathi
        Tail = NULL;    ////ll rikami zali asa teacher la sangnyasathi
    }
    else                    //case 3        LL contains more than one node
    {
        while(temp -> next != *Tail)
        {
	        temp = temp->next;
        }
        free(*Tail);        //OR free(temp -> next)
        *Tail = temp;       // Teacher chya dokyat last porachi value 600 badlun 500 karnyasathi karan aata 500 last porga ahe  
        (*Tail)->next = *Head;      // to maintain circular nature 
    }
}

void Display(PNODE Head, PNODE Tail)
{
    printf("\nElements of linked list are : \n");

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | -> ",Head -> data);
            Head = Head -> next;
        } while(Head != Tail -> next);

        printf("Address of first node\n");
    }
}

int count(PNODE Head, PNODE Tail)
{
    int icnt = 0;
    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            icnt++;
            Head = Head -> next;
        } while(Head != Tail -> next);

    }
    return icnt;
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{
    int size = 0, i = 0;
    size = count(*Head, *Tail);     // count fun la call karun size ghetoy

    PNODE temp = *Head;

    if((ipos < 1) || (ipos > size))       // 6 node astil tar deletelast mahanje 6 va 7 va nahi aani 6 node astil ani insertlast asel tar 7 va ahe 6 va nahi
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
       DeleteFirst( Head, Tail); 
    }
    else if(ipos == size+1)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        for(i = 1; i < ipos - 1; i++)     // 
        {
            temp = temp -> next;
        }
        
    }

}


int main()
{
    PNODE first = NULL;
    PNODE last = NULL;      //#
    int iret = 0;

    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);
    Display(first, last);
    iret = count(first, last);
    printf("Number of elements are : %d\n",iret);

    InsertLast(&first, &last, 101);
    InsertLast(&first, &last, 111);
    InsertLast(&first, &last, 121); 
    Display(first, last);
    iret = count(first, last);
    printf("Number of elements are : %d\n",iret); 

    InsertAtPos(&first,&last,105,5);
    Display(first,last);
    iret = count(first,last);
    printf("Number of elements are : %d\n",iret); 

    DeleteFirst(&first, &last);
    Display(first, last);
    iret = count(first, last);
    printf("Number of elements are : %d\n",iret);

    DeleteLast(&first, &last);
    Display(first, last);
    iret = count(first, last);
    printf("Number of elements are : %d\n",iret);
    
    return 0;
}