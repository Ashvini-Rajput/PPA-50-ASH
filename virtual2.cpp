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

    base *bp = NUll;   //no castiing 
    derived *dp = NUll; //no casting
    bp = &bobj;        //upcasting
    dp = &dobj;       // down casting

    bp = &dobj;

    dp = &bobj;
    return 0;
}