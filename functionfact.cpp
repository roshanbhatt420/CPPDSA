#include<iostream>
using namespace std;
int factorial(int n)
    {
   int fact=n;
  while(n>1)
    {
    fact=fact*(n-1);
    n=n-1;

    }
    return fact;
  }
  int main()
      {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Factorial is "<<factorial(n);
    return 0;

    }
