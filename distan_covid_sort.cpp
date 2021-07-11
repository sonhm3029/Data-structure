#include <iostream>

using namespace std;

void bubbleSort(int a[], int n)
{
	do{
		for(int i = 0; i<n- 1; i++)
		{
			if(a[i]> a[i + 1])
			{
				swap(a[i], a[i + 1]);
			}
		}
		n -=1;
	}while(n> 0);
}

void least_num_covid19(int a[], int n, int k)
{
	int count = 1;
	for(int i = 0; i< n-1; i++)
	{
		if(a[i + 1] - a[i] > k)
		{
			count += 1;
		}
	}
	cout<<count;
}

int main()
{
	int n; cin>>n;
	int a[n];
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	int k;cin>>k;
	bubbleSort(a, n);
	least_num_covid19(a,n,k);
	return 0;
}
