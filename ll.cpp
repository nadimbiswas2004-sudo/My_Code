#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
int main()
{
    node *a=NULL;
    node *b=NULL;
    node *c=NULL;
    a= new node();
    b= new node();
    c= new node();
    a->data=10;
    b->data=20;
    c->data=30;
    a->next =b;
    b->next =c;
    c->next =NULL;
    node*head=a;
    cout<<"before inserting "<<endl;
    node*alex=head;
    while(alex!=NULL)
    {
    cout<<alex->data<<endl;
    alex=alex->next;
    }
     /* node*p=new node();
    p->data=50;
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next = p;
    p->next = p;*/
    node *p=NULL;
    p=new node();
    p->data=50;
    p->next=head;
    node *temp=p;
cout<<"after inserting "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
	return 0;
}
