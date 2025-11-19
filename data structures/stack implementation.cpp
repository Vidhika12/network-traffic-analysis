#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

//Function to insert or push element in a stack
void push()
{
     int value;
     if (top==SIZE-1){
         printf("stack overflow, cannot insert more elements.\n");}
     else{
          printf("enter value to push:");
          scanf("%d",&value);
          top++;
          stack[top]=value;
          printf("%d inserted into the stack.\n",value);
          }
          }
          
//Function to delete or pop an element from the stack
void pop()
{
     if(top==-1){
        printf("stack underflow");}
     else{
         printf("deleted element:%d\n",stack[top]);
         top--;
         }
         }
         
//Function to display stack
void display() {
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else{
        printf("Stack elements:\n");}
        for (int i=top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }

//Main function with switch
int main(){
    int choice;
    printf("\n---STACK MENU---\n");
    printf("1.push\t 2.pop\t 3.display\t 4.exit\n");
    printf("enter your choice:\n");
    scanf("%d",&choice);
    switch(choice){
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
                        printf("exit program");
                        break;
                   default:
                           printf("invalid choice");
                           }
return 0;
}
