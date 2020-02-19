#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

struct Node *head = NULL;

void add (int i) {
    struct Node* node = new Node;
    node->value=i;
    if (head == NULL)
        head = new Node;
    node->next=head->next;
    head->next = node;
}

void remove (int i) {
    struct Node *ptr = head;
    bool found = false;
    while (ptr->next!=NULL) {
        if (ptr->next->value==i) {
            found = true;
            break;
        }
        ptr = ptr->next;
    }
    if (found) {
        ptr->next = ptr->next->next;
        cout << i << " was successfully removed." << endl;
        return;
    }
    cout << "No node contains value " << i << "." << endl;
}

bool isEmpty () {
    return head->next == NULL;
}

void clear () {
    head->next=NULL;
}

void print () {
    struct Node *ptr = head->next;
    while (ptr!=NULL) {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    for (int i=1; i<20; i++)
        add(i);
    print();
    return 0;
}
