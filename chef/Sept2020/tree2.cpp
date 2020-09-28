#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		map<ll,ll> m;
		ll count=0;
		bool allzero=true;
		for(ll i{0};i<n;i++)
		{
			ll a;
			cin>>a;
			if(a!=0)
				allzero=false;
			m[a]=1;
		}	
		for(auto it: m)
		{
			if(it.second==1 && it.first!=0)
				count++;
		}
		if(allzero)
			cout<<0<<endl;
		else
			cout<<count<<endl;
	}
	
	return 0;
}