#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	cout<<n<<" ";
	while(n>1)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=n*3+1;
		}
	}
	return 0;
}