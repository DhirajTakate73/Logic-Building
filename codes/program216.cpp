#include<iostream>
using namespace std;

typedef struct node                      // structure creation and typedef
{
    int data;
    struct node* next;
} NODE, *PNODE, **PPNODE;

class singlyLL
{
    public:
        PNODE first;        //characteristics
        int count;

        singlyLL()      // constructor
        {
            first = NULL;
            count = 0;
        }

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
        
};

int main()
{
    singlyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    
    return 0;
}