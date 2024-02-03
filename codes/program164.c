#include<stdio.h>           //for printf and scanf 
#include<stdlib.h>      //for dynamic memory allocation(malloc calloc realloc)

//singly linear linked list

struct node     //self referential structure                //structure declaration(so memory milnar nahi)
{
    int data;           //4bytes  (data on shirt)
    struct node *next;  //8bytes    pointer
};

// node is single member of structure

int main()
{
    struct node *first=NULL;        //it is a pointer not a object so memory allocated is 8 bytes
//( important pointer as it stores the address of first node).

    return 0;
}

// if you remember the address of first node then you can get other nodes.