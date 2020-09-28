#include <bits/stdc++.h>
#define ll long long int
#define ld long double


using namespace std;

void SelectSort(vector<ll> &arr)
{
	for(ll i=0;i<arr.size()-1;i++)
	{
		ll min_idx=i;
		for(ll j= i+1;j<arr.size();j++)
		{
			if(arr[j]<arr[min_idx])
				min_idx=j;
		}
		ll temp=arr[min_idx];
		arr[min_idx]=arr[i];
		arr[i]=temp;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	vector<ll> arr;
	while(t--)
	{
		ll n;
		cin>>n;
		arr.push_back(n);		
	}
	SelectSort(arr);
	for(ll a: arr)
		cout<<a<<" ";
	
	return 0;
}