#include<iostream>
using namespace std;
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cout<<"enter number:";
        cin >> arr[i];

    }
  int small=INT_MAX;
    for (int i = 0; i < 10; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
    }
    cout<<"This is the smallest:"<<small<<endl;
    return 0;

  }
