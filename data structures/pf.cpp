#include <stdio.h>
#include <ctype.h>  // isalnum()
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
char peek() { return stack[top]; }

int precedence(char op) {
    if(op=='+' || op=='-') return 1;
    if(op=='*' || op=='/') return 2;
    return 0;
}

void infixToPostfix(char exp[]) {
    for(int i=0; exp[i]!='\0'; i++) {
        char c = exp[i];

        if (isalnum(c))   // operand ? output
            printf("%c", c);

        else if (c == '(')
            push(c);

        else if (c == ')') {
            while (top!=-1 && peek()!='(')
                printf("%c", pop());
            pop(); // remove '('
        }

        else {  // operator
            while (top!=-1 && precedence(peek()) >= precedence(c))
                printf("%c", pop());
            push(c);
        }
    }

    while(top!=-1)   // empty stack
        printf("%c", pop());
}

int main() {
    char exp[MAX];
    printf("Enter infix: ");
    scanf("%s", exp);
    printf("Postfix: ");
    infixToPostfix(exp);
    return 0;
}

