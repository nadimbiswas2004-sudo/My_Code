#include<iostream>
using namespace std;
class Queue_in_Array{
	private:
		int queue[100];
		int font;
		int rare;
		int MAX_SIZE;
		public:
			Queue_in_Array(int max_size){
				MAX_SIZE=max_size;
				font=-1;
				rare=-1;
			}
			void push(int element){
				if(rare==MAX_SIZE-1){
					cout<<"Over Flow"<<endl;
					return;
				}
				if(font==-1 && rare==-1){
					font=rare=0;
				}
				else{
					rare++;
				}
				queue[rare]=element;
			}
			void Pop(){
				if (font == -1 || font > rare) {
				cout << "UNDERFLOW" << endl;
				return;
				}
				cout << "Popped: " << queue[font] << endl;
				font++;
			}
			void display(){
				if (font == -1 || font > rare) {
				cout << "UNDERFLOW" << endl;
				return;
				}
				cout << "Queue elements: "<<endl;
				for (int i = font; i <= rare; i++) {
				cout << queue[i] <<endl;
				}
				cout << endl;
			}
};

class Node {
	public:
		int data;
		Node* next;
		};
class Queue_in_Linked_List:private Node{
		private:
			Node* front;
			Node* rear;
		public:
			Queue_in_Linked_List () {
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
			return; }
			Node* temp = front;
			cout << "Queue elements: "<<endl;
			while (temp != NULL) {
			cout << temp->data <<endl;
			temp = temp->next;
			}
			cout << endl;
			}
			~Queue_in_Linked_List(){
				while(front!=NULL){
					cout<<"END";
					break;
				}
			}
};
int main(){
	cout<<"___________Queue in Array____________"<<endl;
	Queue_in_Array queue(4);
	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.display();
	queue.Pop();
	queue.display();
	queue.Pop();
	queue.Pop();
	queue.Pop();
	queue.display();
	cout<<"___________Queue in Linked List____________"<<endl;
	Queue_in_Linked_List q;
	q.insert(10);
	q.insert(20);
	q.insert(30);
	q.insert(40);
	q.insert(50);
	q.display();
	q.deletion();
	q.display();
	q.deletion();
	q.deletion();
	q.deletion();
	q.display();
	return 0;
}