#include<iostream>
using namespace std;
class Stack{
	private:
		int stack[100];
		int top;
		const int MAX_SIZE;
		public:
			Stack(int maxsize): MAX_SIZE(maxsize),top(-1){}
			void Push(int element){
				if(top==MAX_SIZE-1){
					cout<<"Stack Overflow"<<endl;
					return;
				}
				stack[++top]=element;
				cout<<"Pushed"<<"  element"<<endl;
			}
			void pop(){
				if(top==-1){
					cout<<"Stack Overflow"<<endl;
					return;
				}
				cout<<"Poped:"<<stack[top--]<<endl;
			}
			void display(){
				if(top==-1){
					cout<<"Stack is empety"<<endl;
					return;
				}
				cout<<"Stack element:"<<endl;
				for(int i=0;i<=top;i++){
					cout<<stack[i]<<endl;
				}
				cout<<"\n";
			}
};
class node{
	public:
		int data;
		node *next;
};
class Stack_Linked_List:private node{
	private:
		node *top;
		int size;
		const int MAX_SIZE;
		public:
			Stack_Linked_List(int max_size):MAX_SIZE(max_size){
				top=NULL;
				size=0;
			}
			void Push(int element){
				if(size==MAX_SIZE){
					cout<<"Stack Overflow"<<endl;
					return;
				}
				node *newnode=new node();
				newnode->data=element;
				newnode->next=top;
				top=newnode;
				size++;
				cout<<"Pushed"<<" Element"<<endl;
			}
			void Pop(){
				if(top==NULL){
					cout<<"Stack Overflow"<<endl;
					return;
				}
				node *temp=top;
				top=top->next;
				cout<<"Popped:"<<temp->data<<endl;
				delete temp;
				size--;
			}
			void display(){
				if(top==NULL){
					cout<<"Stack Overflow"<<endl;
					return;
				}
				node *temp=top;
				cout<<"Stack Element"<<endl;
				while(temp!=NULL){
					cout<<temp->data<<endl;
					temp=temp->next;
				}
				cout<<endl;
			}
			~Stack_Linked_List(){
				while(top!=NULL){
					cout<<"END";
					break;
				}
			}
};
int main(){
	cout<<endl<<"_________Stack in Array__________"<<endl;
	Stack stack(5);
	stack.Push(10);
	stack.Push(20);
	stack.Push(30);
	stack.Push(40);
	stack.Push(50);
	stack.display();
	cout<<endl;
	stack.pop();
	stack.display();
	stack.pop();
	stack.pop();
	stack.pop();
	stack.display();
	cout<<endl<<"_________Stack in Linked List__________"<<endl;
	Stack_Linked_List sl(4);
	sl.Push(10);
	sl.Push(20);
	sl.Push(30);
	sl.Push(40);
	sl.display();
	sl.Pop();
	sl.display();
	sl.Pop();
	sl.Pop();
	sl.display();
	
	return 0;
}