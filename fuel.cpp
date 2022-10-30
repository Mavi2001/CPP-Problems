#include <iostream>
using namespace std;

int main() {
	int i,t,x,y,a,b,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>x>>y>>a>>b>>k;
	    if(x+a*k > y+b*k)
	    cout<<"DIESEL"<<endl;
	    else if(x+a*k < y+b*k)
	    cout<<"PETROL"<<endl;
	    else
	    cout<<"SAME PRICE"<<endl;
	}
	return 0;
}
