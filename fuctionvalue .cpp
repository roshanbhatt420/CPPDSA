#include<iostream>
using namespace std;
void primeNumber(int n)
    {
  int count = 0;
  for (int i = 2; i <=n-1; i++)
  {
    if(n%i==0)
      {
      count++;
      }
  }
  if(count!=0) {
    cout<<"this is not prime no";
  }
  else {
    cout<<"this is prime no";
  }
  }
int printprime(int n) {
  int count = 0;
  for(int i=2; i<=n; i++) {
    for (int j = 2; j <= i-1; j++) {
      if(i%j==0) {
        count++;
      }
    }
    if(count==0) {
      cout<<""<<i;
    }
  }
}
int main()
{
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  primeNumber(n);
    printprime(n);
  return 0;
}