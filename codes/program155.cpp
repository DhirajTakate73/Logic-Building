//pattern printing
/*
irow=5
icol=5

$ * * * *
* $ 1 1 *
* 0 $ 1 * 
* 0 0 $ * 
* * * * $

*/

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
        int i=0, j=0;
        for(i=1; i<=irow; i++)
        {
            for(j=1; j<=icol; j++)
            {
                if(i==j)
                { cout<<"$\t";}

                else if((i==1) || (i==irow) || (j==1) || (j==icol))
                { cout<<"*\t";}

                else if(i>j)
                { cout<<"0\t";}

                else if(i<j)
                { cout<<"1\t";}

            }
            cout<<endl;
        }
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