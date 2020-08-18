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
		string s,p;
		cin>>s>>p;
		string sort1=s;
		sort(sort1.begin(),sort1.end());
		//sort(sort2.begin(),sort2.end());
		map<char,ll> m2;
		for(ll i{0};i<sort1.length();i++)
			m2[sort1[i]]++;
		for(ll i{0};i<p.length();i++)
		{	
			m2[p[i]]--;
			if(m2[p[i]]==0)
				m2.erase(p[i]);
		}
		string ans1;
		string ans2;
		string prefix1;
		string prefix2;
		string suffix1;
		string suffix2;
		map<char,ll> m3=m2;
		for(auto it: m2)
		{
			//cout<<it.first<<" "<<it.second<<endl;
			if((int)(it.first)<=(int)(p[0]))
			{
				while(it.second--)
					prefix1=prefix1+it.first;
				m2.erase(it.first);
			}
			
		}
		for(auto it: m3)
		{
			//cout<<it.first<<" "<<it.second<<endl;
			if((int)(it.first)<(int)(p[0]))
			{
				while(it.second--)
					prefix2=prefix2+it.first;
				m3.erase(it.first);
			}
			
		}
		for(auto it:m2)
		{
			while(it.second--)
				suffix1=suffix1+it.first;
		}
		for(auto it:m3)
		{
			while(it.second--)
				suffix2=suffix2+it.first;
		}
		
		ans1=prefix1+p+suffix1;
		ans2=prefix2+p+suffix2;
		if(ans1<ans2)
			cout<<ans1<<endl;
		else if(ans1==ans2)
			cout<<ans2<<endl;
		else
			cout<<ans2<<endl;
	}
	return 0;

}