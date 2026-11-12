#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
int main(){
	node *head=NULL;
	int data;
	cout<<"WHEN GIVE THE DATA -1 THEN THE INSERT IS BREAKED:"<<endl;
	while(true)
	{
		cin>>data;
		if(data==-1){
			break;
		}
		node *newnode=new node();
		newnode->data=data;
		newnode->next=head;
		head=newnode;
	}
	// print the linked list
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	
	
	
}