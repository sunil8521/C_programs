#include <stdio.h>
#define MAX 100
int stack[MAX], top = -1;
void push(int val) {
    stack[++top] = val;
}
int pop() {
    return stack[top--];
}
void insertAtBottom(int item) {
    if (top == -1) {
        push(item);
        return;
    }
    int temp = pop();
    insertAtBottom(item);
    push(temp);
}
void reverseStack() {
    if (top == -1) return;
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}
void displayStack() {
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}
int main() {
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        push(val);
    }
    printf("Original stack: ");
    displayStack();
    reverseStack();
    printf("Reversed stack: ");
    displayStack();
    return 0;
}