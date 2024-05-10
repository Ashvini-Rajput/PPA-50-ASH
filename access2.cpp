#include<iostream>
using namespace std;

class base{
    public:
    int A;
    private:
    int B;
    protected:
    int C;
    public:
    base()
    {
        A = 10,B = 20,C = 30;
    }
    void Fun(){

        cout<<A<<"\n";   //A
        cout<<B<<"\n";   //A
        cout<<C<<"\n";   //A
    }
};
class derived :public base 
{
    public:
    void Gun()
    {
        cout<<A<<"\n";  //A
        cout<<B<<"\n";  //NA
        cout<<C<<"\n";  //A
    }
};
int main()
{
base bobj;

        cout<<bobj.A<<"\n";  //A
        cout<<bobj.B<<"\n";  //NA
        cout<<bobj.C<<"\n";  //NA
    
       return 0;
}