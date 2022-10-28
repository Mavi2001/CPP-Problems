#include <iostream>
using namespace std;

int main() {
	int i,t,x,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>y;
	    if(y==0)
	    {
	        cout<<x<<endl;
	    }
	    else if(x==y)
	    {
	        cout<<2*y-1<<endl;
	    }
	    else{
	        cout<<2*y + x-y <<endl;
	    }
	}
	return 0;
}
