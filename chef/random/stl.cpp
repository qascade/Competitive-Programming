#include <bits/stdc++.h>
#define ll long long int 
#define ld long double 
using namespace std;

int main()
{
	//fast i/o
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<char,ll> m; 
	string a;
	cin>>a;
	for(char i: a)
		m[i]++;

	for(auto it:m )
		cout<<it.first<<it.second<<" ";
	cout<<endl;
	

	for(auto it=m.begin();it!=m.end();it++)
		cout<<(*it).first<<(*it).second<<" ";
	cout<<endl;
	for(auto it=m.begin();it!=m.end();it++)
		cout<<it->first<<it->second<<" ";
	cout<<endl;
	return 0;
}