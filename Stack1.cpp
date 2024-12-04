#include <iostream>
#define max 10
using namespace std;
class Stack {
    private:
    int top;
    int stack_arr[max];
    public:
    Stack() {
        top=-1;
    }
    void push(int data) {
        if (top==max-1) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else {
            top++;
            stack_arr[top]=data;
            cout<<"Pushed"<<data<<endl;
        }

    }
    void display() {
        if (top==-1) {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        else {
            cout<<"Stack Contents:"<<endl;
            for (int i=top; i>=0; i--) {
                cout<<stack_arr[i]<<" ";
            }
        }
    }
     void pop()
    {
        if (top==-1) {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        else {
            int data=stack_arr[top];
            top=top-1;
            cout<<"Popped:"<<data<<endl;
        }
    }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.display();
   s.pop();
    s.pop();
    s.display();
    return 0;
}