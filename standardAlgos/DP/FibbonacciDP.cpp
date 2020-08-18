#include <bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;
ll fibb(ll n, vector<ll> &fib)
{
	if(n==1 || n==2)
		return 1;
	if(fib[n-1]==-1)
		fib[n-1]=fibb(n-1,fib);
	if(fib[n-2]==-1)
		fib[n-2]=fibb(n-1,fib);
	return fib[n-1]+fib[n-2];

}

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
		vector<ll> fib(n,-1);

		cout<<fibb(n,fib)<<endl;
	}
	return 0;
}