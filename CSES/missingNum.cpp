#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define pll pair<ll,ll>
#define F first
#define S second
#define pb(type) push_back(type)
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<ll>arr;
	vector<ll>arr1;
	ll n;
	cin>>n;
	for(ll i{1};i<=n;i++)
	{
		arr.pb(i);
	}
	for(ll i{0};i<n-1;i++)
	{
		ll a;
		cin>>a;
		arr1.pb(a);
	}
	sort(arr1.begin(),arr1.end());
	for(ll i{0};i<arr.size();i++)
	{
		if(arr1[i]!=arr[i])
		{
			cout<<arr[i];
			break;
		}
	}

	return 0;
}