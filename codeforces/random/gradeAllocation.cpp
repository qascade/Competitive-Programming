#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		vector<ll>arr;
		ll sum=0;
		bool alreadyMax=false;
		for(ll i{0};i<n;i++)
		{
			ll a;
			cin>>a;
			if(a==m)
			{
				alreadyMax=true;
				break;
			}
			
			arr.push_back(a);
		}
		
		//sort(arr.begin(),arr.end());
		for(ll i{0};i<n-1;i++)
		{
			sum+=arr[i];
		}
		if(alreadyMax)
		{
			cout<<m<<endl;
		}
		else
		{
			ll diff=m-arr[n-1];
			if(sum>=diff)
			{
				cout<<m<<endl;
			}
			else
			{
				cout<<arr[n-1]+sum<<endl;
			}	
				
		}

	}
	return 0;
}