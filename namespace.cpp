#include<iostream>
namespace Marvellous
{
    class Demo
     {
        //logic
    };
}
namespace PPA
{
class Hello
{
    //logic
};

}
using namespace Marvellous;
int main()
{
     std::cout<<"inside main\n"; 
     Marvellous::Demo dobj;
     PPA ::Hello hobj;
    return 0;
}