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
            PNODE newn = NULL;

            newn = new NODE;                    // internally malloc kartey c++ ahe mahnun syntax change fakt
            newn -> data = no;
            newn -> next = NULL;

            if(first == NULL)       // OR if(count == 0)
            {
                first = newn;
            }
            else 
            {
                newn -> next = first;
                first = newn;
            }
            count++;
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
    singlyLL obj;

    obj.InsertFirst(111);           // () error yeto asla ki
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    cout<<"Number of elements in the linked list are : "<<obj.count<<"\n";

    return 0;
}