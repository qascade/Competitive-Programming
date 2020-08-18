#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	arr+1=&arr;
	for(int a: arr)
	{
		cout<<a<<endl;
	}
	return 0;
}