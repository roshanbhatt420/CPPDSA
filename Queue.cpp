#include<iostream>
#define QUEUE_SIZE 10
using namespace std;
class Queue{
  private:
    int front, rear;
    int queue[QUEUE_SIZE];
    public:
      Queue(){
        front = -1;
        rear = -1;
        }
        void enqueue(int data)
        {
          if (rear==QUEUE_SIZE-1)
            {
                cout <<"Enqueue is full" << endl;
             }
          else {
            if(front==-1 && rear==-1) {
              front = rear = 0;
              queue[rear] = data;
              rear++;
              cout <<"Enqued successfully: " << data << endl;
            }
            else {
              rear++;
              queue[rear] = data;
              cout <<"data is inserted succefully"<<endl;
            }
            }
          }
          void dequeue() {
          int data;
          if(front==-1 && rear==-1)
          {
            cout << "Dequeue is empty" << endl;
          }
          else {
            if (front==rear)
            {
              data = queue[front];
              cout<<"Dequeued data is "<<data<<endl;
              front=rear=-1;
            }
            else{
              data=queue[front];
              front=front+1;
              cout<<"Dequeued data is "<<data<<endl;
            }
          }
        }
  void display() {
        if(front==-1 && rear==-1)
          {
            cout<<"The queue is empty"<<endl;
            return;
          }
         else {
           cout<<"Element of queue: "<<endl;
           for(int i=front; i<=rear; i++) {
             cout<<queue[i]<<" ";

           }
         }
      }

};
int main() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
 q.display();
}
