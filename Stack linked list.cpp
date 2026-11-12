#include<iostream>
using namespace std;
class Node{
public;
int data;
Node *next;

};
class stacklink{
private:
    Node *top;
    int max_size;
    int siz;
public:
    stacklink(int maxs):max_size(maxs){
    top=NULL;
    siz=0;
    }
    void push(int num){
    if(siz==max_size){
        cout<<"Overlow"<<endl;
        return;
    }
    Node *newenode=new Node();
    newnode->data=num;
    newnode->next=top;
    top=newnode;
    siz++;
    }
    void pop(){
        if(top==NULL){
            cout<<"underflow"<<endl;
            return;
        }
    Node *delet=top;
    top=top->next;
    delete delet;
    cout<<"poped"<<endl;
    }
    void display(){
    Node *temp=top;
    if(top==NULL){
            cout<<"Empty"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }


};
int main()
{
    stacklink s(3);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    s.pop();

    s.pop();

    s.display();
}
