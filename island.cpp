#include <iostream>
using namespace std;

int main() {
	int i,t,x,y,a,b,d;
	double p,q;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>y>>a>>b>>d;
	    p = x/a;
	    q = y/b;
	    if(p<q)
	    {
	        if(p<d)
	        cout<<"NO"<<endl;
	        else
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        if(q<d)
	        cout<<"NO"<<endl;
	        else
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
