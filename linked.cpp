#include<ioostream>
struct node
{
    int data;
    node*next;
};
int main()
{
    node*a=NULL,*b=NULL,*c=NULL,*d=NULL;
    a=new node();
    b=new node();
    c=new node();
    d=new node();
    cout<<"Enter 4 nodes:";
    cin>>a->data>>b->data>>c->data>>d->data;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=a;
    node*head=a;l
    node*temp=head;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }while(temp!=NULL);
}
