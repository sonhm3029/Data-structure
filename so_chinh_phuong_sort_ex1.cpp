#include <iostream>
#include <math.h>

using namespace std;

//void insertionSort(int a[], int n)
//{
//	for(int i = 0; i<n; i++)
//	{
//		for(int j = 0; j <=i; j++)
//		{
//			if(a[j] >a[i] )
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}

int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int i = low -1;
	for(int j = low; j < high; j++)
	{
		if(a[j] < pivot)
		{
			++i;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[high]);
	return i +1;
}

void quick_sort(int a[], int low, int high)
{
	if(low < high)
	{
		int pi = partition(a, low, high);
		quick_sort(a, low, pi - 1);
		quick_sort(a, pi+1, high);
	}
}

void is_chinh_phuong_in_array(int a[], int n)
{
	int count = 0;
	if( sqrt(a[0])*sqrt(a[0]) == a[0])
	{
			cout<<a[0]<<" ";
			count +=1;
	}
	for(int i =1; i<n; i++)
	{
		if(a[i] > a[i -1])
		{
			int sqrt_value = sqrt(a[i]);
			if( sqrt_value*sqrt_value == a[i])
			{
				cout<<a[i]<<" ";
				count +=1;
			}
		}
	}
	if(count == 0)
	{
		cout<<"NULL";
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
	quick_sort(a,0,n-1);
	is_chinh_phuong_in_array(a,n);
	return 0;
}

