#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int count=1, max_length = 1;
	string s;
	cin>>s;
	for(int i=1; i<=s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			count+=1;
			max_length = max(count, max_length);
		}
		else
		{
			max_length = max(count, max_length);
			count = 1;
		}
		cout<<max_length;
	}

	return 0;
}