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
		ll n,k;
		cin>>n>>k;
		bool found=false;
		vector<ll> arr(n);
		for(ll i{0};i<n;i++) 
			cin>>arr[i];
		ll min=INT_MAX;
		ll mini=0;
		for(ll i{0};i<n;i++)
		{
			if(k%arr[i]==0)
			{
				if(k/arr[i]<min)
				{	
					min=k/arr[i];
					mini=arr[i];
				}
				found=true;
			}
		}
		if(found)
			cout<<mini<<endl;
		else
			cout<<-1<<endl;
	}

	return 0;
}