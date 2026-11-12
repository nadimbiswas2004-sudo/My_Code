#include<iostream>
using namespace std;
class node{
    private:
int data; 
node *next;
public:
void putdata(){
    node *a=NULL;
    node *b=NULL;
    node *c=NULL;

a=new node ();
b=new node ();
c=new node ();

a->data=10;
b->data=20;
c->data=30;

a->next=b;
b->next=c;
c->next=NULL;

while(a!=NULL)
{
cout<<a->data<<endl;
a=a->next;
}
}
};
int main()
{
node n;
n.putdata();
return 0;
}