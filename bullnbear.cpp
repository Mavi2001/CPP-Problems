#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x<y)
	    cout<<"PROFIT"<<endl;
	    else if(x>y)
	    cout<<"LOSS"<<endl;
	    else
	    cout<<"NEUTRAL"<<endl;
	}
	return 0;
}
