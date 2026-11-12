#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
};

class A {
private:
    Node *head; 
    Node *Low;
public:
    A() {
        head = NULL;
       Low=NULL;
    }
    void input() {
        Node *a = new Node();
        Node *b = new Node();
        Node *c = new Node();
        Node *d = new Node();
        Node *e = new Node();

        cout << "Enter The Five Linked List Elements:" << endl;
        cin >> a->data >> b->data >> c->data >> d->data >> e->data;

        a->next = b;
        b->next = c;
        c->next = d;
        d->next = e;
        e->next = NULL;

        head = a; 
        Low=e;

        cout << "\nTraverse the Linked List:" << endl;
        traverse();
    }

    void traverse() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void begining_insert(int element) {
        Node *aa = new Node();
        aa->data = element;
        aa->next = head;
        head = aa;

        cout << "\nLinked List after insertion at beginning:" << endl;
        traverse();
    } 
    void end_insert(int element){
        Node *ee=new Node();
        ee->data=element;
        Low->next=ee;
        ee->next=NULL;
        cout << "\nLinked List after insertion at end:" << endl;
        traverse();
    } 
    void anyposition_insert(){
        int pos;
        cout<<"Enter The Any Position:";
        cin>>pos;
        int element;
        cout<<"\nEnter The Element:";
        cin>>element;
        Node *head1 = head;
        Node *hea = head;
        if (pos == 0){
        	begining_insert(element);
        	return;
        }
        else{
        for (int i = 0; head1 != NULL && i < pos - 1; i++) {
            head1 = head1->next;
        }
        Node *newnode = new Node();
        newnode->data = element;
        newnode->next = head1->next;
        head1->next = newnode;
        cout << "\nLinked List after insertion at position " << pos << ":" << endl;
        }
        traverse();
    }
};

int main() {
    A a;
    a.input();
   a.begining_insert(100);
    a.end_insert(200);
    a.anyposition_insert();
    return 0;
}
