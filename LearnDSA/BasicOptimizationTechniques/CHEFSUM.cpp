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
		vector<ll>arr(n);
		ll mini=INT_MAX;
		ll min_ind=INT_MAX;
		for(ll i{0};i<n;i++)
		{	
			cin>>arr[i];
			if(arr[i]<mini)
			{
				mini=arr[i];
				min_ind=i;
			}
			
		}
		cout<<min_ind+1<<endl;
	}

	return 0;
}