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
				cout<<"Pushed"<<stack[top--]<<endl;
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
int main(){
	Stack stack(5);
	stack.Push(10);
	stack.Push(20);
	stack.Push(30);
	stack.Push(40);
	stack.Push(50);
	stack.display();
	cout<<endl<<"-------------------------"<<endl;
	stack.pop();
	stack.display();
	stack.pop();
	stack.display();
	stack.pop();
	stack.display();
	stack.pop();
	stack.display();
	return 0;
}