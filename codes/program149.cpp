#include<iostream>
using namespace std;

class number
{
    private:
        int ino;    //characteristics

    public:
        number(int x)   //parameterised constructor
        {
            ino = x;
        }

    int factorial()
    {
        int icnt=0, ifact=1;

        for(icnt=1; icnt<=ino; icnt++)
        {
            ifact=ifact * icnt;
        }
        return ifact;
    }
};
int main()
{
    int ivalue=0, iret=0;

    cout<<"enter the number : "<<endl;
    cin>>ivalue;

    number nobj(ivalue);   //object creation  //static object     //class number cha object

    number *nobj = new number(ivalue);  //constructor detoy
    iret=nobj->factorial();

    cout<<"factorial is :"<<iret<<endl;

    delete(nobj);

    return 0;
}


    //  ACTUAL CPP CODE