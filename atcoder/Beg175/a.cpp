#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	cin>>a;
	if(a=="SSS")
		cout<<0;
	else if(a=="SSR")
		cout<<1;
	else if(a=="SRS")
		cout<<1;
	else if(a=="RSS")
		cout<<1;
	else if(a=="RRS")
		cout<<2;
	else if(a=="SRR")
		cout<<2;
	else if(a=="RSR")
		cout<<1;
	else if(a=="RRR")
		cout<<3;		
	return 0;
	
	
}