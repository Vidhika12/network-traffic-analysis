#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

// Function to insert (push) an element into the stack
void push() 
{
    int value;
    if (top == SIZE - 1) 
{
        printf("Stack Overflow! Cannot insert more elements.\n");
    } 
else 
{
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d inserted into the stack.\n", value);
    }
}

// Function to delete (pop) an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to delete.\n");
    } else {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}
// Function to display the stack
void display() {
    if (top == -1)
 {
    printf("Stack is empty.\n");
    }
 else {

    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--) 
{
    printf("%d\n", stack[i]);
        }
    }
}
// Main function with switch (no loop)
int main() {
    int choice;
    printf("\n--- Stack Menu ---\n");
    printf("1.Push (Insert)\t  2.Pop (Delete)\t  3.Display\t  4.Exit\n ");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
    return 0; }
