//#include <iostream>
//
//using namespace std;
//
////Create stack using link list
//
//
//int main()
//{
//	return 0;
//}
#include <iostream>
 
using namespace std;
 
struct Stack
{
    int data;
    Stack *next;
} *TOS = NULL;
 
void Push(int value)
{
    Stack *new_node = new Stack();
    new_node -> data = value;
    new_node -> next = TOS;
    TOS = new_node;
}
 
void Pop()
{
    if(TOS == NULL)
        cout << "Stack is empty" << endl;
    else
    {
        Stack *temp;
        temp = TOS;
        TOS = TOS -> next;
        temp -> next = NULL;
        delete temp;
    }
}
 
void Print_Stack()
{
    if(TOS == NULL)
        cout << "Stack is empty" << endl;
    else
    {
        cout << "Top of stack is " << TOS -> data << endl;
 
        if(TOS -> next != NULL)
        {
            cout << "Other Elements are : ";
            Stack *current = TOS -> next;
 
            while(current)
            {
                cout << current -> data << " ";
                current = current -> next;
            }
 
            cout << endl;
        }
    }
}
 
int main()
{
    for(int i = 0; i < 5; i++)
        Push(i);
 
    Print_Stack();
 
    Pop();
 
    Print_Stack();
 
    return 0;
}
