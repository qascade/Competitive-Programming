#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
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
		ll n;
		cin>>n;
		vector<ll> arr(n);
		for(ll i{0};i<n;i++)
			cin>>arr[i];
		sort(arr.begin(),arr.end());
		bool diff=true;
		for(ll i{0};i<n-1;i++)
		{
			if(abs(arr[i]-arr[i+1])>1)
			{	
				diff=false;
				break;
			}
			else
				diff=true;
		}

		if(arr.size()==1)
		{	
			cout<<"YES"<<endl;
			continue;
		}
		if(diff==true)
			cout<<"YES"<<endl;
		
		else if(diff==false)
			cout<<"NO"<<endl;
		for(ll a:arr)
			cout<<a;

	}
	return 0;
}