#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,x,y;
	cin>>n>>x>>y;
	n=n/2;

	if((x==n || x==n+1) && (y==n||y==n+1))
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl; 

	return 0;
}