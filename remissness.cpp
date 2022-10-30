#include <iostream>
using namespace std;

int main() {
	int i,t,a,b;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>a>>b;
	    if(a>=b)
	    {
	        cout<<a<<" "<<a+b<<endl;
	    }
	    else
	    {
	        cout<<b<<" "<<a+b<<endl;
	    }
	}
	return 0;
}
