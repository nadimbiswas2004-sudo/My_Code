#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100], front, rear;
public:
    Queue() : front(-1), rear(-1) {};
    void enqueue(int x) {
        if (rear == 99)
        cout<<"Queue is full"<<endl;
        arr[++rear] = x;
        if (front == -1) 
        front = 0;
    }
    int dequeue() {
        if (front == -1 || front > rear) cout<<"Queue is empty";
        return arr[front++];
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    q.enqueue(4);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    return 0;
}