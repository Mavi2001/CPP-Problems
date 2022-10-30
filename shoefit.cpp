#include <iostream>
using namespace std;

int main() {
	int i,t,a,b,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>a>>b>>c;
	    if(a==b && b==c)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}
