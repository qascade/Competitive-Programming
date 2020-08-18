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
		ll h,p;
		cin>>h>>p;
		ll sum=0;
		while(p>0)
		{
			sum=sum+p;
			p=p/2;
		}
		cout<<sum<<" sum"<<endl;
		if(sum>=h)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}

}