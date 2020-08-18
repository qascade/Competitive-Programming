#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll x,k,d;
	cin>>x>>k>>d;
	x=abs(x);

	if(x>0 && x/d>=k)
	{
		x=x-k*d;
		cout<<x;
		return 0;
	}
	else
	{
		ll temp=x/d;
		x=x-temp*d;
		k=k-temp;
		if(k%2==0)
			cout<<abs(x);
		else
			cout<<abs(min(x-d,x+d));
		return 0;
	}
	
	
}