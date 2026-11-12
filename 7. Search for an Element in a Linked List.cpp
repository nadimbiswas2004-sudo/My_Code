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
    void Search (){
        Node *toSearch=head;
        int num;
        int index=1;
        cout<<"Enter The Search Number:";
        cin>>num;
            for(;toSearch!=NULL;toSearch=toSearch->next){
                if(toSearch->data==num){
                    cout<<"\nThe index of number:"<<index<<endl;
		  		break;
                }
                index++;
        }
    }
};
int main() {
    B b;
    b.input();
    b.Search ();
    return 0;
}