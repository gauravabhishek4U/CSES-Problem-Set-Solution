#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    ll n;
    cin>>n;
    if(n==2 or n==3)
    {
        cout<<"NO SOLUTION";
    }
    else if(n==1)
    {
        cout<<1;
    }
    else
    {
        ll i=2, j=1;
        vector <int> v;
        while(i<=n)
        {
            v.push_back(i);
            i+=2;
        }
        while(j<=n)
        {
            v.push_back(j);
            j+=2;
        }
        for(ll k=0;k<v.size();k++)
        {   cout<<v[k]<<" ";    }

    }
    return 0;
}