#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class B: private Node{
    private:
    Node *head;
    Node *Till;
    public:
    B(){
        head=NULL;
        Till=NULL;
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
        Till=e;

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
    void beginning_delete(){
        if(head!=NULL){
            Node *toDelete=head;
            head=head->next;
            delete toDelete;
cout<<"The first Node delete:"<<endl;
        }
        else{
            cout<<"The node is Empity"<<endl;
        }
        traverse();
    }
    void end_delete(){
         Node *toDelete=head;
        if(toDelete==NULL){
            cout<<"The Node is Empity<<endl";
        }
        else if(toDelete->next==NULL){
            delete toDelete;
            toDelete =NULL;
            cout<<"The Last node delete succssufull"<<endl;
        }
        else{
        while(toDelete->next->next!=NULL){
                toDelete=toDelete->next;
            }
            delete toDelete->next;
            toDelete->next=NULL;
            cout<<"The Last node delete succssufull"<<endl;
        }
        traverse();
    }
    void any_position_delete(){
        Node *toDelete=head;
        int pos;
        cout<<"Enter the Position:";
        cin>>pos;
        if (pos == 0) {
        beginning_delete();
        return;
    } 
    else {
        Node *rev=head;
        for (int i = 0;i < pos - 1; i++) {
            rev = rev->next;
        }
        toDelete=rev->next;
        rev->next = toDelete->next;
        delete toDelete;
        cout<<"The any position node delete succssufull"<<endl;
    }
    
    traverse();
    }
};
int main() {
    B b;
    b.input();
    b.beginning_delete();
    b.end_delete();
    b.any_position_delete();
    return 0;
}