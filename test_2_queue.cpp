#include <iostream>
#include <queue>
using namespace std;

bool is_Prime(int n)
{
    if(n < 2)
    {
        return false;
    }
    if( n == 2)
    {
        return true;
    }
    for(int i = 2; i<= n/2; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

bool is_Supper_Prime(int n)
{
    int du;
    int n_1;
    if ( n <=10)
    {
        return is_Prime(n);
    }
    else
    {
    	n = n *10;
        do{
            n_1 = n/10;
            n = n_1;
            if(is_Prime(n_1) == false)
            {
                return false;
            }
        }while( n_1 >10);
        return true;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<=n; i++)
    {
        if(is_Supper_Prime(i) == true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
