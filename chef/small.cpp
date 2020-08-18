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
		sort(s.begin(),s.end());
		map <char,ll> freq1;
		map <char,ll> freq2;
		for(ll i{0};i<s.length();i++)
			freq1[s[i]]++;
		for(ll i{0};i<p.length();i++)
		{	
			freq1[p[i]]--;
			if(freq1[p[i]]==0)
				freq1.erase(p[i]);
		}
		freq2=freq1;

		string p1,p2,s1,s2,a1,a2;
		for(auto i=freq1.begin();i!=freq1.end();i++)    
		{
			if((int)(i->first)<=(int)(p[0]))
			{
				while(i->second--)
				{
					p1=p1+i->first;					
				}
				freq1.erase(i->first);
			}
		}
		for(auto i=freq1.begin();i!=freq1.end();i++)
		{
			while(i->second--)
			{
				s1=s1+i->first;
			}
			freq1.erase(i->first);
		}
		for(auto i=freq2.begin();i!=freq2.end();i++)    
		{
			if((int)(i->first)<(int)(p[0]))
			{
				while(i->second--)
				{
					p2=p2+i->first;					
				}
				freq2.erase(i->first);
			}
		}
		for(auto i=freq2.begin();i!=freq2.end();i++)
		{
			while(i->second--)
			{
				s2=s2+i->first;
			}
			freq2.erase(i->first);
		}
		a1=p1+p+s1;
		a2=p2+p+s2;
		if(a1<=a2)
			cout<<a1<<endl;
		else
			cout<<a2<<endl;
	}

	return 0;
}