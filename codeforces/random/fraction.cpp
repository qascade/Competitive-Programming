#include <bits/stdc++.h>
#define ll long long int
#define ld long double


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ld n;
	cin>>n;
	ld max=0;
	
	ll a=0,b=0;
	for(ll i=1;i<=n/2;i++)
	{
		ll t=n;
		
		
		t=t-i;
		ld temp1=i;
		ld temp2=t;
		ld div=temp1/temp2;
	
		if(__gcd(t,i)==1)
		{
			if(div>max)
			{	
				max=div;
				a=i;
				b=t;
			}
		}
		

	}
	cout<<a<<" "<<b<<endl;
	
	return 0;
}