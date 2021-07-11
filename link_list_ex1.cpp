#include <iostream>

using namespace std;

//LINK LIST

struct LinkedList{
	int data;
	struct LinkedList *next;
};

typedef struct LinkedList *node;

node createNode(int value)
{
	node temp;
	temp = new LinkedList[sizeof(struct LinkedList)];
	temp->next = NULL;
	temp->data = value;
	return temp;
}

node addTail(node head,int value)
{
	node temp, p;
	temp = createNode(value);
	if( head == NULL)
	{
		head = temp;
	}
	else
	
	{
		p = head;
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
	return head;
}


node addHead(node head, int value)
{
	node temp = createNode(value);
	if( head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
	return head;
}


node addAt(node head, int value, int position)
{
	if(position == 0 || head == NULL)
	{
		head = addHead(head, value);
	}
	else
	{
		int k = 1;
		node p = head;
		while(p !=NULL && k !=position)
		{
			p = p->next;
			++k;
		}
		
		if( k != position)
		{
			cout<<"\nKhong hop le!";
		}
		else
		{
			node temp = createNode(value);
			temp->next = p->next;
			p->next = temp;
		}
	}
	return head;
}


node delHead(node head)
{
	if( head == NULL)
	{
		cout<<"\n KHong co gi de xoa!";
	}
	else
	{
		head = head->next;
	}
	return head;
}


node delTail(node head)
{
	if( head == NULL||head->next == NULL)
	{
		return delHead(head);
	}
	node p = head;
	while(p->next->next != NULL)
	{
		p = p->next;
	}
	p->next = p->next->next;
	return head;
}

node delAt(node head, int position)
{
	if(position == 0||head == NULL||head->next == NULL)
	{
		head = delHead(head);
	}
	else
	{
		int k = 1;
		node p = head;
		while(p->next->next != NULL && k != position)
		{
			p = p->next;
			++k;
		}
		if (k != position)
		{
			cout<<"\nvi tri xoa khong hop le";
		}
		else
		{
			p->next = p->next->next;
		}
	}
	return head;
}

int Get(node head, int index)
{
	int k = 0;
	node p = head;
	while( p != NULL && k!= index)
	{
		p = p->next;
	}
	return p->data;
}

int Search(node head, int value)
{
	int position = 0;
	for(node  p = head; p != NULL; p = p->next)
	{
		if( p->data == value)
		{
			return position;
		}
		++position;
	}
	return -1;
}


node delBYVal(node head, int value)
{
	int position = Search(head, value);
	while ( position != -1)
	{
		delAt(head, position);
		position = Search(head, value);
	}
	return head;
}

void Traverser(node head)
{
	cout<<"\n";
	for(node p = head; p != NULL; p = p->next)
	{
		cout<<p->data;
	}
}


node initHead()
{
	node head;
	head = NULL;
	return head;
}

int len(node head)
{
	int len = 0;
	for(node p = head; p != NULL; p = p->next)
	{
		++len;
	}
	return len;
}

node input()
{
	node head = initHead();
	int n, value;
	do{
		cout<<"\n Nhap so luong phan tu n = ";
		cin>>n;
	}while(n <= 0);
	
	for(int i = 0; i<n; i++)
	{
		cout<<"\nNhap gia tri can them: ";cin>>value;
		head = addTail(head, value);
	}
	return head;
}

int main()
{
	cout<<"Tao danh sach:";
	node head = input();
	Traverser(head);
	cout<<"\n-----------------";
	head = addAt(head, 100, 3);
	Traverser(head);
	cout<<"\n---------";
	delAt(head, 1);
	Traverser(head);
	
	return 0;
}

 
