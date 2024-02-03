// Doubly Circular

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
} NODE, *PNODE;

class DoublyCL
{
    private:
        PNODE first;        //characteristics
        PNODE last;
        int count;
        
    public:
        DoublyCL();      // constructor
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

        DoublyCL :: DoublyCL()      // constructor returns nothing and accepts nothing
        {
            first = NULL;
            last = NULL;
            int count = 0;  
        }

        void DoublyCL :: InsertFirst(int no)
        {
            
        }

        void DoublyCL :: InsertLast(int no)
        {
           
        }

        void DoublyCL :: Display()
        {
            
        }

        int DoublyCL :: CountNode()
        {
            return count;
        }

        void DoublyCL :: DeleteFirst()
        {
            
        }

        void DoublyCL :: DeleteLast()
        {
           

        }

        void DoublyCL :: InsertAtPos(int no, int ipos)
        {
           
        }

        void DoublyCL:: DeleteAtPos(int ipos)
        {
            
        }

int main()
{
    
    return 0;
}