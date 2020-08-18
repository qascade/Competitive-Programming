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
		ll l,r;
		cin>>l>>r;
		if(r>2*l)
		{
			cout<<-1<<" "<<-1<<endl;
		}
		else
		{
			cout<<l<<" "<<2*l<<endl;
		}
	}
	return 0;
}