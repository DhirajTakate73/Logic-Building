//problem statement:accept radius from user and calculate the area of circle.
//step 1: understand the problem statement
//conclusion: we are going to use the formula as pi*r*r.

//step 2:algorithm
/*START
        accept radius from user and store into radius
        create variable as pi and store value 3.14
        calculate area pi*radius*radius
        display the value of area to user
STOP
*/


#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////
//
//function name:        calculatearea
//description:          it is used to calculate area of circle
//input:                float
//output:               float
//auther name:          dhiraj manik takate
//date:                 02/10/2023
//
/////////////////////////////////////////////////////////////////////////////////////

//#define pi 3.14

float calculatearea(float fvalue)
{
    auto float fans=0.0f;
    auto const float pi=3.14f;  //value change n honyasathi

    fans=pi*fvalue*fvalue;
    return fans;

}
//////////////////////////////////////////////////////////////////////////////////////
//
//    entry point function 
//
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
        auto float fradius=0.0f;
        auto float farea=0.0f;

        printf("enter the radius of circle:\n");
        scanf("%f",&fradius);

        farea=calculatearea(fradius);

        printf("area of circle is: %f\n",farea);

    return 0;
}