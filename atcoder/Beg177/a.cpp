#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long double d,t,s;
	cin>>d>>t>>s;
	long double tu=d/s;
	if(tu<=t)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}