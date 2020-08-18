#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<ll> seconds(4,0);
	for(ll i{0};i<4;i++)
	{
		cin>>seconds[i];
	}
	string a;
	cin>>a;
	ll score=0;
	for(ll c:a)
	{
		if(c=='1')
			score=score+seconds[0];
		else if(c=='2')
			score=score+seconds[1];
		else if(c=='3')
			score=score+seconds[2];
		else if(c=='4')
			score=score+seconds[3];

	}
	cout<<score;
	return 0;
}