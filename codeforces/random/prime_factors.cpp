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
void PFS(vector<ll>&factors,vector<ll> primeSieve,ll n)
{
	for(ll i{0};i<=n;i++)
	{
		if(primeSieve[i]==1 && n%i==0)
		{
			//cout<<i<<endl;
			factors.push_back(i);
		}
		else
			continue;
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;

	vector<ll> arr(n+1,1);
	vector<ll> primefactors;
	sieve(arr,n);
	// for(ll i{0};i<arr.size();i++)
	// {
	// 	if(arr[i]==1)
	// 		cout<<i<<" ";
	// }
	cout<<endl;
	PFS(primefactors,arr,n);
	
	return 0;
	
}