#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    double element;
    struct node *next;
} *head;

void push(int c);      // function to push a node onto the stack
int pop();             // function to pop the top node of stack
void traceStack();      // function to //print the stack values

int main()
 {
    int i = 0, j = 0;   // indexes to keep track of current position for input output strings
    char *exp = (char *)malloc(sizeof(char)*100);
    double res = 0;
    char tmp;
    head = NULL;

    printf("Enter the postfix expression: ");
    scanf("%s", exp);

    while( (tmp=exp[i++]) != '\0') {    // repeat till the last null terminator
        // if the char is operand, pust it into the stack
        if(tmp >= '0' && tmp <= '9') {
            int no = tmp - '0';
            push(no);
            continue;
        }

        if(tmp == '+') {
            int no1 = pop();
            int no2 = pop();
            push(no1 + no2);
        } else if (tmp == '-') {
            int no1 = pop();
            int no2 = pop();
            push(no1 - no2);
        } else if (tmp == '*') {
            int no1 = pop();
            int no2 = pop();
            push(no1 * no2);
        } else if (tmp == '/') {
            int no1 = pop();
            int no2 = pop();
            push(no1 / no2);
        }
    }

    printf("Result of the evalution is %d", pop());
    return 0;
}

void push(int c) {
    if(head == NULL) {
        head = malloc(sizeof(struct *node));
        head->element = c;
        head->next = NULL;
    } else {
        struct node *tNode;
        tNode = malloc(sizeof(struct *node));
        tNode->element = c;
        tNode->next = head;
        head = tNode;
    }
}

int pop() {
    struct node *tNode;
    tNode = head;
    head = head->next;
    return tNode->element;
}