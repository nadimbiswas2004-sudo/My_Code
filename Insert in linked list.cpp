#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
class linked_list{
private:
    Node *head;
    Node *tile;
public:
    linked_list(){
    head=NULL;
    tile=NULL;
    }
    void input(){
    Node *a=new Node();
    Node *b=new Node();
    Node *c=new Node();
    Node *d=new Node();
    cout<<"Enter the Data:"<<endl;
    cin>>a->data>>b->data>>c->data>>d->data;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    head=a;
    tile=d;


    }
    void traverse(){
    cout<<"Traverse:"<<endl;
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    }
    void firstinsert(int element){
        cout<<"First posaition:"<<endl;
    Node *aa=new Node();
    aa->data=element;
    aa->next=head;
    head=aa;
    traverse();
    }
    void last position(int element){
        cout<<"last posaition:"<<endl;
    Node *ab=new Node();
    ab->data=element;
    tile->next=ab;
    tile=ab;
    traverse();

    }
    void any position(int element){

    int pos;
    cout<<"Enter the position"<<endl;
    cin>>pos;
    if(pos==0){
        firstinsert(int element);
        return;
    }
    else{
        Node *bb=new Node();
        for(int i=0;head->next=NULL&&i<pos;i++){
            bb->data=element;
            bb->next=head->next;
            head->next=bb;
            traverse();
        }
    }

    }
};
int main(){
    linked_list l;
    l.input(10);
    l.input(20);
    l.input(30);
    l.input(40);
    l.traverse();
    l.firstinsert(100);
    l.last position(200);
    l.any position(400);
    return 0;

}
