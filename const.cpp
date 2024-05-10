#include<iostream>
using namespace std;

const int A = 10;
int B = 20;
class Demo        //const global variable 
{
    public :
    int X,Y;
    Demo()
    {
        X = 10;
        Y = 20;
    }
    void fun ( int i,const int j) //constant input argument 
    {
        int No1 = 11;
        const int No2 = 21;
        i ++;  //a
        j++;   //a
        No1++;  //a
        No2++;  //na
    }
};
int main()
{
    Demo obj1;
    const Demo obj2;    //constant object
    obj1.fun(51,101);
    obj1.X++;  //a
    obj1.Y++;  //a
    obj2.X++;   //na
    obj2.Y++;   //na
    A++;        //na
    B++;       //a
    return 0;
}