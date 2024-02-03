//pattern printing

#include<iostream>
using namespace std;

class pattern
{
    private:
        int irow;
        int icol;

    public:
        pattern(int x, int y)   //parameterised constructor
        {
            irow=x;
            icol=y;
        }

    void display()
    {
        //LOGIC
    }

};

int main()
{
    int ivalue1=0, ivalue2=0;

    cout<<"enter number of rows : "<<endl;
    cin>>ivalue1;

    cout<<"enter number of columns : "<<endl;
    cin>>ivalue2;

    pattern *pobj = new pattern(ivalue1, ivalue2);     //object creation

    pobj->display();         //object ney method la call

    delete pobj;

    return 0;
}

//dynamic memory vaprun code