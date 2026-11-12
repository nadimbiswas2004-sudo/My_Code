#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *prev;
  Node *next;
};
class Doubly_Linked_List{
  private:
  Node *head;
  Node *till;
  public:
  Doubly_Linked_List(){
      head=NULL;
      till=NULL;
  }
  void input(){
      Node *a=new Node();
      Node *b=new Node();
      Node *c=new Node();
      Node *d=new Node();
      cout<<"Enter the four Linked list:";
      cin>>a->data>>b->data>>c->data>>d->data;
      a->prev=NULL;
      b->prev=a;
      c->prev=b;
      d->prev=c;
      a->next=b;
      b->next=c;
      c->next=d;
      d->next=NULL;
      head=a;
      till=d;
      travers();
  }
  void travers(){
      Node *temp1=head;
      Node *temp2=till;
      cout<<"\nPrint Linked List in Travarce:"<<endl;
     while(temp1!=NULL){
         cout<<temp1->data<<" ";
         temp1=temp1->next;
     }
      cout<<"\nPrint Linked List in Revarce:"<<endl;
     while(temp2!=NULL){
         cout<<temp2->data<<" ";
         temp2=temp2->prev;
     }
  }
};
int main() {
    Doubly_Linked_List s;
    s.input();
    return 0;
}