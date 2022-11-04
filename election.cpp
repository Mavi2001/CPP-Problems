#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>a>>b>>c;
	    if((a+c)>b)
	    cout<<a+c<<endl;
	    else
	    cout<<b<<endl;
	}
	return 0;
}
