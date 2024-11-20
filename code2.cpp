#include <iostream>
using namespace std;
int main()
    {
    string name;
    int marks;
  cout<<"Enter name of  student "<<endl;
    cin>>name;
    cout<<"Enter the total marks "<<endl;
    cin>>marks;
    cout<<name<<endl;
    cout<<marks<<endl;
    if (marks>=90) {
        cout<<"you got good marks";

    }
    else {
        cout<<"you got bad marks";
    }
    return 0;
  }
