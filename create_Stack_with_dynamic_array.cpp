#include <iostream>

using namespace std;


//Create stack with dynamic array

typedef struct Stack{
	int top;// top of stack
	int capacity;// max size of stack
	int *array;// dynamic array with pointer
}Stack;


Stack* createStack(int capacity)
{
	Stack* stack = new Stack[capacity];
	stack->top = -1;
	stack->capacity = capacity;
	stack->array = new int[capacity];
	return stack;
}

bool isEmpty(Stack* stack)
{
	return stack->top == -1;
}
bool isFull(Stack* stack)
{
	return stack->top == stack->capacity - 1;
}

void push(Stack* stack, int push_element)
{
	if(isFull(stack))
	{
		return;
	}
	stack->array[++stack->top] = push_element;
	cout<<"\push "<<push_element<<" to stack !";
}

void pop(Stack* stack)
{
	
}


int main()
{
	return 0;
}
