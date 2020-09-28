#include <bits/stdc++.h>
#define ll long long int

using namespace std;
void printq(deque<ll> q)
{
	for(ll i: q)
		cout<<i<<" ";
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>arr(n);
		for(ll i{0};i<n;i++)
			cin>>arr[i];
		deque<ll> q;
		ll curr_sum=0;
		ll max_sum=INT_MIN;

		for(ll i{0};i<n-2;i++)
		{
			if(q.empty())
			{
				ll temp=3;
				while(temp--)
				{
					q.push_front(arr[temp]);
					curr_sum=curr_sum+arr[temp];
				}
			}
			else
			{
				//cout<<q.front()<<" "<<q.back()<<endl;
				ll temp=q.front();
				q.push_back(arr[i+2]);
				q.pop_front();
				curr_sum=curr_sum-temp +q.back();
			
			}
			if(curr_sum>max_sum)
				max_sum=curr_sum;
		
		}
		ll sum1=arr[0]+arr[n-1]+arr[n-2];
		ll sum2= arr[n-1]+arr[0]+arr[1];
		ll sum=max(sum1,sum2);
		if(max_sum<sum)
			max_sum=sum;
		cout<<max_sum<<endl;
	}

	return 0;
}