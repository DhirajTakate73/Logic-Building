#include<iostream>
using namespace std;
int factorial(int ino)
{
    int ifact=1;
    int icnt=0;

    for(icnt=1; icnt<=ino; icnt++)
    {
        ifact=ifact * icnt;
    }
    return ifact;

}
int main()
{
    int ivalue=0, iret=0;

    cout<<"enter the number : "<<endl;
    cin>>ivalue;

    iret=factorial(ivalue);
    cout<<"factorial is : "<<iret<<endl;

    return 0;
}