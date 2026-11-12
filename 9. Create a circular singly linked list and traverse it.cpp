#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
};
class Singly_Linked_List{
  private:
  Node *head;
  public:
  Singly_Linked_List(){
      head=NULL;
  }
  void input(){
      Node *a=new Node();
      Node *b=new Node();
      Node *c=new Node();
      Node *d=new Node();
      cout<<"Enter the four Linked list:";
      cin>>a->data>>b->data>>c->data>>d->data;
      a->next=b;
      b->next=c;
      c->next=d;
      d->next=a;
      head=a;
      travers();
  }
  void travers(){
      Node *temp=head;
      cout<<"\nPrint Linked List:"<<endl;
     do{
          cout<<temp->data<<" ";
         temp=temp->next;
      } while(temp!=head);
  }
};
int main() {
    Singly_Linked_List s;
    s.input();
    return 0;
}