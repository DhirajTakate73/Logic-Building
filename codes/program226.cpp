// singly circular 

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node* next;
} NODE, *PNODE;

class singlyCL
{
    private:
        PNODE first;        //characteristics
        PNODE last;
        int count;
        
    public:
        singlyCL();      // constructor
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

        singlyCL :: singlyCL()      // constructor returns nothing and accepts nothing
        {
            first = NULL;
            last = NULL;
            int count = 0;
        }

        void singlyCL :: InsertFirst(int no)
        {
            
        }

        void singlyCL :: InsertLast(int no)
        {
           
        }

        void singlyCL :: Display()
        {
            
        }

        int singlyCL :: CountNode()
        {
            return count;
        }

        void singlyCL :: DeleteFirst()
        {
            
        }

        void singlyCL :: DeleteLast()
        {
           

        }

        void singlyCL :: InsertAtPos(int no, int ipos)
        {
           
        }

        void singlyCL :: DeleteAtPos(int ipos)
        {
            
        }

int main()
{
    
    return 0;
}