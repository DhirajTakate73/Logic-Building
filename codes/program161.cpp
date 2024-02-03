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
            cout<<"enter the string : "<<endl;
            cin.getline(str,isize);
        }

        void display()
        {
            cout<<"string is : "<<str<<endl;
        }

        int countcapital()
        {
            int icnt=0;

            while(*str != '\0')
            {
                if((*str >='A') &&  (*str <='Z'))
                {
                    icnt++;
                }
                str++;
            }
            return icnt;
        }


};

int main()
{
    string *sobj1 = new string(30);
    int iret=0;

    sobj1->accept();
    sobj1->display();

    iret=sobj1->countcapital();

    cout<<"capital count is : "<<iret<<endl;

    sobj1->display();
    //delete sobj1;
    
    return 0;
}

//string sathi final template