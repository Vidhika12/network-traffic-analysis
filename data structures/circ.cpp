//program to implement circular queue 
#include<stdio.h> 
#define N 5 
int queue[5]; 
int front=-1; 
int rear=-1; 
int x,o; 

void enqueue(int x){ 
if(front==-1 && rear==-1){ 
front=rear=0; 
queue[rear]=x; 
printf("\n%d enqueued",queue[rear]); 
}else if((rear+1)%N==front){ 
printf("\nQueue is full"); 
}else{
rear=(rear+1)%N; 
queue[rear]=x; 
printf("\n%d enqueued",queue[rear]); 
} 
} 

void dequeue(){ 
if(front==-1 && rear==-1){ 
printf("\nQueue is empty"); 
}else if(front==rear){ 
printf("\n%d dequeued",queue[front]); 
front=rear=-1; 
}else{ 
printf("\n%d dequeued",queue[front]); 
front=(front+1)%N; 
} 
} 

void display(){ 
int i=front; 
if(rear==-1 && front==-1){ 
printf("\nQueue is empty"); 
}else{ 
printf("\nQueue:\n");
while(i!=rear){ 
printf("\n%d",queue[i]); 
i=(i+1)%N; 
} 
printf("\n%d",queue[i]); 
} 
} 

int main(){ 
int choice, o, x; 
while(choice!=4){ 
printf("\n--- Circular Queue Menu ---\n"); 
printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit"); 
printf("\nEnter your choice"); 
scanf("%d",&choice); 
switch(choice){ 
case 1: 
printf("\nEnter value to be enqueued\n"); 
scanf("%d",&o); 
enqueue(o); 
break; 
case 2: 
dequeue(); 
break;
case 3: 
printf("\nElement displayed: \n"); 
display(); 
break; 
case 4: 
printf("\nExit"); 
break; 
default: 
printf("\nInvalid choice"); 
break; 
} 
} 
}
