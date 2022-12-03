#include <iostream>
using namespace std;

int main() {
	int t,n,x,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>k;
	    if(n*x > k)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
