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
		long double chef_p,rick_p;
		cin>>chef_p>>rick_p;
		long double count1=ceil(chef_p/9.0) ;
		long double count2=ceil(rick_p/9.0) ;

		if(count1>count2)
			cout<<1<<" "<<count2<<endl;
		else if(count1==count2)
			cout<<1<<" "<<count2<<endl;
		else
			cout<<0<<" "<<count1<<endl;
	}

	return 0;
}