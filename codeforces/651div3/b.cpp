#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

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
		vector<ll> a;
		vector<ll> b;
		ll count=0;
		for(ll i{0};i<n;i++)
		{
			ll y;
			cin>>y;
			a.push_back(y);
		}
		for(ll i{0};i<n;i++)
		{
			ll y;
			cin>>y;
			b.push_back(y);
		}
		ll min_a=*min_element(a.begin(),a.end());
		ll min_b=*min_element(b.begin(),b.end());
		for(ll i{0};i<n;i++)
		{
			ll diff1=a[i]-min_a;
			ll diff2=b[i]-min_b;
			if(diff1>diff2)
			{
				count=count+diff2;
				b[i]=min_b;
				a[i]=a[i]-diff2;
				diff1=diff1-diff2;
				a[i]=a[i]-diff1;
				count=count+diff1;
			}
			else
			{
				count=count+diff1;
				a[i]=min_a;
				b[i]=b[i]-diff1;
				diff2=diff2-diff1;
				b[i]=b[i]-diff2;
				count=count+diff2;
			}
		}
		cout<<count<<endl;
		
	}
	return 0;
}