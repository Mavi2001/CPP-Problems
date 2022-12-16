#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int i,arr[100],count = 0;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>k)
	        count = count + 1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
