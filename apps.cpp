#include <iostream>
using namespace std;

int main() {
	int i,t,s,x,y,z;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>s>>x>>y>>z;
	    if(z<=(s-(x+y)))
	    cout<<"0"<<endl;
	    else
	    {
	        if(z<=(s-x) || z<=(s-y))
	        cout<<"1"<<endl;
	        else
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}
