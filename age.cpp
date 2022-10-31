#include <iostream>
using namespace std;

int main() {
	int i,t,x,y,a;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>y>>a;
	    if(a<y && a>=x)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
