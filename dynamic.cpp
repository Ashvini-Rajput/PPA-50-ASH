#include<iostream>
using namespace std;
int main()
{
    int *ptr = NULL;
    int Size = 0;

    cout<<"enter the size array :\n";
    cin>>Size;
    ptr = new int (Size);

    //use the momory
    delete []ptr;

    return 0;
}