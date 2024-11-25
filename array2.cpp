#include<iostream>
using namespace std;
int main()
    {
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;

  int arr[size];
  for (int i = 0; i < size; i++)
    {
    cin>>arr[i];
    }
    int small=INT_MAX;
 int large=INT_MIN;
 int la_index;
 int sma_index;
    for (int i = 0; i < size; i++)
      {
      if (arr[i]<small)
        {
        small=arr[i];
        sma_index=i;

        }
        if (arr[i]>large)
          {
          large=arr[i];
          la_index=i;

          }
      }
     cout<<"small no is "<<small<<"Indes is "<<sma_index<<endl;
     cout<<"large no is "<<large<<"index is"<<la_index<<endl;
  }