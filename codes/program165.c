#include<stdio.h>       //for printf and scanf 
#include<stdlib.h>      //for dynamic memory allocation(malloc calloc realloc)
//singly linked list
//structure declaration memory milat nahi
struct node     //self referential structure                //structure declaration memory milat nahi

{
    int data;           //4bytes shirt cha no.
    struct node* next;  //8bytes    pointer
};

typedef struct node NODE;
typedef struct node* PNODE;     // (pointer to node)
typedef struct node** PPNODE;   
// (giving new name to existing datatypes is typedef(purpose is to remember & use them in easy way))
//  by using typedef program becomes more readable, understandable, and manageable.
// typedef == insted of writing big names in program make it short(good programming practice).
int main()
{
    struct node* first=NULL;        //pointer   8bytes

    return 0;
}


// eak hath -> singly
// don hath -> doubly