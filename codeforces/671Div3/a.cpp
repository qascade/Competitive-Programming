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
		ll a,b;
		cin>>a>>b;
		ll count=0;
		ll diff = abs(a-b);
		
		if(a==b)
			count=0;
		else
		{
			count=count+diff/10;	
		}
		if(diff%10>0)
			count++;
		cout<<count<<endl;
	}
	
	return 0;
}