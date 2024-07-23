#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

void push(struct stack* ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push %c to the stack\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack* ptr) {
    if (isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;  // Returning -1 to indicate underflow; in real cases, consider using a different approach for char stacks.
    } else {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char *exp) {
    // Create and initialize the stack
    struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            push(sp, '(');
        } else if (exp[i] == ')') {
            if (isEmpty(sp)) {
                free(sp->arr);
                free(sp);
                return 0;
            }
            pop(sp);
        }
    }

    int result = isEmpty(sp);
    free(sp->arr);
    free(sp);
    return result;
}

int main() {
    char *exp = "((8)(*--$$9))";
    if (parenthesisMatch(exp)) {
        printf("The parenthesis is matching\n");
    } else {
        printf("The parenthesis is not matching\n");
    }
    return 0;
}
