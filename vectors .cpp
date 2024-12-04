#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> v={1,2,3,4,5,6,7,78};
    for (int val:v) {
        cout << val << endl;
    }
    //size fi=unction for the return size of vector
    int roshan=v.size();
    //push_back ()
    cout<<roshan;
    v.push_back(34);
    int roshan1=v.size();
    cout<<"roshan:"<<roshan1;
    //pop_back()
    v.pop_back();
    int roshan2=v.size();
    cout<<"roshan2:"<<roshan2;

    return 0;

}