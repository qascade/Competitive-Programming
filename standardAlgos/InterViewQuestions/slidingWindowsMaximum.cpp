#include <bits/stdc++.h>
#define ll long long int

using namespace std;
//printing maximum in the window of size k 
vector<ll> maxSlidingWindow(vector<ll>arr,ll k)
{
	ll n=arr.size();
	deque<ll> q;
	vector<ll> ans(n-k+1);

	for(ll i=0;i<n;i++)
	{
		if(i<k)
		{
			while(!q.empty() && arr[q.back()]<=arr[i])
			{
				q.pop_back();
			}
			q.push_back(i);
		}
		else
		{
			ans[i-k]=arr[q.front()];
			while(!q.empty() && q.front()<=i-k)
			{
				q.pop_front();
			}

			while(!q.empty() && arr[q.back()]<=arr[i])
			{
				q.pop_back();
			}
			q.push_back(i);
		}
	}
	ans[n-k]=arr[q.front()];
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll> arr(n);
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		//Output will have n-k+1 
		vector<ll> ans=maxSlidingWindow(arr,k);
		for(ll i: ans)
			cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}