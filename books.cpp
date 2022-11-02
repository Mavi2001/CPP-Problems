#include <iostream>
using namespace std;

int main() {
	int i,t,x,y,z;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>y>>z;
	    if(y%z==0)
	    {
	        cout<<x*(y/z)<<endl;
	    }
	    else
	    {
	        cout<<x*(y/z + 1)<<endl;
	    }
	}
	return 0;
}
