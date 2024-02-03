//  string sathi template

#include<iostream>
using namespace std;

class string
{
    private:
        char *str;

    public:
        string()        //default constructor
        {
            str = new char[20];
        }

        string(int isize)   //parameterised constructor
        {
            str = new char[isize];
        }

        ~string()
        {
            delete []str;
        }

        void accept()
        {
            cout<<"enter the string"<<endl;
            cin>>str;
        }

        void display()
        {
            cout<<"string is : "<<str<<endl;
        }


};

int main()
{
    string sobj[30];

    sobj.accept();
    sobj.display();

    return 0;
}