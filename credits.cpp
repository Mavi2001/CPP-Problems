#include <iostream>
using namespace std;

int main() {
	int i,t,x;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x;
	    if(x>65)
	    cout<<"Overload"<<endl;
	    else if(x<35)
	    cout<<"Underload"<<endl;
	    else
	    cout<<"Normal"<<endl;
	}
	return 0;
}
