#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
int main()
{
		//create a object
	node *a=NULL;
	node *b=NULL;
	node *c=NULL;
	node *d=NULL;
	//dynamic memory alowcat
	a=new node();
	b=new node();
	c=new node();
	d=new node();
	//user input
	cout<<"Enter the Linked List Data:\n";
	cin>>a->data>>b->data>>c->data>>d->data;
	//address copy
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=NULL;
		cout<<endl;
		node *t=a; 
	while(t!=NULL)
	{
		cout<<t->data<<endl;
		t=t->next;
	}
	  	//the linear search
	  	node *u=a;
	  	int index=1;
	  	int num;
	  	cout<<"\nEnter the Search number:\n";cin>>num;
	  	//cout<<"\nThe index of number: \n";
	  	for(;u!=NULL;u=u->next)
		  {
		  	if(u->data==num)
		  	{
		  		cout<<"\nThe index of number:"<<index<<endl;
		  		break;
			}
			index++;
		  }
		   //-------inserting the linked_list---------
		  //insert the first position
		  node *v=a;
		  node *e=NULL;
		  e=new node();
		  cout<<"\nEnter the inserting data in first position:\n";
		  cin>>e->data;
		  e->next=a;
		  v=e;
		  cout<<"Cout the all data:\n";
		  while(v!=NULL)
		  {
		  	cout<<v->data<<endl;
		  	v=v->next;
		  }
		    //insert the last position
		    node *w=e;
		    node *f=NULL;
		    f=new node();
		    cout<<"\nEnter the inserting data in last position:\n";
		  cin>>f->data;
		    f->next=NULL;
		    d->next=f;
		    cout<<"Cout the all data:\n";
		    while(w!=NULL)
		  {
		  	cout<<w->data<<endl;
		  	w=w->next;
		  }
		  //insert the spacific position
		  node *x=e;
		  int posi;
		  cout<<"Enter the spacific position:"<<endl;
		  cin>>posi;
		    cout<<"\nEnter the inserting data in spacific position:\n";
		    int Insert;
		  cin>>Insert;
		  if(posi==0){
		  	node *newnode=new node();
		  	newnode->data=Insert;
		  	newnode->next=x;
		  	x=newnode;
		  }
		  else{
		node *x1=x;
		  	for(int i=0;i<posi-1;i++){
		  		x1=x1->next;
		  		
			  }
			node *newnode=new node();
			newnode->data=Insert;
		  	newnode->next=x1->next;
		  	x1->next=newnode;
		  }
		  node *x1=x;
		    cout<<"Cout the all data:\n";
		    while(x1!=NULL){
		  	cout<<x1->data<<endl;
		  	x1=x1->next;
		  }
		  //-------deleteing the linked_list---------
		  //Delete the first position
		  node *head=e;
		  if(head!=NULL){
		  	node *toDelete=head;
		  	head=head->next;
		  	delete toDelete;
		  	cout<<"The first linked list delete"<<endl;
		  }
		  else{
		  	cout<<"The list is empety"<<endl;
		  }
		   while(head!=NULL)
		  {
		  	cout<<head->data<<endl;
		  	head=head->next;
		  }
		  //Delete the last position
		  node *head1=a;
		  if (head1==NULL){
		  	cout<<"The list is empty"<<endl;
		  }
			  else
			  {
			  	node *prev=head1;
			  	while(prev->next->next!=NULL)
			  	{
			  		prev=prev->next;
				  }
				  delete prev->next;
				  prev->next=NULL;
				  cout<<"The last node delete successfuly"<<endl;
			  }
			  while(head1!=NULL)
		  {
		  	cout<<head1->data<<endl;
		  	head1=head1->next;
		  }
		  //Delete the spacific position
		   int pos;
    cout << "Enter position to delete (0-based indexing):"<<endl;
    cin >> pos;

    // Deleting the first node
    if (pos == 0) {
        node* head2 = a;
        a = a->next;
        delete head2;
    } else {
        // Deleting a node at a specific position
        node *head2 =a;
        for (int i = 0; i < pos - 1; i++) {
            head2 = head2->next;
        }
        node* toDelete = head2->next;
        head2->next = toDelete->next;
        delete toDelete;
    }

cout<<"The specific node delete successfuly"<<endl;
	node *head3=a;
    while (head3 != NULL) {
        cout << head3->data <<endl;
        head3 = head3->next;
    }
	return 0;
}
