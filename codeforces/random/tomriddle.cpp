#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	map<string,ll> m;
	
	while(t--)
	{
		string a;
		cin>>a;
		if(m.count(a))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
			m[a]=1;
		}
	}
	return 0;
}