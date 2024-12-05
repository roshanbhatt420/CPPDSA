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
  while(1) {
    int choice;
    cout<<"1 for  fabb series  "<<endl;
    cout<<"2 for greatest no among  n  "<<endl;
    cout<<"3 for check pallindrome  "<<endl;
    cout<<"4 for factorial of given no.  "<<endl;
    cout<<"5 for check even odd  "<<endl;
    cout<<"6 for exit  "<<endl;
    cin>>choice;
    switch(choice) {
      case 1:
              cout<<"Enter the number how many term you want"<<endl;
              int n;
              cin>>n;
              fabbino(n);
              break;
      case 2:
             cout<<"enter how many number you want to add"<<endl;
             int n1;
             cin>>n1;
             greatest(n1);
             break;
      case 3:
            cout<<"enter the num you want to check pallindrome or not "<<endl;
            int n2;
             cin>>n2;
            pallindrome(n2);
            break;
      case 4:
            cout<<"enter no you want to find factorial ";
            int n3;
            cin>>n3;
            facto(n3);
            break;
      case 5:
            cout<<"enter no you want to check even odd ";
            int n4;
            cin>>n4;
            evenodd(n4);
            break;
      case 6:
           exit(0);
      default:
           cout<<"wrong choice"<<endl;
    }
  }
  }