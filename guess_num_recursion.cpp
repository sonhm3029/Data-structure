#include<iostream>

using namespace std;

int gameGuessNumber(long long n)
{
    if (n==1) return 1;
	return 1 + gameGuessNumber(n-(n+1)/2);
}
int main(){
	long long n;
	cin >> n;
	cout << gameGuessNumber(n);
	return 0;
}
