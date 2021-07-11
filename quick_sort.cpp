#include <iostream>

using namespace std;



int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int i = low - 1;
	for(int j = low; j< high; j++)
	{
		if(a[j] < pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i +1],a[high]);
	return i +1;
}


void quick_sort(int a[], int low, int high)
{
	if(low < high)
	{
		int pi = partition(a, low, high);
		quick_sort(a, low, pi - 1);
		quick_sort(a, pi +1, high);
	}
}

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
	quick_sort(a, 0, n - 1);
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
