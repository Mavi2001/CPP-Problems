#include<iostream>

using namespace std;

int main() {
	int t,i,k;
	string a,b;
	cin>>t;
	while(t--)
	{
	    int p=0,q=0,r=0,s=0;
	    cin>>a;
	    cin>>b;
	    int n = a.length();
	    for(i = 0 ; i < n ; i++)
	    { 
	        if(a[i]=='0')
	        p = p+1;
	        else
	        q = q+1;
	    }
	    for(i = 0 ; i < n ; i++)
	    {
	        if(b[i]=='0')
	        r = r+1;
	        else
	        s = s+1;
	    }
	    k = min(p,s) + min(q,r);
	    for(i=0;i<n;i++)
	    {
	        if(i<k)
	        cout<<"1";
	        else
	        cout<<"0";
	    }
	    cout<<endl;
	}
	
	return 0;
}
