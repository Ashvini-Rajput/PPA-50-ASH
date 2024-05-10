#include<iostream>
using namespace std;
class Demo 
{
public:
    int A,B;
    Demo ()
    {
        cout<<"inside constructor\n";
        A = 11;
        B = 21;
    }
    ~Demo()
    {
        cout<<"inside destuctor\n";
    }
    void fun()
    {
        cout<<"inside fun function\n";
    }

};
int main()
{
   // Demo obj1;
    Demo *p =new Demo;
   // Demo *p= (Demo*)malloc(sizeof(Demo));
    p->fun();
    cout<<p->A<<"\n";
    cout<<p->B<<"\n";

    delete p;
  // free  (p);
   

    return 0;
}