#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack* ptr){
    if (ptr -> top == -1){
        return 1;}
    else
    {
        return 0;
    }
    };
int isFull(struct stack* ptr){
    if (ptr->top == ptr->size-1){
        return 1;}
    else{
        return 0;
    }
    }
int main()
{
    /*
    struct stack myStack;
    myStack.size = 80;
    myStack.top = -1;
    myStack.arr = (int *)malloc(myStack.size*sizeof(int));
    */
    struct stack *myStack;
    myStack->size = 80;
    myStack->top = -1;
    myStack->arr = (int *)malloc(myStack->size*sizeof(int));
    //pushing element manually
    myStack->arr[0]=4;
    myStack->top ++;
    //check is stack is empty
    if(isEmpty(myStack)){
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }
    return 0;
    
}