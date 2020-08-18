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
		ll a,b;
		cin>>a>>b;
		if(a%b==0)
		{
			cout<<0<<endl;
		}
		else
		{
			if(a>b)
			{
				ll rem=a%b;
				rem=b-rem;
				cout<<rem<<endl;
			}
			else
			{
				cout<<b-a<<endl;
			}
		}
	}
	return 0;
}