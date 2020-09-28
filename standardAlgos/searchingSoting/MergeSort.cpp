#include <bits/stdc++.h>
#define ll long long int
#define ld long double


using namespace std;
void merge(vector<ll> &arr,ll l, ll mid, ll r)
{
	vector<ll> temp(arr.size());
	ll i=l;
	ll j=mid+1;

	//for the temp array
	ll k=0;

	while(i<=mid && j<=r)
	{
		if(arr[i]<=arr[j])
		{	
			temp[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}
	//left over elements
	while(i<=mid)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=r)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	//copying the elements to the original array
	for(ll m=l,p=0;m<=r;m++,p++)
	{
		arr[m]=temp[p];
	}
}
void mergeSort(vector<ll> &arr,ll l ,ll r)
{
	if(r>l)
	{
		//find the mid
		ll mid=(l+r)/2;
		//Dividing the arr
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		//Merging using two pointer approach
		merge(arr,l,mid,r);
	}	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	vector<ll> arr;
	while(t--)
	{
		ll n;
		cin>>n;
		arr.push_back(n);
	}
	mergeSort(arr,0,arr.size()-1);
	for(ll a: arr)
		cout<<a<<" ";
	return 0;
}