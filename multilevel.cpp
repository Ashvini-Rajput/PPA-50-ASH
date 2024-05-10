#include<iostream>
using namespace std;
class Base
{
public :
int A,B;
Base ()
     { 
    cout<<"inside Base contructor\n";
    A= 11;
    B = 21;
     }
~Base ()
     {
     cout<<"inside Base destructor";
     
     }
void Fun ()
    { 
    cout<<"inside Base Fun\n";
    }
};
class Derived : public Base
{
 public:
 int p;
  int x,y;
  Derived()
  {
    cout<<"inside derived constructor\n";
    x =51;
    y = 101;
  }
  ~Derived()
  {
  cout<<"inside derived destructor\n";
  }
  void Gun()
  {
    cout<<"inside derived Gun\n";
  }

};
class Derivedx:public Derived{
    public :
    int p;
    Derivedx()
    {cout<<"inside derivedx constructor\n";}
    ~ Derivedx()
    {cout<<"inside derivedx destructor\n";}
    void Sun ()
        { cout<<"inside derivedx sun\n";}
    
};
int main()
{
Derivedx dobj;
cout<<"Size of object is:"<<sizeof(dobj)<<"\n";  //20

cout<<dobj.A<<"\n"; //11
cout<<dobj.B<<"\n";  //21
cout<<dobj.x<<"\n";  //51
cout<<dobj.y<<"\n";   //101
cout<<dobj.p<<"\n";  //111
  
dobj. Fun();          //base fun
dobj.Gun();          //derivegd gun
dobj.Sun();  // destructor sun

//destructor of derived
//destructor of derivedx

return 0;
}