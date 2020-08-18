#include <iostream>
#include <string>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	string s;
	cin>>s;
	string ab="",ba="";
	for(ll i{0};i<n/2;i++)
	{
		ab=ab+"ab";
		ba=ba+"ba";
	} 
	ll ab_count=0;
	ll ba_count=0;
	for(ll i{0};i<n;i++)
	{
		if(s[i]!=ab[i])
		{
			ab_count++;

		}
		if(s[i]!=ba[i])
		{
			ba_count++;
		}
	}
	if(ab_count<ba_count)
	{
		cout<<ab_count<<endl;
		cout<<ab<<endl;
	}
	else if(ab_count==ba_count)
	{
		cout<<ab_count<<endl;
		cout<<ab<<endl;
	}
	else
	{
		cout<<ba_count<<endl;
		cout<<ba<<endl;
	}

	return 0;
}
	