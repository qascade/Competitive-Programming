#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t=1;
	
	while(t--)
	{
		ll n;
		long double d;
		cin>>n;
		cin>>d;
		ll count=0;
		while(n--)
		{
			ll x,y;
			cin>>x>>y;
			long double dis=sqrt((x*x)+(y*y));
			if(dis<=d)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}