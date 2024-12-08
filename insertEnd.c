#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int newData) {
    // Allocate memory for the new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to the new node
    newNode->data = newData;
    newNode->next = NULL;

    // If the list is empty, the new node becomes the head
    if (head == NULL) {
        return newNode;
    }

    // Traverse the list to find the last node
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Point the last node's next to the new node
    temp->next = newNode;

    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  // Initialize the linked list as empty

    // Insert nodes at the end
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    // Print the linked list
    printList(head);

    return 0;
}

