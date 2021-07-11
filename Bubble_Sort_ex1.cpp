#include <iostream>

using namespace std;

void Bubble_Sort(int a[], int n )
{
	if( n >= 0)
	{
	
    	for(int i = 0; i<n - 1; i++)
    	{
        	if(a[i] > a[i +1] )
        	{
        		swap(a[i], a[i + 1]);
			}
    	}
    	Bubble_Sort(a, n - 1);
	}
}

int main()
{
    int n; cin>>n;
    int a[n];
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    Bubble_Sort(a, n);
    for(int i = 0; i<n ;i++)
    {
    	cout<<a[i]<<" ";
	}
    return 0;
}



//
//void bubbleSort(int a[], int n){
//	for (int i = n-1; i >= 1; i--){
//		for (int j = 0; j < i; j++){
//			if (a[j] > a[j+1]){
//				int temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//			}
//		}
//	}
//}
