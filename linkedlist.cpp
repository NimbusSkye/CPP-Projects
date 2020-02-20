#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

struct Node *head = nullptr;

void add (int i) {
    auto *node = new Node;
    node->value=i;
    if (head == nullptr)
        head = new Node;
    node->next=head->next;
    head->next = node;
}

void remove (int i) {
    struct Node *ptr = head;
    bool found = false;
    while (ptr->next!=nullptr) {
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
    return head->next == nullptr;
}

void clear () {
    head->next=nullptr;
}

void print () {
    struct Node *ptr = head->next;
    while (ptr!=nullptr) {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

//int main() {
//    for (int i=1; i<20; i++)
//        add(i);
//    print();
//    return 0;
//}
