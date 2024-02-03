//  string sathi template

#include<iostream>
using namespace std;

class string
{
    private:
        char *str;
        int isize;      //array chi size hold karnyasathi 

    public:
        string()        //default constructor       //sobj2
        {
            isize=20;
            str = new char[isize];
        }

        string(int x)   //parameterised constructor     //sobj1
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

        //logic
};

int main()
{
    string *sobj1 = new string[30];
    string *sobj2 = new string(); 

    sobj->accept();
    sobj->display();

    delete sobj1;
    delete sobj2;

    return 0;
}

//string sathi final template