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
		ll n,k;
		cin>>n>>k;
		ll curr=0;
		ll day=0;
		vector<ll> arr(n);
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		for(ll i=0;i<n;i++)	
		{
			curr=curr+arr[i];
			if(curr<k)
				break;
			curr=curr-k;
			day++;
		}
		if(curr==0)
			day++;
		else
		{
			day=day+curr/k+1;
		}
		cout<<day<<endl;
	}
	return 0;
}