#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class node: private Node{
    public:
    void input(){
        Node *a=NULL;
    Node *b=NULL;
    Node *c=NULL;
    Node *d=NULL;
    Node *e=NULL;
    a=new Node();
    b=new Node();
    c=new Node();
    d=new Node();
    e=new Node();
    cout<<"Enter The Five Linked List:"<<endl;
    cin>>a->data>>b->data>>c->data>>d->data>>e->data;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
    cout<<"\nTraverce the Linked List:"<<endl;
    Node *head;
    head=a;
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
    
    }
};
int main(){
    node n;
    n.input();
    return 0;
}