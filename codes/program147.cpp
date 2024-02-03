// OOP APPROACH

#include<iostream>
using namespace std;

class number
{
    private:
    int ino;

    public:
    number(int x)   //parameterised constructor
    {
        ino = x;
    }

    //logics
};
int main()
{
    int ivalue=0, iret=0;

    cout<<"enter the number : "<<endl;
    cin>>ivalue;

    number nobj(ivalue);        //class number cha object

    return 0;
}