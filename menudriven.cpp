#include<iostream>
#include<string>
using namespace std;
void fabbino(int n)
  {
  int a=0,b=1,c;
  for(int i=1;i<=n;i++)
    {
    cout<<" "<<a<<endl;
    c=a+b;
    a=b;
    b=c;
    }
  }
int facto(int n)
{
  if(n==0||n==1) {
    return 1;
  }
  else {
    int factorial=1;
    {
      for(int i=n;i>=1;i--) {
        factorial=factorial*i;
      }
      return factorial;
    }
  }

}
void greatest(int n) {
int a[20];
  cout<<"enter "<<n<<"numbers";
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }
  cout<<"your Entered no are "<<endl;
  for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
  }
  int max=INT_MIN;
  for(int i=0;i<n;i++) {
    if(a[i]>max) {
      max=a[i];
    }
  }
  cout<<"Maximum No is :"<<max<<endl;
}
void pallindrome(int n) {
  int temp=n,reversed=0;
  while(n!=0) {
    int rem=n%10;
    reversed=reversed*10+rem;
    n=n/10;
  }
  if(reversed==temp) {
    cout<<"No is a palindrome";
  }
  else {
    cout<<"No is not a palindrome";
  }
}
void evenodd(int n) {
if(n%2==0) {
cout<<"No is even"<<endl;
}
  else {
    cout<<"No is odd"<<endl;
  }
}
int  main()
    {

  }