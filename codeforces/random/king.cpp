 #include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	cin>>a;
	char col=a[0];
	string num=a.substr(1,1);
	int n=stoi(num);

	if(col >='b' && col<='g' && n>=2 && n<=7)
		cout<<8<<endl;
	else if(col=='a' || col =='h')
	{
		if(n==1 || n== 8)
			cout<<3<<endl;
		else
			cout<<5<<endl;
	}
	else 
		cout<<5<<endl;



	return 0;
}	