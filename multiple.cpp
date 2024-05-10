#include<iostream>
using namespace std;
class demo {
    public :
    int A;
    demo () {
        A = 10;
        cout<<"inside demo constructor\n";
         }
    ~demo () {
        cout<<"inside demo destructor\n";
    }
    void Fun(){
        cout<<"inside gun of demo\n";
    }
};
class hello{
    public :
    int B;
    hello(){
    B = 20;
     cout<<"inside hello constructor\n";
       }
    ~hello () {
    cout<<"inside hello destructor\n";
              }
    void Gun(){
        cout<<"inside gun of hello\n";
    }
};
class marvellous : public demo , public hello
{
  public :
  int C;
  marvellous()
  { 
    C = 30;
    cout<<"inside marvellous constructor\n";
  }
  ~marvellous ()
  {
    cout<<"inside marvellous destructor\n";
    }
  void Sun()
  {
    cout<<"inside sun of marvellous\n";
    }
};
 int main()
 {
    marvellous mobj;
    mobj.Fun();
    mobj.Gun();
    mobj.Sun();

    cout<<mobj.A<<"\n";
    cout<<mobj.B<<"\n";
    cout<<mobj.C<<"\n";

return 0;
 }