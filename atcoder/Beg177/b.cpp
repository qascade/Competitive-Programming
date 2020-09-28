#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define MOD 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s,p;
	cin>>s>>p;
	ll ind=0;
	for(ll i{0};i<s.length();i++)
	{
		if(s[i]==p[0])
		{	
			ind=i;
			break;  //abcdeee
		}
	}
	ll count=0;
	cout<<ind<<" ind"<<endl;
	if(s.length()-ind<p.length())
	{
		cout<<p.length()<<endl;
	}
	
	else
	{
		for(ll i=ind;i<p.length()+ind;i++)
		{
			if(s[i]!=p[i-ind])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}