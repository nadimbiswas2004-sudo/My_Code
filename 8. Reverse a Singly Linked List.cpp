#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        
    }

    void traverse() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<< endl;
    }

    void reverse_iterative() {
        Node *prev = NULL, *curr = head, *next = NULL;
        while (curr != NULL) {
            next = curr->next;  
            curr->next = prev;  
            prev = curr;         
            curr = next;         
        }
        head = prev;  
    }

    Node* reverse_recursive(Node* curr, Node* prev = NULL) {
        if (curr == NULL) {
            head = prev;
            return head;
        }
        Node* next = curr->next;
        curr->next = prev;
        return reverse_recursive(next, curr);
    }

    void reverse_recursive_call() {
        head = reverse_recursive(head);
    }
};

int main() {
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    cout << "Original List: ";
        l.traverse();
    l.reverse_iterative();
    cout << "Reversed List (Iterative): ";
    l.traverse();

    // Recursive Reverse
    l.reverse_recursive_call();
    cout << "Reversed List (Recursive): ";
    l.traverse();

    return 0;
}
