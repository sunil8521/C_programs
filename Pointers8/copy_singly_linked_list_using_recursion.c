#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Node* copyList(Node* head) {
    if (head == NULL) return NULL;
    Node* newNode = createNode(head->data);
    newNode->next = copyList(head->next);
    return newNode;
}
void printList(Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    printf("Original List: ");
    printList(head);
    Node* copiedList = copyList(head);
    printf("Copied List: ");
    printList(copiedList);
    return 0;
}