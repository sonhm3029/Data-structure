#include <iostream>

using namespace std;

void insertion_Sort(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
    	for(int j = 0; j<= i; j++)
    	{
    		if(a[j] > a[i])
    		{
    			swap(a[i], a[j]);
			}
		}
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
	insertion_Sort(a, n);
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}



//void insertionSort(int a[], int n){
//	int index, value;
//	for (int i = 1; i < n; i++){
//		index = i;
//		value = a[i];
//		while (index > 0 && a[index - 1] > value){
//			a[index] = a[index - 1];
//			index --;
//		}
//		a[index] = value;
//	}
//} 
