#include <iostream>
using namespace std;

int main() {
	int i,t,w,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>w>>x>>y>>z;
	    if(x==w || y==w || z==w)
	    cout<<"YES"<<endl;
	    else if(x+y==w || y+z==w || x+z==w)
	    cout<<"YES"<<endl;
	    else if(x+y+z==w)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
