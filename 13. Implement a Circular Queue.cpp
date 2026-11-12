#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
};
class Circular_Queue{
    private:
    Node *front;
    Node *rare;
    public:
    Circular_Queue(){
        front=NULL;
        rare=NULL;
    }
    void Enque(int element){
        Node *newnode=new Node();
        newnode->data=element;
        newnode->next=NULL;
        if(front==NULL){
            front=rare=newnode;
            newnode->next=front;
        }
        else{
            rare->next=newnode;
            newnode->next = front;
            rare = newnode; 
        }
    }
    void Traverse(){
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
            Node *temp=front;
                do{
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }while(temp!=front);
            cout<<endl;
        }
        void Deque(){
        	if (front==NULL){
        		cout<<"Under Flow"<<endl;
        		return;
			}
			Node *deque=front;
			front=front->next;
			rare->next=front;
			delete deque;
		}
};
int main() {
   Circular_Queue c;
   cout<<"The Traverse in Circular Queue:"<<endl;
    c.Enque(10);
    c.Enque(20);  
    c.Enque(40);  
    c.Enque(30);
    c.Enque(60);
    c.Enque(70);
    c.Traverse();
    cout<<"The Deque in Circular Queue:"<<endl;
    c.Deque();
    c.Traverse();
    c.Deque();
    c.Deque();
    cout<<"The Deque in Circular Queue:"<<endl;
    c.Deque();
    c.Traverse();
    return 0;
}