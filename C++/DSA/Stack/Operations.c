#include<stdio.h>
#define MAX 5

int stack[MAX], top = -1;


void display() {
    for(int i=top;i >= 0;i--) {
        printf("%d\n",stack[i]);
    }
    printf("\n");
}

void push(int val) {
    if(top == MAX-1) {
        printf("Stack Overflow");
    }
    else {
        stack[++top] = val;
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow");
    }
    else {
        stack[top--];
        printf("Element popped");
    }
}

int isEmpty() {
    return top=MAX-1;
    printf("Stack is Full");
}

int isFull() {
    return top == -1;
    printf("Stack is Full");
}

int main() {
    push(10);
    push(20);
    display();
    pop(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    display();

    if(isEmpty) {
      printf("It is Empty");
    }
    else {
        printf("Not empty");
    };
    return 0;
}