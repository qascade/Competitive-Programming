 #include <bits/stdc++.h>
#define ll long long int
#define ld long double


using namespace std;
void print(vector<ll> arr)
{
	for(ll a: arr)
		cout<<a<<" ";
}
void NonStableCountingsSort(vector<ll> &arr)
{

	ll n= *max_element(arr.begin(),arr.end());

	vector<ll> aux(n+1);
	vector<ll> res;
	for(ll i=0;i<arr.size();i++)
	{
		aux[arr[i]]++;
	}
	// print(aux);
	// cout<<" Auxiliry Non Stable"<<endl;
	ll i=0;
	while(i<aux.size())
	{
		if(aux[i]==0)
		{
			i++;
			continue;
		}
		else
		{
			ll temp=aux[i];
			while(temp--)
			{
				res.push_back(i);
			}
		}
		// print(res);
		// cout<<endl;
		i++;
	}
	for(ll i=0;i<arr.size();i++)
		arr[i]=res[i];	
}

void CountingSortStable(vector<ll> & arr)
{
	ll n= *max_element(arr.begin(),arr.end());

	vector<ll> aux(n+1);
	vector<ll> cmf(n+1);
	vector<ll> res(arr.size());
	for(ll i=0;i<arr.size();i++)
	{
		aux[arr[i]]++;
		cmf[arr[i]]++;
	}
	//creating the cumulative frequency arr for maintaining stability in the array
	for(ll i{0};i<cmf.size()-1;i++)
	{
		cmf[i+1]=cmf[i+1]+cmf[i];
	}
	// print(aux);
	// cout<<endl;
	// print(cmf);
	// cout<<endl;
	for(ll i=arr.size()-1;i>=0;i--)
	{
		res[cmf[arr[i]]-1]=arr[i];
		cmf[arr[i]]--;
	}
	for(ll i=0;i<arr.size();i++)
	{
		arr[i]=res[i];
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	vector<ll> arr1;
	vector<ll> arr2;
	while(t--)
	{
		ll n;
		cin>>n;
		arr1.push_back(n);
		arr2.push_back(n);
	}
	CountingSortStable(arr1);
	print(arr1);
	cout<<" Stable"<<endl;
	NonStableCountingsSort(arr2);
	print(arr2);
	cout<<" NotStable"<<endl; 
	return 0;
}