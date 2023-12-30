#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5
typedef struct stack{
	int data[STACK_SIZE];
	int top;
}stack;
void reset(stack* stk){
	stk->top=-1;
}
void push(stack * stk,int x){
	if(stk->top==STACK_SIZE){
		printf("Stack is full\n");
	}else{
		stk->data[++stk->top]=x;
	}
}
int pop(stack * stk){
	if(stk->top==-1){
		printf("Stack is empty\n");
		return 0;
	}else{
		return stk->data[stk->top--];
	}
}



int main(int argc, char *argv[]) {
	    stack myStack;
    reset(&myStack); // Stacki sýfýrlar

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    push(&myStack, 40);
    push(&myStack, 50);
    
   

    int popped = pop(&myStack);
    printf("Popped element: %d\n", popped);

	return 0;
}
