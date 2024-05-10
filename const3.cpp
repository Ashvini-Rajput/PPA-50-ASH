#include<iostream>
using namespace std;
class Demo        //const global variable 

{
    public :
    int X,Y;
    Demo()
    {
        X =10;
        Y = 20;

    }
    void fun()          //no const function
    {
        cout<<"inside fun\n";
        X++;
        Y++;
    }
    void gun()   //const function
    {
        cout<<"inside gunn\n";
       // X++;
       // Y++;
    }

};
int main()
{
Demo obj1;
const Demo obj2;
obj1.fun ();
obj1.gun ();

obj2.fun ();
obj2.gun ();
    return 0;
}