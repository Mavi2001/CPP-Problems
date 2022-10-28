#include <iostream>
using namespace std;

int main() {
	int i,n,count=0;
	cin>>n;
	while(n>0)
	{
	    n=n/10;
	    count=count+1;
	}
	if(count<=3)
	{
	    cout<<count<<endl;
	}
	else
	cout<<"More than 3 digits"<<endl;
	
	return 0;
}
