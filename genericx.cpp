#include<iostream>
using namespace std;
template<class T>
T Addition (int No1,int No2)
{
    T Ans;
    Ans = No1+No2;
    return 0 ;
}
template<class T>
T Maximum (T No1,T No2) 
{
    if(No1>No2) 
    { return No1;}
    else 
    {return No2;}
}
int main()
{

    int  A = 11 ,B = 21 , Ans = 0;
    Ans =  (A,B);
    cout<<"Addition is "<<Ans<<"\n";
    Ans = Maximum(A,B);
    cout<<"largest number "<<Ans<<"\n";

    float X =90.78f , Y = 60.99f,Ret = 0.0;
    Ret = Addition (X,Y);
    cout<<"Addition is :"<<Ret<<"\n";
    return 0;
}

