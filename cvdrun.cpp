#include <bits/stdc++.h>
#define ll long long int
#define ld long double


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,x,y;
		cin>>n>>k>>x>>y;
		vector<ll> arr(n);
		bool found=true;
		
		if(x==y)
			found=true;
		else
		{
			ll temp=x;
			while(true)	
			{
				x=(x+k)%n;
				if(x==y)
				{
					found=true;
					break;
				}
				if(x==temp)
				{
					found=false;
					break;
				}
			}
			cout<<endl;
		}
		if(found)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}