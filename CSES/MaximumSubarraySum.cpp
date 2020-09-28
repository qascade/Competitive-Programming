#include <bits/stdc++.h>
#define ll long long int

using namespace std;
ll kadane(vector<ll> arr)
{
	ll best_sum=INT_MIN,curr_sum=0;
	for(ll i{0};i<arr.size();i++)
	{
		curr_sum=curr_sum+arr[i];
		best_sum=max(best_sum,curr_sum);
		if(curr_sum<0)
			curr_sum=0;
	}
	return best_sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	vector<ll> arr(n);
	for(ll i{0};i<n;i++)
		cin>>arr[i];
	cout<<kadane(arr)<<endl;
	return 0;

}