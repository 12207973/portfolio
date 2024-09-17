#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node* prev;
};

int findMaxValue(Node* head) {
    int maxVal = INT_MIN; 
    Node* current = head; 

    while (current != NULL) {
        if (current->value > maxVal) {
            maxVal = current->value;
        }
        current = current->next;
    }

    return maxVal;
}

int main() {
    // Create a sample doubly linked list
    Node* head = new Node;
    head->value = 10;
    head->prev = NULL;
    Node* tail = head;
    for (int i = 9; i >= 1; i--) {
        Node* newNode = new Node;
        newNode->value = i;
        newNode->next = tail;
        newNode->prev = NULL;
        tail->prev = newNode;
        tail = newNode;
    }

    // Find the maximum value in the list and display it
    int maxVal = findMaxValue(head);
    cout << "The greatest value in the list is: " << maxVal << endl;

    return 0;
}