#include <iostream>
using namespace std;

int main() {
	int i,j,t,n;
	cin>>t;
	for(j=0;j<t;j++)
	{
	    cin>>n;
	    if(n%2==0)
	    {
	        for(i=0;i<n;i++)
	        {
	            if(i==0)
	            cout<<"1";
	            else if(i==n-1)
	            cout<<"1";
	            else
	            cout<<"0";
	        }
	        cout<<endl;
	    }
	    else
	    {
	        for(i=0;i<n;i++)
	        {
	            if(i%2==0)
	            cout<<"0";
	            else
	            cout<<"1";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
