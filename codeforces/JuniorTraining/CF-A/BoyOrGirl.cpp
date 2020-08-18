#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<char,ll>m;
	string a;
	cin>>a;
	ll count=0;
	for(char b:a)
	{	
		if(m.count(b))
			continue;
		else
			m[b]=1;
			count++;
	}
	if(count%2==0)
	{
		cout<<"CHAT WITH HER!";
	}
	else
		cout<<"IGNORE HIM!";
	

	return 0;
}