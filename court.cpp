#include <iostream>
using namespace std;

int main() {
	int i,t,x,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>y;
	    if(x>y && x-y >1)
	    {
	        if((x-y)%2==0)
	        cout<<(x-y)/2<<endl;
	        else
	        cout<<(x-y)/2 + 1<<endl;
	    }
	    else
	    {
	     if((y-x)%2==0)
	        cout<<(y-x)/2<<endl;
	        else
	        cout<<(y-x)/2 + 1<<endl;   
	    }
	}
	return 0;
}
