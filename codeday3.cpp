#include <iostream>
using namespace std;
int main()
    {
  char a;
  cout<<"Enter the one character"<<endl;
  cin>>a;
  if(a>='a'&&a<='z')
    {
    cout<<"your character is small letter"<<endl;
    }
  else if (a>='A'&&a<='Z')
        {
        cout<<"your character is Capital number"<<endl;
        }
  else {
          cout<<"you dont input valid";
          }

  }