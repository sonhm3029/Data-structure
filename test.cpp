#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>
using namespace std;

string to_string(long long n){
    string s = "";
    while (n > 0){
        s = char (n%10 + '0') + s;
        n /= 10;
    }
    return s;
}

void encodeString(string s)
{
    int count = 1;
    stack <char> element;
    string result = "";
	for(int i = 0; i< s.size(); i++)
	{
		element.push(s[i]);
	}
	int i = 0;
	while( !element.empty())
	{
		char temp = element.top();
		if(temp != result[i])
		{
			result+=temp;
		}
		element.pop();
		if( element.top() == temp)
		{
			count +=1;
		}
		else
		{
			cout<<endl<<count;
			char e = itoa(count,e,10);
			cout<<endl<<e;
			result.push(e);
			count = 1;
		}
   }
   while(!result.empty())
   {
   		cout<<result.top();
   		result.pop();
	}
}

int main()
{
	string s;
	getline(cin,s);
	encodeString(s);
    return 0;
}
