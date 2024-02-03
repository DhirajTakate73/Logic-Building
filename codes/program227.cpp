// Doubly Linear 

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
} NODE, *PNODE;

class DoublyLL
{
    private:
        PNODE first;        //characteristics
        int count;
        
    public:
        DoublyLL();      // constructor
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

        DoublyLL :: DoublyLL()      // constructor returns nothing and accepts nothing
        {
            first = NULL;
            int count = 0;
        }

        void DoublyLL :: InsertFirst(int no)
        {
            
        }

        void DoublyLL :: InsertLast(int no)
        {
           
        }

        void DoublyLL :: Display()
        {
            
        }

        int DoublyLL :: CountNode()
        {
            return count;
        }

        void DoublyLL :: DeleteFirst()
        {
            
        }

        void DoublyLL :: DeleteLast()
        {
           

        }

        void DoublyLL :: InsertAtPos(int no, int ipos)
        {
           
        }

        void DoublyLL:: DeleteAtPos(int ipos)
        {
            
        }

int main()
{
    
    return 0;
}