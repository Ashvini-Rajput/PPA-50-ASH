#include<iostream>
using namespace std;
class Arithematic
{
    public:
    int No1;
    int No2;
    Arithematic()
    {
    No1 = 0;
    No2 = 0;
    }
    Arithematic( int A,int B )
    {
        No1 = A;
        No2 = B;
    }
    int Addition ()
    {
        int Ans = 0;
        Ans = No1 +No2;
        return Ans;
     
    }
    int subtraction()
    {
        int Ans = 0;
        Ans = No1 -No2;
        return Ans;
        
    }
};
int main()
{
    int value1 = 0,value2 = 0;
    int  Ret1 = 0,Ret2 = 0;

    cout<<"enter first number:\n";
    cin>>value1;
    cout<<"enter second number:\n";
    cin>>value2;

    Arithematic obj(value1 ,value2);

    Ret1 = obj.Addition();
    cout<<"Addition is:"<<Ret1 ;

    Ret1 = obj.subtraction();
    cout<<"subtraction is:"<<Ret2;
return 0;

}
