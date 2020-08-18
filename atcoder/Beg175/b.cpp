#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	vector<ll> arr(n);
	ll count=0;
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	for(ll i=0;i<n;i++)
		for(ll j=i+1;j<n;j++)
			for(ll k=j+1;k<n;k++)
			{
				if(arr[i]!=arr[j] && arr[j]!=arr[k])
				{
					if(arr[i]+arr[j]>arr[k])
						count++;
				}
			}
	cout<<count;
	return 0;
	
}