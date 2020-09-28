#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,x;
	cin>>n>>x;
	vector<ll> arr(n);
	map<ll,vector<ll>> m;
	for(ll i{0};i<n;i++)
	{	
		cin>>arr[i];
		m[arr[i]].push_back(i);
	}
	sort(arr.begin(),arr.end());
	auto start=arr.begin(),last=arr.end()-1;
	bool found=false;
	while(start<last)
	{
		if(*start+*last==x)
		{	
			if(m[*start]!=m[*last])	
				cout<<m[*start][0]+1<<" "<<m[*last][0]+1;
			else 
				cout<<m[*start][0]+1<<" "<<m[*last][1]+1;
			found=true;
			break;
		}
		else if(*start+*last>x)
			last--;
		else
			start++;
	}
	if(found==false)
		cout<<"IMPOSSIBLE"<<endl;
	return 0;

}