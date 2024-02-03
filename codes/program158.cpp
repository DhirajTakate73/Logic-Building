//  string sathi template

#include<iostream>
using namespace std;

class string
{
    private:
        char *str;
        int isize;      //array chi size hold karnyasathi 

    public:
        string()        //default constructor
        {
            isize=20;
            str = new char[20];
        }

        string(int x)   //parameterised constructor
        {
            isize=x;
            str = new char[isize];
        }

        ~string()
        {
            delete []str;
        }

        void accept()
        {
            cout<<"enter the string :"<<endl;
            cin.getline(str,isize);
        }

        void display()
        {
            cout<<"string is : "<<str<<endl;
        }


};

int main()
{
    string sobj(30);

    sobj.accept();
    sobj.display();

    return 0;
}