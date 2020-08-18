#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

using namespace std;


bool CheckOne(string a)
{
	ll countOne=1;
	ll countZero=1;
	for(ll i{0};i<a.length()-1;i++)
	{
		
		
		if(a[i]=='1')
		{
			if(a[i+1]=='1')
			{
				countOne++;
			}
			else
			{
				countOne=1;
			}
		}
		if(a[i]=='0')
		{
			if(a[i+1]=='0')
			{
				countZero++;
			}
			else
			{
				countZero=1;   //001111111
			}
		}
		
		if(countZero>=7 || countOne>=7)
		{
			return true;   //	
 		}
	}
	return false;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	cin>>a;
	bool flag=CheckOne(a);
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}