#include <iostream>
using namespace std;

int main() {
	int i,t,x,a,b;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>a>>b;
	    cout<<(a+(100-x)*b)*10<<endl;
	}
	return 0;
}
