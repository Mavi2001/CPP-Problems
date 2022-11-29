#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    if(n==0)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(n%k==0)
	    cout<<n/k<<endl;
	    else
	    cout<<"-1"<<endl;
	    
	}
	return 0;
}
