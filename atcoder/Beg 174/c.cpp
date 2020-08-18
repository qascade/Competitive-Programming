#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string k;
	cin>>k;
	bool allzero=true;
	ll zerocount=0;
	if(stoi(k)%2==0)
	{
		cout<<-1<<endl;
	}
	else if(k=="7")
	{
		cout<<1<<endl;
	}
	else
	{
		if(k[0]=='1'&& k[k.length()-1]=='1')
		{
			for(ll i{2};i<k.length()-1;i++)
			{
				if(k[i]!='0')
				{
					allzero=false;
					break;
				}
				else
				{
					zerocount++;
				}	
			}
			if(allzero)
			{
				if(k=="11")
					cout<<2<<endl;
				else
					cout<<2*(zerocount+2)<<endl;
			}
		}
	}


	return 0;
}