#include <bits/stdc++.h>
#define ll long long int
#define ld long double


using namespace std;
void swap(ll *a,ll *b)
{
	ll temp=*a;
	*a=*b;
	*b=temp;
}
void recur_sort(ll *arr,ll n)
{
	//small calculation
	if(n==2)
	{
		if(arr[0]>arr[1])
			swap(arr,arr+1);
   		return;                               
	}
	return recur_sort(arr+1,n-1); 											
													
}			


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	ll arr[t];
	for(ll i{0};i<t;i++)
		cin>>arr[i];
	ll size=sizeof(arr)/sizeof(ll);
	recur_sort(arr,size);
	for(ll i:arr)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}