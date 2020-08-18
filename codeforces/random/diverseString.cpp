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
		vector<ll> arr;
		bool no=false;
		bool repeat=false;
		sort(a.begin(),a.end());
		map<char,ll> m;
		for(ll i{0};i<a.length();i++)
		{
			int temp=(int)(a[i]);
			arr.push_back(temp);
			m[a[i]]++;
			if(m[a[i]]>1)
			{
				repeat=true;
			}
		}
		if(repeat==false)
		{	
			for(int i{0};i<arr.size()-1;i++)
			{
				ll diff=arr[i+1]-arr[i];
				if(diff>1)
				{
					no=true;
				}
			}
			if(no==true)
			{
				cout<<"No"<<endl;
			}
			else
				cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}