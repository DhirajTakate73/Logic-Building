#include<iostream>
using namespace std;

typedef struct node
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
            cout<<"Inside constructor...\n";
            first = NULL;
            count = 0;
        }

        void InsertFirst(int no)
        {

        }
        void InsertLast(int no)
        {

        }
        void Display()
        {

        }
        
};

int main()
{
    singlyLL obj;           // () error yeto asla ki

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    cout<<"Number of elements in the linked list are : "<<obj.count<<"\n";
    
    return 0;
}