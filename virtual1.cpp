#include<iostream>
using namespace std;
class base
{
    public:
    int A,B;
    void fun()
    { cout<<"base fun\n";}   //defination
    void gun ()
    {  cout<<"base gun\n";}  //defination
    void sun()
    { cout<<"base sun\n";}   //defination  
};
class derived :public base
{
    public :
    int x,y;
    void gun()   //4000        redefination
    { cout<<"derived gun \n";}
    void sun()   //5000       redifination
    { cout<<"derived sun\n";}
    void run()   //6000       redifination
    { cout<<"derived run\n";}
    
};

int main()
{
    base bobj;
    derived dobj;

    bobj.fun();     //base fun
    bobj.gun();     //base gun
    bobj.sun();     //base sun

    dobj.fun();      //base fun
    dobj.gun();      //derived  gun
    dobj.sun();     //derived sun
    dobj.run();     //derived run 

    return 0;
}