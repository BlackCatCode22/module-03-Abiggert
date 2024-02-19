#include <iostream>

// Define a Node struct
struct Node {
    int data; 
    Node* next;
};

// Function to insert a node at the end of the list
void insertNode(Node*& head, int newData) {
    Node* newNode = new Node;   // Create a new node
    newNode->data = newData;    // Assign data to the new node
    newNode->next = nullptr;    // Set the next pointer to nullptr since it will be the last node

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to delete a node by value
void deleteNodeByValue(Node*& head, int value) {
    if (head == nullptr) {
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

// Function to display all nodes in the list
void displayList(Node* head) {
    std::cout << "List: ";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Initialize an empty linked list
    Node* head = nullptr;

    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);

    displayList(head);

    deleteNodeByValue(head, 20);

    displayList(head);

    return 0;
}
