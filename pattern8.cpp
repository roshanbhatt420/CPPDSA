//functions in c++
#include<iostream>
#include<string.h>
using namespace std;
void hello()
{
    cout<<"Hello World"<<endl;
}
int getName(int roll) {
    cout<<"Hello World"<<endl;
    return roll;
}

int  main()
    {
    hello();
    int a;
    a=getName(56);
    cout<<a<<endl;
    }
