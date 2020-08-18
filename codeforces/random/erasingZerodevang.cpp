#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int first,last;
        int count=0;
        bool allzero=true;
        int m=str.length();
        for (int i=0;i<m;i++)
        {
            if (str[i]=='1')
            {
                first=i;
                allzero=false;
                break;
            }
        
        }
        for (int j=m-1;j>=0;j--)
        {
            if (str[j]=='1')
            {
                last=j;
                break;
            }
        }
        for (int k=first;k<=last;k++)
        {
            if (str[k]=='0')
                count++;
        }
        if(allzero==false)
            cout<<count<<endl;
        else
            cout<<0<<endl;
    }
	return 0;
}