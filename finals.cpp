#include <iostream>
using namespace std;

int main() {
	int i,t,x,y,d;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>y>>d;
	    if(x>y)
	    {
	        if(x-y <= d)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else if(y>x)
	    {
	        if(y-x <= d)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
