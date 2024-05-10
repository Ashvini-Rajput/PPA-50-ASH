#include<iostream>
using namespace std;
//class declaration
class Demo 
{
  public:    //access specifier
  int no1;     // characteristics
  int no2;
    Demo()   //costructor
    
    {
          cout<<"inside constructor\n";
          no1 = 11;
          no2 = 21;
    }

    ~Demo()  //deconstructor

    {
        cout<<"inside deconstructor\n";
    }

    void fun()  //behaviour

    {
        cout<<"inside fun of the Demo\n";
    }
};
int main()
{
    cout<<"inside main\n";
    Demo obj1;
    cout<<"size of object is:"<<sizeof(obj1)<<"\n";
    cout<<"value of no1:"<<obj1.no1<<"\n";
    cout<<"value of no2:"<<obj1.no2<<"\n";
    obj1.fun ();
   return 0;
}