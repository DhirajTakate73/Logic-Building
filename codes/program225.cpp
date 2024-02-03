
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
        singlyLL();      // constructor
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no, int ipos);
        void DeleteAtPos(int ipos);

};
/*
Return_Value Class_Name :: Function_Name()
{

}
*/

        singlyLL :: singlyLL()      // constructor returns nothing and accepts nothing
        {
            cout<<"Inside constructor...\n";
            first = NULL;
            count = 0;
        }

        void singlyLL :: InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if(first == NULL)   // OR (count == 0)
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

        void singlyLL :: InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = first;

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if(first == NULL)
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

        void singlyLL :: Display()
        {
            PNODE temp = first;

            cout<<"\ncontents of singly Linear linked list are : ";

            while(temp != NULL)     // type 1 
            {
                cout<<"| "<<temp -> data<<" |->";
                temp = temp -> next;
            }
            cout<<"NULL\n";
        }

        int singlyLL :: CountNode()
        {
            return count;
        }

        void singlyLL :: DeleteFirst()
        {
            if(first == NULL)
            {
                return;
            }
            else if(first -> next == NULL)
            {
                delete first;       // delete operator internally calls free
                first = NULL;
            }
            else 
            {
                PNODE temp = first;

                first = first -> next;
                delete temp;

            }
            count-- ;
        }

        void singlyLL :: DeleteLast()
        {
            if(first == NULL)
            {
                return;
            }
            else if(first -> next == NULL)
            {
                delete first;       // delete operator internally calls free
                first = NULL;
            }
            else 
            {
                PNODE temp = first;

                while(temp -> next -> next != NULL)
                {
                    temp = temp -> next;
                }
                delete temp -> next;
                temp -> next = NULL;        // hath khishat last mulacha

            }
            count-- ;

        }

        void singlyLL :: InsertAtPos(int no, int ipos)
        {
            if((ipos < 1) || (ipos > count + 1))
            {
                return;
            }
            if(ipos == 1)
            {
                InsertFirst(no);
            }
            else if(ipos == count + 1)
            {
                InsertLast(no);
            }
            else
            {
                PNODE newn = new NODE;
                newn -> data = no;
                newn -> next = NULL;

                PNODE temp = first;
                int i = 0;

                for(i = 1; i < ipos - 1; i++)
                {
                    temp = temp -> next;
                }
                newn -> next = temp -> next;
                temp -> next = newn;

                count++;
            }

        }

        void singlyLL:: DeleteAtPos(int ipos)
        {
            if((ipos < 1) || (ipos > count + 1))
            {
                return;
            }
            if(ipos == 1)
            {
                DeleteFirst();
            }
            else if(ipos == count + 1)
            {
                DeleteLast();
            }
            else
            {
                PNODE temp = first;
                int i = 0;

                for(i = 1; i < ipos - 1; i++)
                {
                    temp = temp -> next;
                }
                PNODE targetednode = temp -> next;
                temp -> next = temp -> next -> next;
                delete targetednode;

                count--;                
            }

        }

int main()
{
    singlyLL obj;
    int iret = 0;

    obj.InsertFirst(111);           // () error yeto asla ki
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iret<<"\n";

    obj.InsertLast(121);           // () error yeto asla ki
    obj.InsertLast(151);
    obj.InsertLast(201);
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iret<<"\n";

    obj.InsertAtPos(105, 5);
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iret<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iret<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iret<<"\n";
    
    obj.DeleteLast();
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of elements in the linked list are : "<<iret<<"\n";
    
    return 0;
}