#include<iostream>
using namespace std;
class Queue{
	private:
		int queue[100];
		int font;
		int rare;
		int MAX_SIZE;
		public:
			Queue(int max_size){
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
int main(){
	Queue queue(4);
	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.display();
	queue.Pop();
	queue.display();
	queue.Pop();
	queue.display();
	queue.Pop();
	queue.display();
	queue.Pop();
	queue.display();
}