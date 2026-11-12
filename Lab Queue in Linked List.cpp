#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;		
};
class Queue:private Node{
	private:
		Node *front;
		Node *rare;
		public:
			Queue(){
				front=NULL;
				rare=NULL;
			}
			void Push(int element){
				Node *newnode=new Node();
				newnode->data=element;
				newnode->next=NULL;
				if(front==NULL&&rare==NULL){
					front=rare=newnode;
				}else{
					rare->next=newnode;
					rare=newnode;
				}	
			}
			void Pop () {
			if (front == NULL) {
			cout << "Underflow" << endl;
			return;
			}
			Node* temp = front;
			cout << "Delete: " << front->data << endl;
			front = front->next;
			delete temp;
			}
			void display () {
			if (front == NULL) {
			cout << "Empty" << endl;
			return; 
			}
			Node* x = front;
			cout << "Elements: "<<endl;
			while (x != NULL) {
			cout << x->data <<endl;
			x = x->next;
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
	q.Push(10);
	q.Push(20);
	q.Push(30);
	q.Push(40);
	q.Push(50);
	q.display();
	q.Pop();
	q.display();
	q.Pop();
	q.display();
	q.Pop();
	q.display();
	q.Pop();
	q.display();
	q.Pop();
	q.display(); 
	return 0;
}