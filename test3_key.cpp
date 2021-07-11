#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *createNode(int value){
    Node* newNode = new Node;
    newNode->next = NULL;
    newNode->data = value;
    return newNode;
}


void push_back(Node *p, int value)
{
    Node *temp = createNode(value);
    Node *l = p;
    while( l->next != NULL)
    {
        l = l->next;
    }
    l->next = temp;
}

void print_list(Node *p)
{
    Node *temp = p;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int size(Node *p)
{
	int count = 0;
	Node *l = p;
	while(l !=NULL)
	{
		count +=1;
		l = l->next;
	}
	return count;
}


int main()
{
    Node *p;
    int n;cin>>n;
    int value;
    cin>>value;
    p = createNode(value);
    for(int i = 1; i<n; i++)
    {
        cin>>value;
        push_back(p,value);
    }
    Node *l = p;
    print_list(l);
    return 0;
}


