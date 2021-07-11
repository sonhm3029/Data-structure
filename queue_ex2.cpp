#include <iostream>
#include <queue>

using namespace std;

bool check_appeared(queue<int> list, int k, int check_value)
{
	while(! list.empty())
	{
		if(check_value == list.front())
		{
			return true;
		}
		list.pop();
	}
	return false;
}

void messagesPhone(int list_mess[], int n, int k)
{
    queue<int> temp;
    temp.push(list_mess[0]);
    int i = 1;
    int count = 1;
    do{
    	if( check_appeared(temp,k, list_mess[i]) == false&&count <k)
		{
			temp.push(list_mess[i]);
			count +=1;
		}
		if(count>=k && check_appeared(temp,k, list_mess[i]) == false)
		{
			temp.pop();
			temp.push(list_mess[i]);
		}
		i++;	
	}while(i <n);
	cout<<endl;
	while(!temp.empty())
	{
		cout<<temp.front()<<" ";
		temp.pop();
	}
}

int main()
{
    int n ;cin>>n;
    int list_mess[n];
    for(int i = 0; i<n; i++)
    {
        cin>>list_mess[i];
    }
    int k; cin>>k;
    messagesPhone(list_mess,n,k);
    return 0;
}
