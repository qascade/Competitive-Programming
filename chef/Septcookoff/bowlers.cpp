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
		ll n,k,l;
		cin>>n>>k>>l;
		if(n<k)
			cout<<-1<<endl;
		else if(n>k && l==1)
			cout<<-1<<endl;
		else
		{
			bool comp=true;
			map<ll,ll> m;
			for(ll i{1};i<=k;i++)
				m[i]=l;
			vector<ll> arr;
			for(ll i{0};i<k;i++)
			{	
				arr.push_back(i+1);
				m[i+1]--;
			}
			ll temp1=1;
			while(arr.size()!=n)
			{
				if(temp1>k)
					temp1=1;
				if(m[temp1]!=0)
				{
					arr.push_back(temp1);
					m[temp1]--;
				}
				temp1++;
				for(auto it: m)
				{	
					if(it.second!=0)
					{
						comp=true;
						break;
					}
					else if(arr.size()==n)
					{
						comp=true;
						break;
					}
					comp=false;
				}	
				
				if(comp==false)
					break;
			}		
			if(comp==false)
				cout<<-1<<endl;
			else
			{
				for(ll i: arr)
					cout<<i<<" ";
				cout<<endl;
			}
		}
	}

	return 0;
}