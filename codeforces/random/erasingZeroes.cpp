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
		string a;
		cin>>a;
		ll count=0;
		bool all_zero=true;
		vector<ll> ind;
		for(ll i{0};i<a.length();i++)
		{
			if(a.substr(i,1)=="1")
			{
				ind.push_back(i);
				all_zero=false;
			}

		}
		if(all_zero==false)
		{
			for(ll i{0};i<ind.size()-1;i++)
			{
				ll diff=ind[i+1]-ind[i];
				if(diff==1)
				{
					continue;
				}
				else
				{
					count=count+diff-1;
				}

			}
			cout<<count<<endl;
		}
		else
		{
			cout<<0<<endl;
		}	
	}
	return 0;
}