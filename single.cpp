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
  int x,y;
  Derived()
  {
    cout<<"inside derived constructor\n";
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
int main()
{
Derived dobj;
cout<<"Size of object is:"<<sizeof(dobj)<<"\n";

cout<<dobj.A<<"\n"; //11
cout<<dobj.B<<"\n";  //21
cout<<dobj.x<<"\n";  //51
cout<<dobj.y<<"\n";   //101
dobj. Fun();    //base fun
dobj.Gun();    //derived gun
// destructor

return 0;
}