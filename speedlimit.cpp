#include <iostream>
using namespace std;

int main() {
	int i,t;
	double a,x,b,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>a>>x>>b>>y;
	    if(a/x>b/y)
	    cout<<"Alice"<<endl;
	    else if(a/x<b/y)
	    cout<<"Bob"<<endl;
	    else
	    cout<<"Equal"<<endl;
	}
	return 0;
}
