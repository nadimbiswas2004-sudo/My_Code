#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
int main()
{
	
	int num;
	cin>>num;
	cout<<"------------"<<endl;
	//create object of node class
	node *a=NULL;
	node *b=NULL;
	node *c=NULL;
	node *d=NULL;
	node *e=NULL;
	//dynamic allocation
	a=new node();
	b=new node();
	c=new node();
	d=new node();
	e=new node();
	//valu pass
	a->data=10;
	b->data=20;
	c->data=30;
	d->data=40;
	e->data=50;
	//address copy
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	e->next=NULL;
	//print the value
	node *temp=a;
	for(; temp!=NULL;temp=temp->next){
		cout<<temp->data<<endl;
	}
	cout<<endl<<"Search the data"<<endl;
    int index=1;
    node *t=a;
	while(t!=NULL){
		
		if(t->data==num)
		{
			cout<<index;
		}
		index++;
		t=t->next;
	}
	cout<<endl<<"Insearting the node"<<endl;
		node *head=a;
		node *f=NULL;
	f=new node();
	head=f;
	f->data=100;
	f->next=a;
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
	return 0;
}