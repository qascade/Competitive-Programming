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
	for(ll m{2};m<=n;m++)
	{
		if(primeSieve[m]==1 && n%m==0)
		{
			//cout<<i<<endl;
			factors.push_back(m);
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
	sieve(arr,n);
	if(n<=5)
		cout<<0<<endl;
	else
	{
		ll cnt=0;
		vector<ll> primefactors;
		for(ll i{6};i<=n;i++)
		{
			PFS(primefactors,arr,i);
			// for(ll a:primefactors)
			// 	cout<<a<<" ";
			// cout<<"NUM= "<<i;
			// cout<<endl;
			if(primefactors.size()==2)
				cnt++;
			//cout<<cnt<<" count"<<endl;
			primefactors.clear();
		}
		
		cout<<cnt;
	}

	return 0;
	
}