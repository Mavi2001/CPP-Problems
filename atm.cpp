#include <iostream>
using namespace std;

int main() {
	int i,t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int arr[100],b[100];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<=k)
	        {
	            k = k - arr[i];
	            b[i] = 1;
	        }
	        else
	        b[i] = 0;
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<b[i];
	    }
	    cout<<endl;
	}
	return 0;
}
