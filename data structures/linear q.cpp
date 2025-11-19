#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = 0, rear = -1;

// Insert element at rear
void insert(int value) {
    if (rear == SIZE - 1)
        printf("Queue is full!\n");
    else {
        rear++;
        queue[rear] = value;
    }
}

// Delete element from front
void dequeue(){
    if (front > rear){
        printf("Queue is empty!\n");}
    else {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}

// Display current queue
void display() {
    if (front > rear)
        printf("Queue is empty!\n");
    else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    dequeue();
    display();
    return 0;
}
