#include <iostream>
using namespace std;

int main() {
	int i,t,x,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>y;
	    if(2*x>5*y)
	    {
	        cout<<"Chocolate"<<endl;
	    }
	    else if(2*x<5*y)
	    {
	        cout<<"Candy"<<endl;
	    }
	    else
	    cout<<"Either"<<endl;
	}
	return 0;
}
