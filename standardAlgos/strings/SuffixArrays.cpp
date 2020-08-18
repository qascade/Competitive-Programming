#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	string s;
	cin>>s;
	s+="$";
	ll n=s.length();
	vector<ll> p(n),c(n); //p is suffix arr, c are equaivalence classes
	
		//k=0 base case
		vector<pair<char,ll>> a(n);
		for (ll i = 0; i < n; i++)
		{
			a[i]={s[i],i};
		}
		sort(a.begin(),a.end());
		for(ll i=0; i < n; i++)
		{
			p[i]=a[i].second;
		}
		c[p[0]]=0;
		for(ll i = 1; i < n; i++)
		{
			if(a[i].first==a[i-1].first)
			{
				c[p[i]]=c[p[i-1]];
			}
			else
			{
				 c[p[i]]=c[p[i-1]]+1;
			}
		}

		ll  k=0;
		while((1<<k)<n)
		{
			//k->k+1
			vector<pair<pair<ll,ll>,ll>> a(n);
			for(ll i{0}; i < n; i++)
			{
				a[i]={{c[i],c[i+ (1<<k) % n]},i};
			}
			sort(a.begin(),a.end());
			for(ll i=0; i < n; i++)
			{
				p[i]=a[i].second;
			}
			c[p[0]]=0;
			for(ll i = 1; i < n; i++)
			{
				if(a[i].first==a[i-1].first)
				{
					c[p[i]]=c[p[i-1]];
				}
				else
				{
					 c[p[i]]=c[p[i-1]]+1;
				}

			}
			k++;
		}	

		for(ll i: p)
		{
			cout<<i<<" ";
		}

	return 0;
}