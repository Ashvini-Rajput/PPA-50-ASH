#include<iostream>
using namespace std;
class demo
{
    public :
    int No1,No2;     //non static charactristic
    static int x;  // static characteristic

    demo()
    {
        No1 = 10;
        No2 = 20;
    }
    void Fun ()       //non static behaviour
    { 
        cout<<"inside fun\n";
        cout<<No1<<"\n";
        cout<<x<<"\n";
    }
    static void Gun() //static  behaviour
    {
        cout<<"inside gun\n";
        cout<<x<<"\n";
    }
};
    int demo::  x = 11;

    int main()
    {
         cout<<"value  of x is :"<<demo ::x<<"\n";
        demo:: Gun();
        demo obj1;
        demo obj2;
        cout<<"Size of objective :"<<sizeof (obj1)<<"\n";

        cout<<obj1.No1<<"\t"<<obj1.No2<<"\n";
        cout<<obj2.No2<<"\t"<<obj2.No2<<"\n";

        obj1.Fun();
        obj2.Fun();
        obj1 .Gun ();
        cout<<"value of x using is :"<<obj1.x<<"\n";
        return 0;
    }


