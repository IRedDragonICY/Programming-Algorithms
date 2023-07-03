#include <iostream>
using namespace std;

// Node struct
struct Node {
    int data;
    Node* next;
};

// Function to count the number of nodes in the linked list
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Create a linked list with n nodes
    Node* head = new Node;
    Node* current = head;
    for (int i = 1; i < n; i++) {
        current->data = i;
        current->next = new Node;
        current = current->next;
    }
    current->data = n;
    current->next = NULL;

    // Call the countNodes function and print the result
    int count = countNodes(head);
    cout << "The number of nodes in the linked list is: " << count << endl;

    return 0;
}
