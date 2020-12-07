#include <bits/stdc++.h>
#define ll long long int
#define ld long double


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	ll sum=stoi(a)+stoi(b);
	string a1,b1;
	for(ll i=0;i<a.length();i++)
	{
		if(a[i]!='0')
			a1.push_back(a[i]);
	}
	for(ll i=0;i<b.length();i++)
	{
		if(b[i]!='0')
			b1.push_back(b[i]);
	}
	string sumstr1=to_string(sum);
	string sumstr2;
	for(ll i=0;i<sumstr1.length();i++)
	{
		if(sumstr1[i]!='0')
			sumstr2.push_back(sumstr1[i]);
	}
	string sumstr3=to_string(stoi(a1)+stoi(b1));	
	// cout<<a1<<" "<<b1<<" "<<sumstr2<<" "<<sumstr3<<endl;
	if(sumstr3==sumstr2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}