#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;      // #(change is here as compared to singly ll)

    return 0;
}