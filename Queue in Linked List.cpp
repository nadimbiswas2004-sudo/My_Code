#include <iostream>
using namespace std;
class Node {
	public:
		int data;
		Node* next;
		};
class Queue:private Node{
		private:
			Node* front;
			Node* rear;
		public:
			Queue () {
			front = NULL;
			rear = NULL;
			}
			
			void insert (int val)
			 {
			Node* p = new Node ();
			p->data = val;
			p->next = NULL;
			if (front == NULL) 
			{
			front = rear = p;
			} else 
			{
			rear->next = p;
			rear = p;
			}
			}
			void deletion () {
			if (front == NULL) {
			cout << "Underflow" << endl;
			return;
			}
			Node* temp = front;
			cout << "Deleted: " << front->data << endl;
			front = front->next;
			delete temp;
			}
			void display () {
			if (front == NULL) {
			cout << "Queue is empty" << endl;
			return;
			 }
			Node* temp = front;
			cout << "Queue elements: "<<endl;
			while (temp != NULL) {
			cout << temp->data <<endl;
			temp = temp->next;
			}
			cout << endl;
			}
			~Queue(){
				while(front!=NULL){
					cout<<"END";
					break;
				}
			}
};
int main () {
	Queue q;
	q.insert(10);
	q.insert(20);
	q.insert(30);
	q.insert(40);
	q.insert(50);
	q.display();
	q.deletion();
	q.display();
	q.deletion();
	q.display();
	q.deletion();
	q.display();
	q.deletion();
	q.display();
	q.deletion();
	q.display();
	return 0;
}