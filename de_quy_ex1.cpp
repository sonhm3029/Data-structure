#include <iostream>

using namespace std;

int giai_thua(int n)
{
	if( n >1)
	{
    	return n*giai_thua(n-1);
	}
}

int main()
{
    int n; cin>>n;
    cout<<giai_thua(n);
    return 0;
}
