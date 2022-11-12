#include <iostream>
using namespace std;

int main() {
	int i,t,a,b,x,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>a>>b>>x>>y;
	    if(a<b)
	    {
	        if((a+x)>=b)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else if(a>b)
	    {
	        if((a-y)<=b)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
