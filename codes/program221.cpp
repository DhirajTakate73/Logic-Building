#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node* next;
} NODE, *PNODE, **PPNODE;

class singlyLL
{
    private:
        PNODE first;        //characteristics
        int count;
        
    public:
        singlyLL()      // constructor
        {
            cout<<"Inside constructor...\n";
            first = NULL;
            count = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if(first == NULL)       // OR IF(count == 0)
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
            PNODE newn = NULL;
            PNODE temp = first;

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if(first == NULL)       // OR IF(count == 0)
            {
                first = newn;
            }
            else 
            {
                while(temp -> next != NULL)
                {
                    temp = temp -> next;
                }
                temp -> next = newn;
            }
            count++;
        }
        void Display()
        {
            PNODE temp = first;
            
            cout<<"Elements of singly Linear linked list are : ";
            
            while(temp != NULL)     // type 1 
            {
                cout<<"| "<<temp -> data<<" |->";
                temp = temp -> next;
            }
            cout<<"NULL\n";
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

    obj.InsertLast(121);           // () error yeto asla ki
    obj.InsertLast(151);
    obj.InsertLast(201);
    obj.Display();
    cout<<"Number of elements in the linked list are : "<<obj.count<<"\n";
    
    
    return 0;
}

// critical characteristics private thevaychya (abstract karun thevaychya)
// error yeil ya code madhye 