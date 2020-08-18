#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

using namespace std;
void sieve(vector<ll> &arr,ll n)
{
	arr[0]=arr[1]=0;

	for(ll i{2};i<=n;i++)
	{
		if(arr[i]==1 && i*i<=n)
		{
			for(ll j{i*i};j<=n;j+=i)
				arr[j]=0;
		}			
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;

	vector<ll> arr(n+1,1);
	sieve(arr,n);

	for(ll i{0};i<arr.size();i++)
	{
		if(arr[i]==1)
			cout<<i<<" ";
	}
		
	return 0;
	
}