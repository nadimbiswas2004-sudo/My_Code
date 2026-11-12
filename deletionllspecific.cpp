#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int data;
    cout << "Enter data for nodes (enter -1 to stop): ";
    // User input from last to first
    while (true) {
        cin >> data;
        if (data == -1) {
            break;
        }
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    cout << "Original list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // User input of position to delete
    int pos;
    cout << "Enter position to delete (0-based indexing): ";
    cin >> pos;

    // Deleting the first node
    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        // Deleting a node at a specific position
        temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }

    cout << "List after deletion: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
