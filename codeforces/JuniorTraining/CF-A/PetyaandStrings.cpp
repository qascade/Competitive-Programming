#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<char,ll> m1;
	for(ll i{1};i<=26;i++)
	{
		char j=(char)(i+96);
		m1[j]=i;
	}


	string a,b;
	cin>>a>>b;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	if(a==b)
		cout<<0;
	if(a<b)
		cout<<-1;
	if(b<a)
		cout<<1;
}