#include <iostream>

using namespace std;

struct node{
    int value;
    node *next;
};

node *create_node(int value)
{
    node *temp = new node;
    temp->value = value;
    temp->next = NULL;
    return temp;
}

void push_back(node *head, int value)
{
    node *temp = head;
    node *new_node = create_node(value);
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print_node(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}



void insert_node(node *head, int position, int insert_value)
{
    node *temp = head;
    for(int i = 0; i< position - 1; i++)
    {
        temp = temp->next;
    }
    node *insert_node = create_node(insert_value);
    insert_node->next = temp->next;
    temp->next = insert_node;

}



int main()
{
    int n; cin>>n;
    int value;cin>>value;
    node *head = create_node(value);
    for(int i = 1; i<n; i++)
    {
    	cin>>value;
    	push_back(head,value);
	}
    int k,x;cin>>k>>x;
	insert_node(head,k,x);
	print_node(head);
    return 0;
}
