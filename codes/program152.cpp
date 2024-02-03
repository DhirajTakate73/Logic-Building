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
                arr=new int[isize]; //resource  //constructor is used to allocate the resource
            }

            ~array()        //destructor
            {
                delete []arr;   //array chi memory hya destructor mule jail delete mule nahi
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

        //Logics ithun khali

        int additioneven()
        {
            int isum=0, icnt=0;

            for(icnt=0; icnt<isize; icnt++)
            {
                if((arr[icnt] % 2) == 0)
                {
                    isum=isum + arr[icnt];
                }
            } return isum;

        }
       
};//end of class

int main()
{
    int ilength=0;
    int iret=0;

    cout<<"enter the number of elements that you want to store: "<<endl;
    cin>>ilength;

    array *aobj = new array(ilength); //ithun constructor la input jail

    aobj->accept();
    aobj->display();

    iret= aobj->additioneven();

    cout<<"addition of even elements is : "<<iret<<endl;

    delete aobj;        //memory deallocate karto delete operator
    //paan destructor asel tar aadhi destructor call hoil

    return 0;
}


//this is how industrial programming works