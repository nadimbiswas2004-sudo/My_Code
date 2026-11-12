#include<iostream>
using namespace std;
class Queue{
	private:
		int queue[100];
		int front;
		int rare;
		int MAX;
		public:
			Queue(int max){
				MAX=max;
				front=-1;
				rare=-1;
			}
			void insert(int element){
				if(rare==MAX-1){
					cout<<"Overflow"<<endl;
					return;
				}
				if(front==-1&&rare==-1){
					front=rare=0;
				}
				else{
					rare++;
				}
				queue[rare]=element;
			}
			void Pop(){
				if(front==-1||front>rare){
					cout<<"Overflow"<<endl;
					return;
				}
				cout<<"Pop: "<<queue[front]<<endl;
				front++;
			}
			void display(){
				if(front==-1||front>rare){
					cout<<"Overflow"<<endl;
					return;
				}
				for(int i=front;i<=rare;i++){
					cout<<queue[i]<<endl;
				}
				cout<<endl;
			}
};
int main(){
	Queue q(4);
	q.insert(10);
	q.insert(20);
	q.insert(30);
	q.insert(40);
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