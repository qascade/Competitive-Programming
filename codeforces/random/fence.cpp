 #include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,h;
	cin>>n>>h;
	ll w=0;
	while(n--)
	{
		ll a;
		cin>>a;
		if(a>h)
			w=w+2;
		else
			w=w+1;
	}
	cout<<w<<endl;
	return 0;
}	