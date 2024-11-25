#include <iostream>
using namespace std;
int linearsearch(int arr[],int size, int x)
    {
  for(int i=0;i<size;i++)
    {
    if(arr[i]==x)
    {
      return i;
     }
  }
  }


 int main()
  {
   int size;
   cout<<"Enter the size of the array: ";
   cin>>size;
   cout<<"Enter the target element: ";
   int target;
   cin>>target;
   int arr[size];
   cout<<"Enter the elements of the array: ";
   for(int i=0;i<size;i++)
     {
     cin>>arr[i];

     }
     int a=linearsearch(arr,size,target);
    if(a==-1)
      {
      cout<<"Element not found";
      }
      else{
        cout<<"Element found";
        cout<<"Element found at index "<<a;
        }
  }