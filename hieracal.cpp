#include<iostream>
using namespace std;
class marvellous
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
class demo :public marvellous
 {
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
class hello:public marvellous
{
    public :
    int B;
    hello(){
    B = 0;
     cout<<"inside hello constructor\n";
       }
    ~hello () {
    cout<<"inside hello destructor\n";
              }
    void Gun(){
        cout<<"inside gun of hello\n";
    }
};

 int main()
 {
    demo dobj;
    hello hobj;
    return 0;

 }