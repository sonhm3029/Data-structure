#include <iostream>

using namespace std;

//Stack
/*Function:
	1. Push
	2. Pop
	3. Top
	4. IsEmpty
	5. IsFull
	6. Size
*/

int top  = -1;
bool isFull(int capacity)// suc chua
{
	if( top >= capacity - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEmpty()
{
	if( top = -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void push(int stack[], int value, int capacity)
{
	if( isFull(capacity) == true)
	{
		cout<<"\n Stack is full !";
	}
	else
	{
		top += 1;
		stack[top] = value;
	}
}

//Delete element on top of stack
void pop()
{
	if(isEmpty() == true)
	{
		cout<<"\n Stack is empty !";
	}
	else
	{
		top --;
	}
}

//Return element on top of stack
int Top(int stack[])
{
	return stack[top];
}

//Return size
int size()
{
	return top + 1;
}



int main()
{
	int capacity = 3;
	int top  = -1;
	int stack[capacity];
	push(stack, 5, capacity);
	cout<<"\n stack dang co size = "<<size();
	return 0;
}
