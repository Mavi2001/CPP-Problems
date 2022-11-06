#include <iostream>
using namespace std;

int main() {
	int i,t,n,x,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n>>x>>y;
	    if((n+1)*y>=x)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
