#include <iostream>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    int i,k=0,arr[100];
	    for(i=1;i<=n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=1;i<=n;i++)
	    {
	        if(arr[i]<x)
	        k=i;
	    }
	    cout<<k<<endl;
	}
	return 0;
}
