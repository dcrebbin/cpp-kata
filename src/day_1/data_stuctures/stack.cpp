#include <iostream>
#include <climits>

using namespace std;

struct Stack {
    int top;
    int capacity;
    int* array;

int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        return;
    }
    stack->array[++stack->top] = item;
    cout << item << " pushed to stack" << endl;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        return INT_MIN;
    }
    return stack->array[stack->top--];
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        return INT_MIN;
    }
    return stack->array[stack->top];
}
};

struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}


int main() {
    struct Stack* stack = createStack(100);

    

    stack->push(stack, 10);
    stack->push(stack, 20);
    stack->push(stack, 30);
    stack->push(stack, 40);
    stack->push(stack, 50);

    cout << stack->pop(stack) << " popped from stack" << endl;

    cout << "Top item is " << stack->peek(stack) << endl;

    return 0;
}