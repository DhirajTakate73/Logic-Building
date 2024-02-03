#include<iostream>
using namespace std;

class array
{
    private:
        int *arr;      //int arr[];
        int isize;

        public:
            array(int x)        //parameterised constructor
            {
                isize = x;
                arr=new int(isize);
            }
            ~array()        //destructor
            {
                delete []arr;
            }

            void accept() //member function  //this method will accept the input from user
            {
                int icnt=0;

                cout<<"please enter the elements :"<<endl;
                for(icnt=0; icnt<isize; icnt++)
                {
                    cin>>arr[icnt];
                }
            }

            void display()      //member function
            {
                cout<<"elements of the array are : "<<endl;
                int icnt=0;
                for(icnt=0; icnt<isize; icnt++)
                {
                    cout<<arr[icnt]<<"\t";
                }
                cout<<endl;
            }

            //logics
};      //end of class 

int main()
{
    int ilength=0;

    cout<<"enter the number of elements that you want to store: "<<endl;
    cin>>ilength;

    array aobj(ilength);

    aobj.accept();
    aobj.display();

    return 0;
}