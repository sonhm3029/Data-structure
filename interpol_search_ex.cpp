#include <iostream>

using namespace std;

int first_equal_x(int a[], int n, int x)
{
    int left = 0;
    int right = n-1;
    int mid;
    do{
    	mid = l + (r-l)*(x-a[l])/(a[r] - a[l]);
    	if( a[mid] < x)
    	{
    		l = mid + 1;
		}
		else
		{
			r = mid;
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
    int x; cin>>x;
    return 0;
}
